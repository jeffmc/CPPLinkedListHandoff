// Jeff McMillan 1/6/23 C++
#pragma once

#include "student.h"

#include <initializer_list>

// This is a node of a linked list, containing students.
class Node {
	Student* stuptr; // Pointer to student data
	Node* nextptr; // Pointer to next node in list.

public:
	// Construct a node with a pointer to data
	Node(Student* sp) : stuptr(sp), nextptr(nullptr) { }
	Node(std::initializer_list<Student> l) {
		stuptr = new Student(*l.begin());
		Node* last = this;
		for (auto it = l.begin()+1;it!=l.end();++it) {
			Node* curr = new Node(new Student(*it));
			if (last) last->setNext(curr);
			last = curr;
		}	
	}

	// Gets a pointer to next node
	Node* getNext() const { 
		return nextptr;
	}
	// Gets a pointer to the student this node contains.
	Student* getStudent() {
		return stuptr;
	}
	// Set the pointer to the next node.
	void setNext(Node* np) {
		nextptr = np;
	}
	// Delete this node and DELETE THE STUDENT IT CONTAINS!
	// This means once a student is put in a linked list, the list is managing that memory.
	~Node() {
		if (stuptr) delete stuptr;
	}

};
