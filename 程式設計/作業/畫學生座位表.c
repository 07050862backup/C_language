/*
�г]�p�@�ӵ{���A���X�y���C��10�H�@��4�ơA�п�J�y�츹�X�A�b���Ӯy�����ФW*�r��(�бN�y����)�C

�|��1:18->18*

�|��2:39->39*
*/
#include <stdio.h>

int main(void)
{
 int n,i,j;
 char c = c;
 c = '*' ;
 
 printf("�п�J�ǥͮy��\n");
 
 scanf("%d",&n);
 
 for(i=1;i<=40;i++)
 {	
 	if(i%10==0)
 	{
 		if(i == n)
 		printf("%.2d%-4c\n",i,c);
 		
 		else
 		printf("%d\n",i);
	}
	else if(i==n)
	{
		printf("%.2d%-4c",i,c);
	}
	else
	{	
	    printf("%-5.2d ",i);
	}
	
 }
 
 
  return 0;
} 
