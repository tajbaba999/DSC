#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};

struct node *front;
struct node *rear;
void insert();
void pop();
void display();

int main(void){
    int ch=0;
    printf("1.Insert\n2.Pop\n3.Display\n4.Exit\n");
    while (ch!=4)
    {
     printf("Enter your chlice:");  
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
    default:printf("Enter the right choice\n");
        break;
    }
    }
    

}
void push(){
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter the data:");
   scanf("%d",&newnode->data);
   if(front==NULL){
    newnode->next=NULL;
    front=newnode;
    rear=newnode;
   }
   else {
    temp=front;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    rear=newnode;
    newnode->next=NULL;
   }
    
}

void pop(){
    struct node *temp;
    if(front==NULL){
        printf("Nothing should be delted\n");
    }
    else if(front->next==NULL){
        front=NULL;
        rear=NULL;
    }
    else{
        temp=front;
        front=temp->next;
        free(temp);
    }
    
}

void display(){
    struct node *temp;
   if(front==NULL){
    printf("No elements in Queue");
   }
   else{
    temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
   }
    
}