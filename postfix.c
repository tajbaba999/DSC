#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top=-1;
void push(int);
int pop();

int main(void){
    int i,a[50],x,y;
    printf("Enter the expression:");
    scanf("%s",a);
    i=0;
    while (a[i]!='\0'){
        if(a[i]>='1' && a[i]<='9'){
            push(a[i]-'0');
        }
        else{
            y=pop();
            x=pop();
            switch (a[i])
            {
            case '+':push(x+y);
                break;
            case '-':push(x-y);
                break;
            case '*':push(x*y);
                break;
            case '/':push(x/y);
                break;
            }
        }
        i++;
    }
    printf(" value for %s is  %d",a,pop());
}

void push(int x){
    top++;
    stack[top]=x;
}
int pop(){
    int x;
    x=stack[top];
    top--;
    return x;
}