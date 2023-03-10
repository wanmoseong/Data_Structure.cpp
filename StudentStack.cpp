# Data_Structure-for_Stack-.cpp

// 3장 - StudentStack.cpp : StudentStack 테스트 프로그램
#include "StudentStack.h"
void main() {
	StudentStack stack;
	stack.push(Student("홍길동", "컴퓨터공학과", 2015130007));
	stack.push(Student("이순신", "기계공학과", 2015130100));
	stack.push(Student("황희", "법학과", 2015130135));
	stack.display();
	stack.pop();
	stack.display();
}
