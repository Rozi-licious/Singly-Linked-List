# List ADT

Data Items
The data items in a list are of generic type DT.
Structure

The data items form a linear structure in which list data items follow one after the other, from the
beginning of the list to its end. The ordering of the data items is determined by when and where
each data item is inserted into the list and is not a function of the data contained in the list data
items. At any point in time, one data item in any nonempty list is marked using the list’s cursor.
You travel through the list using operations that change the position of the cursor.
Operations

## 1) List ( int ignored = 0 )
Requirements:
None
Results:
Constructor. Creates an empty list.

## 2) ~List ()
Requirement: None
Results:
Destructor. Deallocates (frees) the memory used to store a list.

## 3) void insert ( const DT &newDataItem )
Requirements:
None.
Results:
If the list is not empty, then inserts newDataItemat the end.

## 4) Void insertAt ( const DT &newDataItem , intindex)
Requirements:
None.
Results:
Inserts newDataItemat specific index. If the index specified out of range it displays message
index out of range. And move the cursor to end node.

## 5)Void remove()
Requirement: list is not empty
Results:
Removes the data item marked by the cursor from a list. If the resulting list is notempty, then
moves the cursor to the data item that followed the deleted data item. Ifthe deleted data item was
at the end of the list, then moves the cursor to the beginningof the list.

## 6) Void removeAt (int index)
Requirements:
List is not empty.
Results:
Removes the data item at given index. If the index specified out of range it displays message
index out of range.

## 7) void replace ( const DT &newDataItem )
Requirements:
List is not empty.
Results:
Replaces the data item marked by the cursor with newDataItem. The cursor remains at
newDataItem.

## 8) Void replaceAt ( const DT &newDataItem, int index)
Requirements:
List is not empty.
Results:
Replaces the data item at specific index with newDataItem. If the index specified out of range it
displays message index out of range.

## 9)void clear()
Requirement: None
Results:
Removes all the data items in a list.

## 10) Bool isEmpty()
Requirement: None
Results:
Returns true if a list is empty. Otherwise, returns false.

## 11)Bool gotoNext ()
Requirements: List is not empty.
Results:
If the cursor is not at the end of a list, then moves the cursor to mark the next data item in the list and returns true. Otherwise, returns false.

## 12)DT getCursor () 
Requirements: List is not empty.
Results:
Returns a copy of the data item marked by the cursor.

## 13) bool moveCursortoEnd ()
Requirements:
List is not empty.
Results:
Move the cursor to end and return true. Otherwise, returns false.

14)void display () 
Requirements: List is not empty.
Results:
Display the data items separated with space.
15) void sort () Requirements: List is not empty.
Results:
Display the sorted data items separated with space.
National University of Computer & Emerging Sciences (NUCES) Islamabad,
Department of Computer Science
16)
Bool duplicate () Requirements: List is not empty.
Results:
If list contains duplicate return true. Otherwise, returns false.
17)void splitList (int index)
Requirements:
List contains more than one element.
Results:
Split the linked list in two separate lists and display the data items in lists.
