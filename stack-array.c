#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX];
int top=-1;
void push();
void pop();
void display();

int main(void){
    int ch=0;
    while (ch!=4)
    {
        printf("1.Push\n 2.Pop\n 3.Display\n 4.Exit");
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
         default:printf("Re-Enter the corect choice");
            break;
        }
        
    }
    
}

void push()
{
    int x;
    printf("Enter the element =");
    scanf("%d",&x);
    if(top==MAX-1)
    {
        printf("Stack is FULL");
    }
    else{
        top++;
        s[top]=x;
    }

}
void pop(){
    if(top == -1){
        printf("Sstack is Under-flow");
    }
    else{
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        for(int i=MAX-1; i>=0; i--){
            printf("\n%d",s[i]);
        }
    }
}