//============================================================================
// Name        : Singly.cpp
// Author      : Rizwan
// Version     :
// Copyright   : This code can be used anywhere for educational purpose but not for the Exam submission purpose.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

// A linked list Node
class Node {
   public:
      int data;
   Node * next;
   Node() {
      data = 0;
      next = NULL;
   }
};

class linkedlist {
   public:

      Node * head, * tail;

   linkedlist() {
      head = NULL;
      tail = NULL;
   }
   bool isempty() {
      if (head == NULL) {
         return true;
      }
      return false;
   }
   void createnode(int val) {
      Node * temp;
      temp = new Node;
      temp -> data = val;
      temp -> next = NULL;
      if (head == NULL) {
         head = temp;
         tail = temp;
         temp = NULL;
      } else {
         tail -> next = temp;
         tail = temp;
      }
      temp = NULL;
      delete temp;
   }
   void addfront(int value) {
      if (!isempty()) {
         Node * temp;
         temp = new Node;
         temp -> data = value;
         temp -> next = head;
         head = temp;
         temp = NULL;
         delete temp;
      }
   }
   void addlast(int value) {
      if (!isempty()) {
         Node * temp;
         temp = new Node;
         temp -> data = value;
         temp -> next = NULL;
         tail -> next = temp;
         tail = temp;
         temp = NULL;
         delete temp;
      }
   }
   void display() {
      if (!isempty()) {
         Node * temp;
         temp = new Node;
         temp = head;
         while (temp != NULL) {
            cout << temp -> data << " , ";
            temp = temp -> next;
         }
         temp = NULL;
         delete temp;
      }
   }
   void deleteend() {
      if (!isempty()) {
         Node * pre;
         Node * curr;
         pre = new Node;
         curr = new Node;
         curr = head;
         while (curr -> next != NULL) {
            pre = curr;
            curr = curr -> next;
         }
         tail = pre;
         tail -> next = NULL;
         pre = NULL;
         curr = NULL;
         delete pre;
         delete curr;
      }
   }
   void deletefront() {
      if (!isempty()) {
         head = head -> next;
      }
   }
   int getsize() {
      Node * temp;
      temp = head;
      int return_size(1);
      while (temp -> next != NULL) {
         return_size++;
         temp = temp -> next;
      }
      return return_size;
   }
   void addpos(int value, int pos) {
      if (!isempty()) {
         if (pos == 1) {
            addfront(value);
         } else {
            if (pos > 1 && pos <= getsize()) {
               Node * pre, * curr;
               pre = new Node;
               curr = new Node;
               curr = head;
               Node * temp;
               temp = new Node;
               temp -> data = value;
               for (int i = 1; i != pos; i++) {
                  pre = curr;
                  curr = curr -> next;
               }
               temp -> next = curr;
               pre -> next = temp;
               temp = NULL;
               curr = NULL;
               pre = NULL;
               delete temp;
               delete curr;
               delete pre;
            } else {
               cout << "\nError\n";
            }
         }
      }
   }
   void sort() {
      if (!isempty()) {
         Node * ptr, * s;
         if (head == NULL) {
            cout << "The List is empty" << endl;
            return;
         }
         ptr = head;
         while (ptr != NULL) {
            for (s = ptr -> next; s != NULL; s = s -> next) {
               if (ptr -> data < s -> data) {
                  swap(ptr -> data, s -> data);
//if swap doesnot work you can modify it as
//value = ptr->data;
//ptr->data = s->data;
//s->data = value;
               }
            }
            ptr = ptr -> next;
         }
      }
   }
   void delparticular(int position) {
      if (!isempty()) {
         if (position == 1) {
            head = head -> next;
         } else {
            if (position > 1 && position <= getsize()) {
               Node * pre, * curr;
               int count(1);
               curr = head;
               while (count != position) {
                  pre = curr;
                  curr = curr -> next;
                  count++;
               }
               pre -> next = curr -> next;
               pre = NULL;
               curr = NULL;
               delete pre;
               delete curr;

            } else {
               cout << "\nError\n";
            }
         }
      }
   }
   void update_particular(int position, int value) {
      if (!isempty()) {
         if (position == 1) {
            head -> data = value;
         } else {
            if (position > 1 && position <= getsize()) {
               int count(1);
               Node * temp;
               temp = head;
               while (count != position) {
                  temp = temp -> next;
                  count++;
               }
               temp -> data = value;
               temp = NULL;
               delete temp;
            } else {
               cout << "\nError\n";
            }

         }
      }
   }
   void search(int val) {
      if (!isempty()) {
         Node * temp = head;
         bool flag = false;
         int pos(1);
         while (temp -> next != NULL) {
            if (val == temp -> data) {
               flag = true;
               break;
            }
            pos++;
            temp = temp -> next;
         }
         if (flag) {
            cout << "\n--------------------------------------------------\n";
            cout << "---------------Value " << val << " found at position " << pos << " ---------------";
            cout << "\n--------------------------------------------------\n";

         }
      }
   }
   void reverse() {
      if (!isempty()) {
         Node * curr = head;
         Node * pre = NULL, * next = NULL;

         while (curr != NULL) {
            // Store next
            next = curr -> next;

            // Reverse current node's pointer
            curr -> next = pre;

            // Move pointers one position ahead.
            pre = curr;
            curr = next;
         }
         head = pre;
         pre = NULL;
         curr = NULL;
         next = NULL;
         delete pre;
         delete curr;
         delete next;
      }
   }
};
int main() {

   linkedlist obj;
   obj.createnode(25);
   obj.createnode(50);
   obj.createnode(90);
   obj.createnode(40);

   obj.addlast(7);

   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying All nodes---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.addfront(6);
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After Add-front---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.addlast(612);
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After Add-LAst---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.deleteend();
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After delete end---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.deletefront();
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After delete-front---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.addpos(9, 1);
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After Add-position---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.sort();
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After Sorting---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.delparticular(2);
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After Paritcular Delete---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.update_particular(4, 3);
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After Paritcular Update---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.search(3);
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After Paritcular search---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   obj.reverse();
   cout << "\n--------------------------------------------------\n";
   cout << "---------------Displaying After reverse---------------";
   cout << "\n--------------------------------------------------\n";
   obj.display();
   //cout<<obj.getsize();
   return 0;
}
