#include "node.hpp"

#include <iostream>

int main() {
	
	Node* n = new Node({
		Student(17,4.13f,"Jeff"),
		Student(18,4.36f,"Gary"),
		Student(16,3.44f,"Yolo")
	});

	Node* c = n;
	while (c) {
		Student* s = c->getStudent();
		
		if (s) {
			printf("%d %f %s\n", s->age, s->gpa, s->name);
		} else {
			printf("Studentless Node!\n");
		}
		c = c->getNext();
	}


}
