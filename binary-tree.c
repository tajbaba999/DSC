#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    int *left,*right;
};
typedef struct node NODE;

NODE *create(int);
NODE *insert(NODE *,int);
void postorder(NODE *);
void inoder(NODE *);
void  preorder(NODE *);
NODE *delete(NODE *, int);
NODE *search(NODE *, int);
NODE *findmaximum(NODE *);
NODE *findminimum(NODE *);

int main(void){
    NODE *root=NULL,*temp;
    int ch=0,ele;
    printf("1.Insert\n2.Preorder\n3.Inorder\n4.Postorder\n5.Findmaximum\n6.Find-minimun\n");
    printf("7.search\n8.Delete\n9.Exit");
    while (ch!=9)
    {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Enter the element to insert :");
                scanf("%d",&ele);
               root=insert(root,ele);
                break;
        case 2:preorder(root);
                break;
        case 3:inoder(root);
                break;
        case 4:postorder(root);
                break;
        case 5:printf("Find maximum");
                break;
        case 6:printf("find minimum");
                break;
        case 7:printf("Enter the element to search:");
                scanf("%d",&ele);
                if(root==NULL){
                    printf("The Tree is empty");
                }
                else{
                    temp=search(root,ele);
                    if(temp==NULL){
                        printf("Element is not found");
                    }
                    else{
                        printf("the element is found %d",temp->data);
                    }
                }

        case 8:printf("Enter the elemet to delete :");
                scanf("%d",&ele);
                root=delete(root,ele);
            inoder(root);
            break;
        case 9:exit(0);
        }
    
    }
    
}

NODE *insert(NODE *root,int ele){
    if(root==NULL){
        return create(ele);
    }
    else{
        if(ele>=root->data){
            root->right=insert(root->right,ele);
        }
        else if(ele<root->left){
            root->left=insert(root->left,ele);
        }
        else{
            return root;
        }
    }
}

NODE *create(int ele){
    NODE *newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->data=ele;
    newnode->left=newnode->right=NULL;
    return newnode;
}

void preorder(NODE *root){
    if(root==NULL)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(NODE *root){
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}


void postorder(NODE *root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

NODE *delete(NODE *root, int ele){

}

NODE *search(NODE *root, int ele){
    if (root==NULL){
        return NULL;
    }
    if (root->data==ele){
        return root;
    }
    if(root->data>=ele){
        return search(root->right,ele);
    }
    if(root->data<ele){
        return search(root->left,ele);
    }
    
}

void *delete(NODE *rt,int ele){
    if(rt==NULL){
        return NULL;
    }
   else if (ele>rt->data) {
        rt->right=delete(rt->right,ele);
    }
    else if (ele<rt->data){
        rt->left=delete(rt->left,ele);
    }
    else{
        if (rt->left==NULL && rt->right==NULL){
            free(rt);
            return NULL;
        }
        else if (rt->left==NULL || rt->right==NULL){
            NODE *temp;
            if(rt->left==NULL){
                temp=rt->right;
                free(rt);
            }
            else{
                temp=rt->left;
                free(rt);
               
            }
             return temp;
        }
        else{
            NODE *temp=findminimum(rt->right);
            rt->data=temp->data;
            rt->right=delete(rt->right,temp->data);
        }
        
    }
    return rt;
    
}
NODE *findmaximum(NODE *rt){
    if (rt->right==NULL){
        return rt;
    }
    else{
        return findmaximum(rt->right);
    }
    
}

NODE *findminimum(NODE *rt){
    if (rt->left==NULL){
        return rt;
    }
    else{
        return findminimum(rt->left);
    }
    
}
