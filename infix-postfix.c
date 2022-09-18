#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[100];
int top=-1;
void push(char);
int priority(char );
char pop();

int main(void){
    char a[50],x;
    int i=0;
    printf("Enter the postfix expression:");
    scanf("%s",a);
    push('(');
    for ( i = 0; a[i]='\0' ; i++)
    {
        if(isalnum(a[i])){
            printf("%c",a[i]);
        }
        else if(a[i]=='('){
            push(a[i]);
        }
        else if(a[i]==')'){
            while (x=pop()!='(')
            {
                printf("%c",x);
            }
            
        }
        else{
            while(priority(stack[i])>=priority(a[i]))
            {
               printf("%c",pop());
            }
             push(a[i]);
        }
       
    }
    while (top>0)
    {
      printf("%c",pop());
    }
}

void push(char x){
    top++;
    stack[top]=x;
}
char pop(){
    if(top==-1){
        return -1;
    }
    char x;
    x=stack[top];
    top--;
    return x;
}

int priority(char x){
    if(x=='('){
        return 0;
    }
    if(x=='+' || x=='-'){
        return 1;
    }
    if(x=='*' || x=='/'){
        return 2;
    }
}