#include <stdio.h>
#include <time.h>
#define MAX_SIZE 1001
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void sort(int[], int);  /*��ܱƧ�*/

void sort(int list[], int n)
{
	int i, j, min, temp;
	for (i = 0; i < n; i++) {
		min = i;
		for (j = i; j < n; j++)
			if (list[j] < list[min])
				min = j;
		SWAP(list[i], list[min], temp);
	}
}

int main(void)
{
	int i, n, step = 10;
	int a[MAX_SIZE];
	double duration;

	/*�ھ�n = 0, 10, �K, 100, 200, �K, 1000�ӭp�� */
	printf("    n    repetitions      time\n");
	for (n = 0; n <= 1000; n += step)
	{ /*�ھ�n���j�p�o��ɶ� */
		long repetitions = 0;
		clock_t start = clock();
		do
		{
			repetitions++;
			/* ��l�̮t���p����� */
			for (i = 0; i < n; i++)
				a[i] = n - i;
			sort(a, n);
		} while (clock() - start < 1000);
		/* ���Ƴo�Ӱj�骽��w�g�α��F�������ɶ� */

		duration = ((double)(clock() - start)) / CLOCKS_PER_SEC;
		duration /= repetitions;
		printf("%6d  %9d  %f\n", n, repetitions, duration);
		if (n == 100) step = 100;
	}
}
