/* 
 * ch10-07.c
 * ���Ъ����� 
 */
 
#include <stdio.h> 
#include <stdlib.h>

void demo1();
void demo2();
void demo3();

int main(void)
{
	demo1();
	demo2();
	demo3();
		
	system("pause");
	return 0;
}

void demo1()
{
	char c = 'H';			
	char *p1 = &c;		//p1���Vc
	char **pp1 = &p1;	//pp1���Vp1
	
	printf("---Demo 1---\n");
	printf("c=%c address=0x%p\n",c,&c);
	printf("p1=0x%p address=0x%p\n",p1,&p1);
	printf("pp1=0x%p address=0x%p\n",pp1,&pp1);

	printf("*p1=%c\n",*p1);						//*p1�i���Xc�����e(����1��) 
	printf("*pp1=0x%p *pp1=%c\n",*pp1,**pp1);	//**pp1�i���Xc�����e(����2��)
}

void demo2()
{
	char *p1 = "Hi";
	char **pp1 = &p1;
	
	printf("\n--Demo 2---\n");
	
	printf("*(p1+0)=%c address=0x%p\n",*(p1+0),p1+0);	//����p1��+/-�B�� 
	printf("*(p1+1)=%c address=0x%p\n",*(p1+1),p1+1);

	printf("p1=0x%p address=0x%p\n",p1,&p1);
	printf("pp1=0x%p address=0x%p\n",pp1,&pp1);
}

void demo3()
{
	char *pp1[] = {"Hi","Hello"};
	char *p1;
	
	p1 = pp1[0];
	printf("%s\n",p1);
	printf("%s\n",*(pp1+1));	//����pp1��+/-�B�� 
	
	printf("\n--Demo 3---\n");
	
	printf("*(p1+0)=%c address=0x%p\n",*(p1+0),p1+0);
	printf("*(p1+1)=%c address=0x%p\n",*(p1+1),p1+1);

	printf("p1=0x%p address=0x%p\n",p1,&p1);
	printf("pp1=0x%p address=0x%p *pp1=0x%p\n",pp1,&pp1,*pp1);
}
