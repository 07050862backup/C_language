/* 
 * ch10-08.c
 * ���лP�G���}�C 
 */
 
#include <stdio.h> 
#include <stdlib.h>

void show4(char **p);
void show5(char **p);
void show6(char **p);

int main(void)
{
	char *p1[] = {"Hi","Hello","Welcome"};	// ���V(�r��)���Ъ����б`�� 
	char **pp1;								// ���V(�r��)���Ъ������ܼ� 
	int i,j;
	char c; 
	
	pp1 = p1;
	show4(pp1);
	show5(pp1);
	show6(pp1);
	
	system("pause");
	return 0;
}

void show4(char **pp)
{
	int i;
	
	for (i=0;i<3;i++)
	{
		puts(*pp);	
		pp++;			//���V���Щҫ����U�@�Ӧ�} 
	}
	printf("\n");
}

void show5(char **pp)
{
	int i;
	
	for (i=0;i<3;i++)
	{
		puts(*(pp+i));	//���Xpp���V��}�_�A�V�Ui�Ӧ�}�����e 
	}
	printf("\n");
}

void show6(char **pp)
{
	int i,j;
	char c;
	
	for (i=0;i<3;i++)
	{
		for (j=0;;j++)
		{
			c = *(*(pp+i)+j);//���Xpp�V�Ui�Ӧ�}�����e(��})�A�V��j�Ӧ�}�����e 
			if (c!=0)
				printf("%c",c);
			else
			{
				printf("\n");
				break;
			}	
		}
	}
	printf("\n");
}
