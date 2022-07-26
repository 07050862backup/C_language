/* 
 * ch10-02.c
 * ��ƶǻ����� 
 */
 
#include <stdio.h> 
#include <stdlib.h>

void swap1(int a1,int a2);
void swap2(int *p1,int *p2);	//�ǻ�(���)�����ܼ� 

int main(void)
{
	int a=1, b=2;
	int *p1 = &a, *p2 = &b;

	printf("*p1=%d, *p2=%d\n",*p1,*p2);
	
	swap1(a,b);
	printf("a=%d, b=%d\n",a,b);
	
	swap2(&a,&b);				//�ǤJ�ܼ�a�M�ܼ�b����} 
	printf("a=%d, b=%d\n",a,b);
	
	system("pause");
	return 0;
}

void swap1(int a1,int a2)
{
	int tmp;
	tmp = a1;
	a1 = a2;
	a2 = tmp;
}

void swap2(int *p1,int *p2)
{
	int tmp;
	tmp = *p1;					//�Op1�ҫ������e�s����ܼ�tmp�� 
	*p1 = *p2;
	*p2 = tmp;
}
