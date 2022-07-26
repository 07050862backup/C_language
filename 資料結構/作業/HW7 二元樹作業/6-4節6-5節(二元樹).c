/*=========================================================

    6.4�`    �G���𪺫إ�
    6.5�`    �G���𪺨��X

          *crt_bt()             �G����إߨ禡
          preorder()            �e�Ǩ��X�禡
          inorder()             ���Ǩ��X�禡
          postorder()           ��Ǩ��X�禡
          visit()               ���X�`�I
          visit2()              ���X�`�I���K�N�O�������^
                                ���ҧQ�Ϋ�ǫ��X�ɤ@�@�N
                                �l��ҥe���O�������^,�H�K
                                ���

       �Ƶ�:����ɤ@�@��J�`�I���c���,���Ϋ�<ENTER>
            �]����󥿸��!!!

  =========================================================
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	<conio.h>

typedef struct tagTNode
        {
                struct tagTNode *left_c;
                char    data;
                struct tagTNode *right_c;
        }TNode;
  
TNode *CreateBinaryTree(void);
void visit(TNode *);
void visit2(TNode  *);
void PreOrder(TNode  *);
void InOrder(TNode  *p);
void PostOrder(TNode  *p);
int countHeight(TNode *);
int countNodes(TNode *); 
void MirrorBT(TNode *);
int main(int argc, char *argv[])
{
    TNode *tree;

    printf("��J�`�I���,���Ϋ�<ENTER>\n");
    tree=CreateBinaryTree();

 
    printf("\n���Ǩ��X���G=> ");
    InOrder(tree);
    printf("\n�G����`�I��: %d",countNodes(tree));
    printf("\n�G���𪺰���: %d",countHeight(tree));
    MirrorBT(tree);
	printf("\n�G�����蹳��իᤤ�Ǩ��X���G=> ");
    InOrder(tree);
	return 0;
}

TNode *CreateBinaryTree(void)
{
    TNode  *ptr;
    char data;
    data=getche();
    if(data == '0')
        return (NULL);
    ptr=(TNode *)malloc(sizeof(TNode));
    ptr->data=data;
    ptr->left_c = CreateBinaryTree();
    ptr->right_c = CreateBinaryTree();
    return(ptr);
}

void visit(TNode  *p)
{
    printf("%c",p->data);
}

/*��Ǩ��X��*/
void visit2(TNode  *p)
{
    printf("%c",p->data);
    free(p);
}



void InOrder(TNode  *p)
{
    if(p != NULL)
    {
        InOrder(p->left_c);
        visit(p);
        InOrder(p->right_c);
    }
}
int countHeight(TNode *p)
{
	int leftHeight,rightHeight;
	
	if(p != NULL)
	{
		leftHeight = countHeight(p->left_c);
		rightHeight= countHeight(p->right_c);
		return (leftHeight >= rightHeight? leftHeight+1 : rightHeight+1);
	}
	else
		return 0;
}
int countNodes(TNode *p)
{
	int leftNodes,rightNodes;
	
	if(p != NULL)
	{
		leftNodes = countNodes(p->left_c);
		rightNodes = countNodes(p->right_c);
		return (leftNodes + rightNodes + 1);
	}
	else
		return 0;
}
void MirrorBT(TNode *p)
{
	TNode *tmpPtr;
	
	if(p != NULL)
	{
		tmpPtr = p->right_c;
		MirrorBT(p->left_c);
		MirrorBT(p->right_c);
		p->right_c = p->left_c;
		p->left_c = tmpPtr;
		return;
	}
	else
		return ;
}
/*
void PreOrder(TNode  *p)
{
    if(p != NULL)
    {
        visit(p);
        PreOrder(p->left_c);
        PreOrder(p->right_c);
    }
}*/
/*void PostOrder(TNode  *p)
{
   if(p != NULL)
   {
        PostOrder(p->left_c);
        PostOrder(p->right_c);
        visit2(p);
   }
}*/
