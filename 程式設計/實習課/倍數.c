/*
��J��ӥ����
�P �p�G�Ĥ@�ӼƦr�p�󵥩�ĤG�ӼƦr�A�h�̷ӥѤp��j�����ǡA
   �L�X�Ҧ��p�󵥩�ĤG�ӼƦr�B���Ĥ@�ӼƦr�����ƼƦC�C
�P �p�G�Ĥ@�ӼƦr�j��ĤG�ӼƦr�A�h�̷ӥѤj��p�����ǡA�L�X
   �Ҧ��p�󵥩�Ĥ@�ӼƦr�B���ĤG�ӼƦr�����ƼƦC�C
   EX:Please enter two numbers:2 10
      The sequence is 2 4 6 8 10
   EX:Please enter two numbers:30 4
      The sequence is 28 24 20 16 12 8 4 
 
*/ 
#include <stdio.h>
int main(void)
{
	int a,b,i;
	
	printf("Please enter two numbers:");
	
	scanf("%d%d",&a,&b);
	printf("The sequence is ");
	if(a<=b)
	{
		for(i=1;a*i<=b;i++)
		{
			printf("%d ",a*i);
		}
	}
	else
	{
		i = a / b;
		for(i;i>0;i--)
		{
			printf("%d ",b*i);
		}
	}
	
	return 0; 
 } 
