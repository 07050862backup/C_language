/*
�r��m�ߡG��J�@�r���A��J���R��������(1-�p�g�r���A2-�j
�g�r���A3-�Ʀr�A4-�Ÿ�)�A�ھڿ�J�������A�R���r�ꤺ��������
�e�C(���ϥΦr��̤�����)�C
*/
#include <stdio.h>

int main(void)
{
    int n,i,j=0;
    char a[80],b[80];
	
	printf("�п�J�r��G\n");
	
	gets(a);
	
	printf("�п�J���R��������(1-�p�g�r���A2-�j�g�r���A3-�Ʀr�A4-�Ÿ��G\n"); 
	
	scanf("%d",&n);
	
    for(i=0;a[i]!=0;i++)
	{    
	    if(n==1)
	    {
	        if('a'<=a[i]&&a[i]<='z')
	        ;
	        else
	        b[j++] = a[i];
	    }
	    else if(n==2)
	    {
	        if('A'<=a[i]&&a[i]<='Z')
	        ;
	        else
	        b[j++] = a[i];
	    }
	    else if(n==3)
	    {
	        if('0'<=a[i]&&a[i]<='9')
	        ;
	        else
	        b[j++] = a[i];
	    }
	    else
	    {
	        if('a'<=a[i]&&a[i]<='z'||'A'<=a[i]&&a[i]<='Z'||'0'<=a[i]&&a[i]<='9')
	        b[j++] = a[i];
	    }
	     
    }
    b[j] = 0;
    puts(b);
    return 0;
}
