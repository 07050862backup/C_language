/*
=== �d�Ұ��浲�G(1) ===
0101 <-- �q��L��J0101[Enter]
0101 = 5

=== �d�Ұ��浲�G(2) ===
1010 <-- �q��L��J1010[Enter]
1010 = 10
*/
#include <stdio.h>
int main(void)
{
	int n,i=1,ans=0,ori;
	scanf("%d",&n);
	ori = n;
	
	for(;n>0;)
	{
		ans=ans+(n%10)*i;
		n/=10;
		i*=2;
	}
	printf("%04d = %d",ori,ans);
	return 0;
}
