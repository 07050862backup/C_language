/* 
 * ch10-1.c
 * �����ܼ� 
 */
 
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int a=5;
	double b=3.14;
	int *p1;	//���Vint�������ܼ� 
	double *p2;	//���Vdouble�������ܼ� 
	int *p3;
   
	p1 = &a;	//���X�ܼ�a����} 
	p2 = &b;	//���X�ܼ�b����} 
   
	printf("  a=%8d, size=%d, address=%p\n",a,sizeof(a),&a);
	printf("  b=%8.2f, size=%d, address=%p\n",b,sizeof(b),&b);

	printf(" p1=%p, size=%d, address=%p\n",p1,sizeof(p1),&p1);
	printf(" p2=%p, size=%d, address=%p\n",p2,sizeof(p2),&p2);

	printf("*p1=%8d\n",*p1);
	printf("*p2=%8.2f\n",*p2);
	
	*p1 = 10;	//�]�wp1�ҫ���}�����e(��) 
	*p2 = 6.28;	//�]�wp2�ҫ���}�����e(��) 
	
	printf("  a=%8d\n",a);
	printf("  b=%8.2f\n",b);
	
	p3 = p1;	//�O����p3���Vp1�ҫ�����} 
	
	printf("*p3=%8d\n",*p3);
	
	system("pause");
	return 0;
}
