/*
�п�J�@�Ӿ��(�̤p�� 2�A�Y��J 1 �h�L�X�Э��s��J)�A�æL�X
�Ӽƪ���]�Ƥ��Ѧ��C*/ 
#include<stdio.h>

int main(void)
{
    int n,i;
    scanf("%d",&n);
    printf("�п�J�@�Ӿ��\n");
    if(n==1)
        printf("�Э��s��J\n");
    else
    {
     printf("%d=",n);
        for(i=2;i<=n;i++)   
        {
            for(;n>i;)
            {
                if(n%i==0)
                {   
                    printf("%d*",i);
                    n/=i;
                } 
                else
                break;
            }
        }
    printf("%d\n",i-1);
    }	
	return 0;
	
}
