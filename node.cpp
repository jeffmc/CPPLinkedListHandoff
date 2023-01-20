
// Jeff McMillan 1/6/23 C++
#include "node.h"

template <typename NT>
void LinkedList<NT>::push() {

}

template <typename NT>
typename LinkedList<NT>::Node* LinkedList<NT>::getHead() {
	return head;	
}

template <typename NT>
LinkedList<NT>::LinkedList() {

}

template <typename NT>
LinkedList<NT>::~LinkedList() {

}

template class LinkedList<Student>;
