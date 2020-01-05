#include "pch.h"
#include"../Singly Linked List (Templatized)/Header.h"

TEST(Test1, insert) {
	List<int> l1;
	l1.insert(9);
	l1.insert(0);
	l1.insert(5);
	l1.insert(4);
	l1.insert(7);
	l1.insert(15);

	EXPECT_EQ(15, l1.tail->data);
	//EXPECT_TRUE(true);
}