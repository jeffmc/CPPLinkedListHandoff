#pragma once

// Jeff McMillan 1/6/23 C++
#include "student.h"

// This is a node of a linked list, containing students.
template<typename NT>
class LinkedList {
	struct Node {
		Node* nextptr;
		NT* dataptr;
	};

	Node* head; // Pointer to head of list.
public:
	LinkedList();
	~LinkedList();

	void push(); // add node to start of list. (fastest insertion possible)
	Node* getHead();
};
