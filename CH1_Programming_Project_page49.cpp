# Data_Structure-.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

//1-(1) 각 알고리즘을 함수로 구현하라. n을 매개변수로 전달받고 결과를 반환한다.
int sumAlgorithmA(int n) { // O(1)
	return ((n + 1) * n) / 2; 
}

int sumAlgorithmB(int n) { // O(n)
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int sumAlgorithmC(int n) { // O(n^2)
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum = sum + 1;
		}
	}
	return sum;
}


int main() {
	int n;
	cin >> n;

	clock_t start, finish; //시작 시각 및 종료 시각을 저장할 변수 선언
	//cout << typeid(start).name() << endl << endl; //(clock_t의 구조체 자료형이 알고 싶어서)
	double duration; //실행 시간을 저장할 변수 선언
	
	start = clock();
	cout << sumAlgorithmA(n) << endl;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "A 경과시간 :" << duration << "초 입니다." << endl << endl;

	start = clock();
	cout << sumAlgorithmB(n) << endl;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "B 경과시간 :" << duration << "초 입니다." << endl << endl;

	start = clock();
	cout << sumAlgorithmC(n) << endl;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "C 경과시간 :" << duration << "초 입니다." << endl << endl;

	return 0;
}
