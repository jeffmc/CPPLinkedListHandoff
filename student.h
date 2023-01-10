#pragma once
#include <cstring>
#include <cstdio>


class Student {

public:
	Student(int a, float g, const char* n) : age(a),gpa(g) {
		strcpy(name, n);
		//printf("Constructing %s\n", name);
		name[24] = '\0';
	}
	Student(const Student& s) : age(s.age),gpa(s.gpa) {
		//printf("Copied\n");
		strcpy(name, s.name);
		name[24] = '\0';	
	}
	int age;
	float gpa;
	char name[25];

};
