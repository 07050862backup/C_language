/* 
 * ch10-04.c
 * ���V�}�C������ 
 */
 
#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int a[] = {11,22,33,44,55};		// a�O(���)���б`��, �`�Ƥ��i�ܰ� 
	int *p1;
	int i;

	p1 = a;							// �Op1���Va�ҫ�����} 
	
	printf("address of a[] = %p\n\n",a);
	
	for (i=0;i<5;i++)
		printf("address of a[%d] = %p\n",i,&a[i]);	// �U�����Ҧb����} 
	printf("\n");

	for (i=0;i<5;i++)
		printf("address of p1+%d = %p\n",i,p1+i);
	printf("\n");
	
	for (i=0;i<5;i++)
		printf("p1[%d] = %d\n",i,*(p1+i));			// ���X�U��}�����e(��) 
	
	system("pause");
	return 0;
}
