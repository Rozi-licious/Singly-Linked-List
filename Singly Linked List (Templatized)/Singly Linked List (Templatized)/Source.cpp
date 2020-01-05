#include"Header.h"


int main() {
	List<int> a;
	cout << "\nInserting a value 5\n";
	a.insert(5);
	cout << "\nInserting a value 5\n";
	a.insert(5);
	cout << "\nInserting a value 7\n";
	a.insert(7);
	cout << "\nInserting a value 3\n";
	a.insert(3);
	cout << "\nInserting a value 0\n";
	a.insert(0);
	cout << "\nDisplaying\n";
	a.display();
	cout << "\nChecking Duplicates\n";
	cout << a.duplicate();
	cout << "\nSpliting\n";
	a.splitList(2);
	//a.remove();

	cout << endl;
	cout << "\nInserting a value at index 5 value is 4\n";
	a.insertAt(4, 5);
	a.display();
	cout << endl;
	cout << "\nInserting a value 59 at pos 1\n";
	a.insertAt(59, 1);
	a.display();
	cout << endl;
	cout << "\nInserting a value 53 at pos 2\n";
	a.insertAt(53, 2);
	a.display();
	cout << endl;
	cout << "\nRemoving cursor\n";
	a.remove();
	a.display();
	cout << endl;
	cout << "\removing at 5th index\n";
	a.removeAt(5);
	a.display();
	cout << "\nSorting\n";
	a.sort();
	a.display();
	cout << endl;
	cout << "\replacing a 1st index\n";
	a.removeAt(1);
	a.display();
	cout << endl;
	cout << "\nReplacing a value at cursor val is 4\n";
	a.replace(4);
	a.display();
	cout << endl;
	cout << "\nReplacing a value at 5th index val is 1\n";
	a.replaceAt(1, 5);
	a.display();
	cout << endl;
	cout << "\nReplacing a value at 3rd index val is 66\n";
	a.replaceAt(66, 3);
	a.display();
	cout << endl;
	cout << "\n Before calling Is empty\n";
	cout << a.isEmpty();
	cout << "\n after calling Is empty\n";
	a.clear();
	cout << a.isEmpty();

	return 0;
}