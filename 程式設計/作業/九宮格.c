/*
�г]�p�@�ӤE�c��{���A��J1~9����ơAø�s�@�ӤE�c��A
�b��������m��ܿ�J���Ʀr(�Ʀr�̧ǥѥ��ܥk�A�ѤW�ӤU�ƦC)�C
*/ 
#include <stdio.h>
int main(void)
{
    int n,i,j,l,o,r;
	
	printf("�п�J����ܪ��Ʀr : ");
	
	scanf("%d",&n);
	
	r = n % 3;
	if(r == 0)
	r = r+3;
	
	if(n%3==0)
	l = n / 3;
	else
	l = n / 3 + 1;
	
	for(j=1;j<=7;j++)
	{
		if(j%2==0)
		{
			if(l*2==j)
			{
				for(o=1;o<=3;o++)
			    {
			        if(r == o)
			            printf("*%d",n);
			        else
			        printf("* ");
			    }
			}
			else
			{
			printf("* * * ");
	        }
		
		printf("*\n");
		}
		else
		{
		    for(i=1;i<=7;i++)
		    {
		        printf("*"); 
		    }
		printf("\n");
        }
    }
    return 0;
} 
