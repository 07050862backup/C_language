#include <string.h>
#include <stdio.h>
#define MAXSIZE 10
typedef struct tagListNode
{
	char data[20]; //������
	int next; //�쵲���
} ListNode;

void ArrayListCreate(ListNode list[])
{
	int i,j;
	for(i=0;i<MAXSIZE;i++)
	list[i].next=-1;
	list[0].next=3;
	list[1].next=6;
	list[3].next=1;
	list[6].next=7;
	list[7].next=0;
	strcpy(list[1].data,"����");
	strcpy(list[3].data,"����");
	strcpy(list[6].data,"�^��");
	strcpy(list[7].data,"Ĭ�X");
}
 
void ArrayListInsert(ListNode list[], int pos, const char *data)
{
	int i=0,j;
	for(i=0;i<=8;i++) //���Ŧ� 
	{
		if(list[i].next== -1)
		break;
	}
	strcpy(list[i].data,data);//�[�J �q�j�Q 
	list[pos].next =i;  //����᭱�[�J�q�j�Q 
	list[i].next = 6;
	
}
void ArraylistDelete(ListNode list[])
{
	int i=0;
	for(i=0;i<=8;i++)//���list[i].next������ 
	{
		if(list[i].next == 3)
		break;
	}
	list[i].next=1;//���L���� 
	
}
void ArraylistDelete2(ListNode list[])
{
	int i=0;
	for(i=0;i<=8;i++)//���list[i].next���^�� 
	{
		if(list[i].next == 6)
		break;
	}
	list[i].next=7; //���L�^�� 

}
void ArraylistInsert2(ListNode list[],int n1,const char *c1)
{
	int i=0,j;
	for(i=0;i<=8;i++)//���Ŧ� 
	{
		if(list[i].next== -1)
		break;
	}
	strcpy(list[i].data,c1); //�N�Ŧ�]���w�� 
	list[n1].next = i;//�[�J�w�� 
	list[i].next = 0;
}
void ArrayListTraverse(ListNode list[])
{
	int i;
	for(i=list[0].next;i!=0;i=list[i].next)
	{
		if(list[i].next==0)
		printf("%s",list[i].data);
		else
		printf("%s,",list[i].data);
	}
		printf("\n");
}
int main(int argc, char *argv[])
{
	ListNode table[MAXSIZE];
	ArrayListTraverse(table);
	ArrayListCreate(table);
	ArrayListTraverse(table);
	ArrayListInsert(table,1,"�q�j�Q");
	ArrayListTraverse(table); 
	ArraylistDelete(table);
	ArrayListTraverse(table);
	ArraylistInsert2(table,7,"�w��");
	ArrayListTraverse(table);
	ArraylistDelete2(table);
	ArrayListTraverse(table);
	return 0;
}
