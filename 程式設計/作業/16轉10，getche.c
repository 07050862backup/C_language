/*16�i����10�i��

�]�p�{���F���H�U�n�D:

�]�p�@�ӵ{��Ū�J�ܦh8�줸��16�i��Ʀr(���]�^��r���i���j�g�Τp�g)�A�P�_��Ū�J���r���O�_��16�i�쪺�Ʀr�A�p�G�O�A�ഫ��10�i�쪺�ƭȡF�p�G�_�A��ܫD16�i��Ʀr����m�C
=== �d�Ұ��浲�G(1) ===

FFFF1234 <-- �q��L��J
FFFF1234=4294906420
=== �d�Ұ��浲�G(2) ===
BcDf2K5 <-- �q��L��J
BcDf2K5
     ^Error*/ 
#include <stdio.h>
#include <conio.h>
int afunc(char ch[],int i);


int main(){
    char c1, c2,ch[8],ans=0;
    int i=0;
    for(i=0;i<8;i++)//��J8�Ӧr
    {
    	if(c1==13)//13�Oenter��
    	{
    		i=i-1;
    		break;
		}
        c1 = getche();
        ch[i]=c1;
    }
    
    
    ans = afunc(ch,i);//�P�_�O�_�O��16�i��Ʀr�A�p�G���O�A�h�^�ǲĴX�Ӧr���O 
	
	if(ans == -1 )//�O16�i��
	{
		bfunc(ch,i);
	}
	else//���O16�i��
	{
		printf("\n");
		for(i=0;i<ans;i++)
		    printf(" ");
	    printf("^Error");
	} 
    printf("\n\n");
   
    system("pause");
    return 0;
}
int afunc(char ch[],int i)
{
	int j=0,total=0;
	for(j=0;j<i;j++)
	{
	    if('0'<=ch[j]&&ch[j]<='9')
	    ;
        else if ('A'<=ch[j]&&ch[j]<='F')
        ;
        else if ('a'<=ch[j]&&ch[j]<='f')
        ;
	    else
	    {	
	        return j;
	    }	
	}
	return -1;   
}
int bfunc(char ch[],int i)
{
	int j=0,count=0;
    unsigned long n=0;
	for(j=i-1;j>=0;j--)
    {
    	if('0'<=ch[j]&&ch[j]<='9')
	        n =  n + (ch[j] - '0') * power(count);
	    else
	        n =  n + (ch[j] - 'A'+10) * power(count);
    	count++;
	}  
    printf("\n%llu",n);
    
}
int power(int count)
{
	int i=1,ans=1;
	for(i=1;i<=count;i++)
    {
    	ans =  ans * 16;
	}
    return ans;
}
