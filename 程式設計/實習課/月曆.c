/*
��J�@�ӼƦr�N�����A�b��J�Ӥ몺 1 �����P���X�A�θӤ릳
���ѡC��J������|�L�X"X ������"�Τ�䵲�G�C(����e�׬�
2�A����P��������Ů欰 tab�A�Y�Ӥ몺�Ĥ@�Ѭ��P����h���J
7�A�B�����᪺���P����b����)�C
*/ 
#include<stdio.h>
int main(void)
{
    int first_day,total_day,month,i,j;
    scanf("%d%d%d",&month,&first_day,&total_day);
	printf("�п�J����G ");
	
	
	printf("�п�J1�����P���X�H������X�ѡH");
	
	
	printf("%d������\n",month);
	
    printf("��	�@	�G	�T	�|	��	��	\n");
	
	if(first_day == 7)
	    first_day = 0;
	
	for(i=1;i<=first_day;i++)
	    {
	        printf("  	");
	    }
	for(j=1;j<=total_day;j++)
	{
	    if( (first_day+j) % 7 ==0 )
	    {
	        printf("%2d	\n",j);
	    }
	    else
	        printf("%2d	",j);
	}
	
	return 0;
}
