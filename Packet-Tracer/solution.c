#include<stdio.h>
#include<stdlib.h>

typedef struct Tree
{
    int key;
    struct Tree *left;
    struct Tree *right;
}Tree;

Tree* createTree(int key)
{
    Tree *nn=(Tree*)malloc(sizeof(Tree));
    nn->key=key;
    nn->left=NULL;
    nn->right=NULL;
    
    return nn;
}

int isempty(Tree *t)
{
    return (t==NULL);
}

Tree* insertTree(Tree *root,int key)
{
    if(isempty(root))
        root=createTree(key);
    else if(key<=root->key)
        root->left=insertTree(root->left,key);
    else
        root->right=insertTree(root->right,key);
    return root;
}

void postorder(Tree *t)
{
    if(isempty(t))
        printf(" ");
    else{

        if(t->left!=NULL)
            postorder(t->left); //L
        if(t->right!=NULL)
            postorder(t->right);//R
         printf("%d",t->key); //v
    }
}

int main()
{
    Tree *root=NULL;
    int Number,i;
    scanf("%d",&Number);

    for(i=0;i<Number;i++)
    {
        int value;
        scanf("%d",&value);

        root =insertTree(root,value);
    }
    
    postorder(root);
}
