/*
�q�Ʀr�A�XA�XB!

�г]�p�@�ӵ{���A�ѹq�����ͥ�4�Ӥ����ƼƦr(0-9)�Ҳզ����K�X�A����Ѫ��a�Ӳq���o�ӱK�X�C

�N�q���K�X��4�ӼƦr�v�@�P��ڱK�X��4�ӼƦr�i�����A�p�G���q���K�X���Y�ӼƦr�P�զ��K�X���Y�ӼƦr�ۦP�A�B��m�ۦP�A�h�p�⬰1A�F�p�G�Ʀr�ۦP�A����m���P�h�p�⬰1B�C�N��������G�X�֭p��ᴣ�ѵ����a�A�@�����a�i��U�@���q�����ѦҡC

��p�⵲�G��4A0B�A�h��ܪ��a�w�g�q���K�X�C���a��J0000��ܩ��A�{���|��ܱK�X�C

�ɦW: �Ǹ�-hw11.c (�Ҧp�G04051234-hw11.c)

���ܡG

srand(time(NULL)); // �]�w�üƺؤl�A����@���Y�i
n = rand()%10; // ���ͤ@�� 0 - 9 �����
�{�������ŦX�U�C�n�D�G
1. �{���Ĥ@�楲���[�W�t�{���W��,�Ǹ�,�m�W,�Τ��������
2. �{������J�ο�X���G�����ŦX�d�Ұ��浲�G

=== �d�Ұ��浲�G(1) ===
Ready! Go:
1234
=0A2B
1111
Incorrect input, try again!
5678
=1A0B
1290
=1A1B
5294
=1A1B
3692
=2A0B
4691
=4A0B
MAGIC=4691
*/
#include <stdio.h>
int main()
{
    int o[4],en[4],i,j=0,A=0,B=0,n,count=0,y=0,m;
    srand(time(NULL)); // �]�w�üƺؤl�A����@���Y�i

    
    for(i=0;i<4;i++)
	{
	    o[i] = rand()%10;
	    for(j=0;j<=3;j++)
	    {
	    	
			    if(o[i]==o[j]&&i!=j)
			        for(count=0;count<=9;count++)
			        {
			        	if(count!=o[0]&&count!=o[1]&&count!=o[2]&&count!=o[3])
			        	    o[i] = count;
					}
		}
	} 
	
    
    
    while(A!=4)
    {
        for(j=0;j<4;j++)
        {y=0;
            scanf("%1d",&en[j]);
        }
     
        
    for(m=0;m<4;m++)
	{
	    for(n=0;n<=3;n++)
	    {
	    	if(en[m]==en[n]&&m!=n)
	    	{
	    		y=-1;
	    		printf("Incorrect input, try again!");
	    		break;
			}
	    	   
		}
		if(y==-1)
		break;
	} 
    if(y!=-1)
    {
         
        A=0,B=0;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(en[i]==o[j])
                {
                    B+=1;
                }
            }
        }
            for(i=0;i<4;i++)
            {
                if(en[i]==o[i])
                {
                    A+=1;
                }
            }
    B=B-A;
            printf("=%dA%dB\n",A,B);

        }
    } 
    printf("MAGIC=");
    for(i=0;i<=3;i++)
	    printf("%d",o[i]);
    return 0;
    }
