/*�]�p�@�ӵ{��Ū�J�~���M�����Ӿ�ơA�b�e���W��ܸӤ�������C
(�w��1900�~1��1�鬰�P���@)

�{�������ŦX�U�C�n�D�G
1. �{���Ĥ@�楲���[�W�t�{���W��,�Ǹ�,�m�W,�ΦҸդ��������
2. �{������J�ο�X���G�����ŦX�d�Ұ��浲�G

=== �d�Ұ��浲�G(1) ===
2018 4 <-- �q��L��J2018 4[Enter]

2018 4
Sun Mon Tue Wed Thu Fri Sat
  1   2   3   4   5   6   7
  8   9  10  11  12  13  14
 15  16  17  18  19  20  21
 22  23  24  25  26  27  28
 29  30*/
#include <stdio.h>
int main(void) 
{ 
    int i,Init_day,year,month;    
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    scanf("%d%d",&year,&month);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");    
    
    if ((year%4 == 0 )) 
    { 
        day[1]=29;
        Init_day = (((year-1900)/4)*366 + ( (year-1900)-((year-1900)/4) )*365)%7;//���o�Ӧ~ 1 �� 1 �骺��� 
    } 
    else
    {
    	Init_day = (((year-1900)/4)*366 + ( (year-1900)-((year-1900)/4) )*365+1)%7;
	}
    for(i=0;i<month-1;i++)  //�[�`���J������Ѽ� 
        Init_day += day[i];	  
    for(i=0;i<(Init_day %= 7);i++)//��X�W�Ӥ몺�ťդ�� 
        printf("    ");
         
    for(i=1;i<=day[month-1];i++)//��X�Ӥ��� 
    {
    	printf("%3d ",i);
    	Init_day++;
    	if(Init_day>=7)
    	{
    		printf("\n");
		    Init_day=0;
		}
	}
    return 0; 
}
