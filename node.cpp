
// Jeff McMillan 1/6/23 C++
#include "node.h"

Node* Node::getNext() const { 
	return nextptr;
}

Student* Node::getStudent() {
	return stuptr;
}

void Node::setNext(Node* np) {
	nextptr = np;
}

Node::Node(Student* sp) : stuptr(sp) { }

Node::~Node() {
	delete stuptr;
}
