#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *top=NULL;
void push();
void pop();
void display();

int main(void){
    int ch=0;
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    while (ch!=4)
    {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        case 4:exit(0);
            break;
        default:printf("Enter the correct choice\n");
            break;
        }
    }
    
}

void push(){
    NODE *newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter the element:");
    scanf("%d",&newnode->data);
    if (top==NULL){
        top=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
    
}

void pop(){
    NODE *temp;
    if (top==NULL){
     printf("Deletion is not possible");  
    }
    else{
            temp=top;
            top=temp->next;
            temp->next=NULL;
            free(temp);
    }
}

void display(){
    NODE *temp;
    temp=top;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}