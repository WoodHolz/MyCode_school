#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree CreatBinTree(); /* 实现细节忽略 */
int GetHeight( BinTree BT );

int main()
{
    BinTree BT = CreatBinTree();
    printf("%d\n", GetHeight(BT));
    return 0;
}
/* 你的代码将被嵌在这里 */
int GetHeight( BinTree BT )
{
    int hr, hl, h;
    if(BT){
        hl = GetHeight(BT->Left);
        hr = GetHeight(BT->Right);
        h = (hl > hr ? hl : hr) + 1;
        return h;
    }
    else return 0;
}



void Exchange(BitTree *BT)
{
	if(BT->lchild && BT->rchild){
		BitTree *temp = BT->lchild;
		BT->lchild = BT->rchild;
		BT->rchild = temp;
	}
	if(BT->lchild) Exchange(BT->lchild);
	if(BT->rchild) Exchange(BT->rchild);
}


int NodeCount (BiTree BT){
	if((BT->lchild != NULL)&&(BT->rchild != NULL)){
		return 1+NodeCount(BT->lchild)+NodeCount(BT->rchild);
	}
    else if(!BT) return 0;
}
