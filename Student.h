// Student.h : 학생 정보를 나타내는 클래스
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MAX_STRING 100

class Student {
	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];

public:
	Student() = default;
	Student(const char* n, const char* d, int i = 0) { set(i, n, d); }

	void set(int i, const char* n, const char* d) {
		id = i;
		strcpy(name, n);
		strcpy(dept, d);
	}
	void display() {
		printf(" 학번:%-15d 성명:%-10s 학과:%-20s\n", id, name, dept);
	}
};
