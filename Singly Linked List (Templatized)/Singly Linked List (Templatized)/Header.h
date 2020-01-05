


#include<iostream>
using namespace std;

template <class DT>
class Node {
public:
	DT data;
	Node* next;
	Node() {
		data = 0;
		next = NULL;
	}

};
template <class DT>
class List {


public:
	Node<DT>* head;
	Node<DT>* tail;
	Node<DT>* cursor;
	int count;

	List() {
		head = NULL;
		tail = NULL;
		cursor = NULL;
	}

	void insert(const DT& newDataItem) {
		Node<DT>* temp = new Node<DT>;
		//temp = new Node;
		temp->data = newDataItem;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
			tail = temp;
			cursor = temp;
			temp = NULL;
			count++;
		}
		else {
			tail->next = temp;
			tail = temp;
			cursor = temp;
			count++;
		}
		temp = NULL;
		delete temp;
	}


	void insertAt(const DT& newDataItem, int index) {
		if (index <= count && index != 1)
		{
			Node<DT>* temp = new Node<DT>;
			Node<DT>* curr = new Node<DT>;

			curr = head;
			temp->data = newDataItem;
			for (int i = 1; i < index - 1; i++) {
				curr = curr->next;
			}
			temp->next = curr->next;
			curr->next = temp;
			cursor = temp;
			temp = NULL;
			curr = NULL;
			delete temp;
			delete curr;
			count++;

		}
		else if (index == 1) {
			Node<DT>* temp = new Node<DT>;
			temp->data = newDataItem;

			temp->next = head;
			head = temp;
			cursor = temp;
			temp = NULL;
			delete temp;
			count++;
		}
	}


	void remove() {
		if (!isEmpty()) {
			Node<DT>* temp = new Node<DT>;
			temp = head;
			while (temp->next != cursor) {
				temp = temp->next;
			}
			temp->next = cursor->next;
			cursor = NULL;
			delete cursor;
			temp = NULL;
			delete temp;
			count--;
			if (cursor == NULL) {
				cursor = head;
			}
		}
	}



	void removeAt(int index) {
		if (!isEmpty()) {
			if (index == 1) {
				head = head->next;
				count--;
				cursor = head;
			}
			else {
				if (index > 1 && index <= count) {
					Node<DT>* pre = new Node<DT>;
					Node<DT>* curr = new Node<DT>;
					int count_(1);
					curr = head;
					while (count_ != index) {
						pre = curr;
						curr = curr->next;
						count_++;
					}
					pre->next = curr->next;
					if (index != count) {
						cursor = curr->next;
					}
					else {
						cursor = head;
					}
					pre = NULL;
					curr = NULL;

					delete pre;
					delete curr;
					count--;
				}
				else {
					cout << "\nError\n";
				}
			}
		}

	}
	void replace(const DT& newDataItem) {
		if (!isEmpty()) {
			cursor->data = newDataItem;
		}
	}
	void replaceAt(const DT& newDataItem, int index) {
		if (!isEmpty()) {
			if (index == 1) {
				head->data = newDataItem;
			}
			else {
				if (index > 1 && index <= count) {
					int count_(1);
					Node<DT>* temp = new Node<DT>;
					temp = head;
					while (count_ != index) {
						temp = temp->next;
						count_++;
					}
					temp->data = newDataItem;
					temp = NULL;
					delete temp;
				}
				else {
					cout << "\nError\n";
				}

			}
		}
	}


	void clear() {

		Node<DT>* next1;

		next1 = head;
		while (head != NULL) {

			head = head->next;
			delete next1;
			next1 = head;
		}
		head = NULL;
	}
	bool gotoNext() {
		if (!isEmpty()) {
			if (cursor->next != NULL) {
				cursor = cursor->next;
				return true;
			}

		}
		return false;

	}
	DT getCursor() {
		if (!isEmpty()) {
			Node<DT>* temp = cursor;
			return temp;
		}
	}
	bool moveCursortoEnd() {
		if (!isEmpty()) {
			cursor = tail;
			return true;
		}
		return false;
	}
	void sort() {
		if (!isEmpty()) {
			Node<DT>* ptr, * s;
			if (head == NULL) {
				cout << "The List is empty" << endl;
				return;
			}
			ptr = head;
			while (ptr != NULL) {
				for (s = ptr->next; s != NULL; s = s->next) {
					if (ptr->data < s->data) {
						swap(ptr->data, s->data);
						//if swap doesnot work you can modify it as
						//value = ptr->data;
						//ptr->data = s->data;
						//s->data = value;
					}
				}
				ptr = ptr->next;
			}
		}
	}
	bool duplicate() {
		Node<DT>* curr, * next;
		curr = head;
		//next = head->next;
		while (curr->next != NULL) {
			next = curr->next;
			while (next->next != NULL) {
				if (curr->data == next->data) {
					return true;
				}
				else {
					next = next->next;
				}
			}
			curr = curr->next;
		}

		curr = NULL;
		next = NULL;
		delete curr;
		delete next;
		return false;
	}
	void display() {
		if (!isEmpty()) {
			Node <DT>* temp = new Node<DT>;
			temp = head;
			while (temp != NULL) {
				cout << temp->data << ",";
				temp = temp->next;
			}
		}
	}

	bool isEmpty() {
		if (head == NULL) {
			return true;
		}
		return false;
	}
	~List() {
		Node<DT>* next1;

		next1 = head;
		while (head != NULL) {

			head = head->next;
			delete next1;
			next1 = head;
		}
		head = NULL;
		tail = NULL;
		cursor = NULL;
		delete head;
		delete tail;
		delete cursor;
	}
	void splitList(int index) {
		if ((index > 1) && (index < count) && (count > 1))
		{
			List<DT> l1;
			List<DT> l2;
			int i = 0;
			Node<DT>* temp = new Node<DT>;
			temp = head;
			for (i = 1; i <= index; i++) {
				DT t = temp->data;
				l1.insert(t);
				temp = temp->next;

			}
			while (temp != NULL) {
				l2.insert(temp->data);
				temp = temp->next;
			}
			cout << "\nLIST NO 1\n";
			l1.display();
			cout << "\nLIST NO 2\n";
			l2.display();

			temp = NULL;
			delete temp;


		}
	}

};