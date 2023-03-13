#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//define binary_tree 
typedef struct binary_tree
{
    char data;
    struct binary_tree * lchild;
    struct binary_tree * rchild;
}bt;

void init();
void create();
void clear();
void isempty();
void root();
void depth();
void parent();
void lchild();
void rchild();
void preorder();
void inorder();
void postorder();

int main()
{
    bt * point;
    init(point);
    
}

//init a tree
void init(bt * bttree)
{
    bttree = (bt *)malloc(sizeof(bt));
    bttree->data = NULL;
    bttree->lchild = NULL;
    bttree->rchild = NULL;
}

//create a tree
void create(bt * bttree)
{
    
}

//clear a tree
void clear(bt * bttree)
{

}

//judge if it's empty
void isempty(bt * bttree)
{

}

//find the root 
void root(bt * bttree)
{

}

//compute the depth
void depth(bt * bttree)
{}

//find the parent
void parent(bt * bttree)
{}

//find the left child
void lchild(bt * bttree)
{}

//find the right child
void rchild(bt * bttree)
{}

//preorder the tree
void preorder(bt * bttree)
{}

//inorder the tree
void inorder(bt * bttree)
{}

//postorder the tree
void postorder(bt * bttree)
{}
