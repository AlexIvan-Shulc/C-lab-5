//Clab5 task2

#include "task2.h"

int main()
{
	char arr[M][M];

	while (1)
	{
		clearMatrix(arr);
		fillMatrix(arr);
		setMatrix(arr);
		printMatrix(arr);
		
		clock_t(begin) = clock();
		while (clock() < begin + 2 * CLOCKS_PER_SEC); //  CLOCKS_PER_SEC - ������������ ��� ���� ������, ��� Linux ����� ������������ 1000
	}

	return 0;
}