/* 
 * ch10-03.c
 * ��ƶǦ^���� 
 */
 
#include <stdio.h> 
#include <stdlib.h>

int max1(int a1,int a2);
int* max2(int *p1,int *p2);		// �Ǧ^(���)�����ܼ� 

int main(void)
{
	int a=1, b=2, c=0;
	int *p1 = &a, *p2 = &b, *p3;

	printf("*p1=%d, *p2=%d\n",*p1,*p2);
	
	c = max1(a,b);
	printf("c=%d\n",c);
	
	p3 = max2(&a,&b);			// p3���V�ܼ�a�Mb���ȸ��j����} 
	printf("*p3=%d\n",*p3);
	
	c = 3;
	printf("b=%d\n",b);
	
	*p3 = 3;					// �|�ܧ�ҫ��V��}�����e 
	printf("b=%d\n",b);
	
	system("pause");
	return 0;
}

int max1(int a1,int a2)
{
	if (a1>a2)
		return a1;
	else
		return a2;
}

int* max2(int *p1,int *p2)
{
	if (*p1 > *p2)
		return p1;				//�Ǧ^(���)�����ܼ� 
	else
		return p2;
}
