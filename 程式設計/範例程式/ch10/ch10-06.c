/* 
 * ch10-06.c
 * ���а}�C 
 */
 
#include <stdio.h> 
#include <stdlib.h>

void show1(char a[][10]);
void show2(char* p[]);
void show3(char* p[]);

int main(void)
{
	char a[][10] = {"Hi","Hello","Welcome"};//�r��}�C(�G���r���}�C) 
	char *p1[] = {"Hi","Hello","Welcome"}; 	//���а}�C(�C�ӫ��Ы��V�r��) 
	
	show1(a);
	show2(p1);
	show3(p1);
	
	system("pause");
	return 0;
}

void show1(char a[][10])
{
	int i;

	for (i=0;i<3;i++)
		puts(a[i]);
	printf("\n");
}

void show2(char* p[])
{
	int i;
	
	for (i=0;i<3;i++)
		puts(p[i]);
	printf("\n");
}

void show3(char *p[])
{
	int i;
	
	for (i=0;i<3;i++)
		puts(*(p+i));	//*(p+i)�۷��p[i]�A�Y���X��i�Ӥ��������e 
	printf("\n");
}
