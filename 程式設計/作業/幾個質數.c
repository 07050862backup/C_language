/*
�]�p�@�ӵ{��Ū�J2�Ӿ�ơA�p��X2�Ӿ�ƶ����X�ӽ�ơC

�ɦW: �Ǹ�-hw05.c (�Ҧp�G04051234-hw05.c)

�{�������ŦX�U�C�n�D�G
1. �{���Ĥ@�楲���[�W�t�{���W��,�Ǹ�,�m�W,�ΦҸդ��������
2. �{������J�ο�X���G�����ŦX�d�Ұ��浲�G

=== �d�Ұ��浲�G(1) ===
3 5 <-- �q��L��J3 5[Enter]
2

=== �d�Ұ��浲�G(2) ===
11 2<-- �q��L��J11 2[Enter]
5

=== �d�Ұ��浲�G(3) ===
100 200 <-- �q��L��J100 200[Enter]
21
*/
#include <stdio.h>
int main(void)
{
	int a,b,i,j,ans=0,ok;
	
	scanf("%d%d",&a,&b);
	
	if(a>=b)
	{
	    ok = a;
	    a = b;
	    b = ok;
	}
	for(i=a;i<=b;i++)
	{
		ok = 1;
	    for(j=2;j<i;j++)//�P�_ i 
	    {
	    	if(i%j==0)
	    	    ok = 0;//i���O 
		}
		if(ok)
		    ans++;
	    
	}
	printf("%d",ans);
	
	return 0;
 } 
