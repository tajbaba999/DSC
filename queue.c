#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];
int front = -1;
int rear = -1;
void insert();
void delete();
void display();
int main(void){
    int ch=0;
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    while(ch!=4)
    {
        printf("enter the choice=");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:insert();
            break;
        case 2:delete();
            break;
        case 3:display();
            break;
        case 4:exit(0);
        default:printf("Please the right choice");
            break;
        }
    }
    
}

void insert(){
    int ele;
    printf("Enter the element=");
    scanf("%d",&ele);
    if(front== -1 && rear == -1){
        front=rear=0;
        a[front]=ele;
    }
    else if(rear==0){
        rear=rear+1;
        a[rear]=ele;
    }
    else{
        if(rear!=MAX-1){
            rear++;
            a[rear]=ele;
        }
        else{
            printf("QUeue is full");
        }

    }
}

void pop(){
    if(front==-1){
        printf("Queue is undderflow\n");
    }
    if(rear==0){
        front=rear=-1;
        printf("deleted element is=%d",a[rear]);
    }
    else{
        printf("deleted elemet is =%d",a[rear]);
        rear--;
    }
}

void display(){
    if(front==-1){
        printf("Underflow");
    }
    else {
        printf("elements in queue =");
        for (int i = rear; i > 0; i--)
        {
            printf("%d\n",a[i]);
        }
        
    }
}