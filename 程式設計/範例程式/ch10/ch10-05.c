/* 
 * ch10-05.c
 * ��ƨϥΫ��жǻ��}�C 
 */
 
#include <stdio.h> 
#include <stdlib.h>

char* max_char(char* p);	//�ǤJ���ХB�Ǧ^���� 

int main(void)
{
	// char a[] = "That is a key";
	// char *p1 = a;
	
	char *p1 = "That is a key";	//�Op1���V�@�Ӧr��(�r���}�C�B������0) 
	char *p2;

	p2 = max_char(p1);			//�Ǧ^�r�ꤤ�̤j�r���Ҧb����} 
	
	printf("The MAX character in \"%s\" is %c.\n",p1,*p2);
	
	system("pause");
	return 0;
}

char* max_char(char* p)
{
	char* t;
	
	t = p;
	for (;*p!=0;p++)			//��p�ҫ����r�����O0�A�h�~���ˬd�U�@�Ӧr�� 
		if (*t<*p)				//���t�ҫ����r���O�_���̤j�r�� 
			t = p;
	return t;
}
