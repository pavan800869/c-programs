//Binary search tree program
#include <stdio.h>
#include <stdlib.h>

struct bstnode{
    int data;
    struct bstnode *lt;
    struct bstnode *rt;
};
struct bstnode *root = NULL;
void insert(int n);
void inorder(struct bstnode *);
void preorder(struct bstnode *);
void postorder(struct bstnode *);

int main(){
    int n,ch=1;
    while (ch!=5){
        printf("Enter your choice \n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            printf("Enter data:\n");
            scanf("%d", &n);
            insert(n);
            break;
            case 2: inorder(root); break;
            case 3: preorder(root); break;
            case 4: postorder(root); break;
        }
    }
}

void insert(int n){
    struct bstnode *temp;
    temp = (struct bstnode *)malloc(sizeof(struct bstnode));
    temp->data = n;
    temp->lt = NULL;
    temp->rt = NULL;
    if (root == NULL)
        root = temp;
    
    else{
        struct bstnode *t, *par;
        t = root;
        par = NULL;
        while(t!=NULL){
            par = t;
            if(n < t->data)
            t = t->lt;
            else
            t = t->rt;
        }
        if (n < par->data)
        par->lt = temp;
        else
        par->rt = temp;
    }
}
void inorder(struct bstnode *t){
    if(t!=NULL){
        inorder(t->lt);
        printf("%d ", t->data);
        inorder(t->rt);
    }
}
void preorder(struct bstnode *t){
    if(t!=NULL){
        printf("%d ", t->data);
        preorder(t->lt);
        preorder(t->rt);
    }
}

void postorder(struct bstnode *t){
    if(t!=NULL){
        postorder(t->lt);
        postorder(t->rt);
        printf("%d ", t->data);
    }
}