/*��D�{������J 5 �ӼơA�éI�s�禡��X 5 �Ƥ����̤j�ȻP�̤p
�ȫ�A�L�X��̤j�ȡB�̤p�ȤΨ�Ƭ۴���G�C*/ 
#include <stdio.h>

int main(void)
{  
    int max=0,min=0,a[5],i;
    
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
    {
        if(a[max]<a[i])
            max = i;
        else if(a[i]<a[min])
            min = i;
    }
   
    printf("�̤j�ȡG%d\n",a[max]);
    printf("�̤p�ȡG%d\n",a[min]);
    printf("��Ƭۮt�G%d",a[max]-a[min]);
    return 0;
}
