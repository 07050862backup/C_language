/*
�п�J�r�� : 0123456789
�п�J���洫���϶� : 4 6
��ի᪺�r�� : 0123654789

�п�J�r�� : 0123456789
�п�J���洫���϶� : 3 8
��ի᪺�r�� : 0128765439
*/ 
#include <stdio.h>
void reverse(char a[],int x,int y,char b[]);
int main(void)
{   int x,y;
	char a[80],b[80];
	printf("�п�J�r�� : ");
	scanf("%s",a);
	printf("�п�J���洫���϶� : ");
	scanf("%d%d",&x,&y);
	reverse(a,x,y,b); 
	printf("��ի᪺�r�� : %s\n",b);
	
	return 0;
 } 
void reverse(char a[],int x,int y,char b[])
{   
	int i,j=y,end;
	for(i=0;a[i]!=0;i++)
	;
	end = i;
	for(i=0;i<=end;i++)
	{
		if(i<x||i>y)
		    b[i]=a[i];
		else
			b[i]=a[j--];
	}
	return;
}
