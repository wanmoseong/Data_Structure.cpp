# Data_Structure.cpp
// 2차원 영상에서 최대 밝기 값을 찾아 반환하는 함수
//파라미터로 배열 주소와 길이를 받아야 함
//문제점 : 가로크기가 5인 영상에 대해서만 적용 가능한 함수

int findMaxValue(int a[][5], int h, int w) {
	int maxVal = a[0][0];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (maxVal < a[i][j]) maxVal = a[i][j];
		}
	}
	return maxVal;
}

#include <cstdio>
void main() {
	int img[4][5] = {{3,24,82,12,22},
		{34,87,12,19,21},
		{99,7,65,73,58},
		{20,7,9,48,29}};
	int maxPixel = findMaxValue(img, 4, 5);
	printf("영상의 최대 밝기 = %d\n", maxPixel);
}
