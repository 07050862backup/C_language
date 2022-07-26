#include <stdio.h>
#include <time.h>
#define MAX_SIZE 1001
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

void adjust(int arr[],int i)
{
    int j,temp,n,k=1;
    n=arr[0];
    while(2*i<=n && k==1)
    {
       j=2*i;
       if(j+1<=n && arr[j+1] > arr[j])
           j=j+1;

       if( arr[j] < arr[i])
           k=0;
       else
       {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           i=j;
        }
      }
}

void heapify_function(int arr[])
{
    int i,n;
    n=arr[0];
    for(i=n/2;i>=1;i--)
    adjust(arr,i);
}

void heapsort(int arr[])
{
	int temp, last;
	heapify_function(arr);
	while(arr[0] > 1)
	{
	    last=arr[0];
	    temp=arr[1];
	    arr[1]=arr[last];
	    arr[last]=temp;
	    arr[0]--;
	    adjust(arr,1);
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
			for (i = 1; i <= n; i++)
				a[i] = n - i;
			a[0]=n;
			heapsort(a);
			
		} while (clock() - start < 1000);
		/* ���Ƴo�Ӱj�骽��w�g�α��F�������ɶ� */

		duration = ((double)(clock() - start)) / CLOCKS_PER_SEC;
		duration /= repetitions;
		printf("%6d  %9d  %f\n", n, repetitions, duration);
		if (n == 100) step = 100;
	}
}
