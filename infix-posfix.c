#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void push(char);
char pop();
int priority(char);
int top=-1;
int main(void){
    char a[50];
    int i=0;
    printf("Enter the infix expression");
    scanf("%s",a);
    for (int i = 0; a[i]='\o'; i++)
    {
        if (isalnum(a[i])){
            printf("%c",a[i]);
        }
        else if(a[i]=='('){
            push(a[i]);
        }
        else if(a[i]==')'){
            int x;
            while (x=pop()!='(')
            {
                printf("%c",x);
            }
            
        }
        else{
            while (priority(stack[top])>=priority(a[i])){
                printf("%c",pop());
            }
            
        }
        push(a[i]);
    }
while(top>0){
    printf("%c",pop());
    }
}

void push(char x){
    stack[++top]==x;

}
char pop(){
    if(top==-1){
        return -1;
    }
    else{
        return stack[top--];
    }
}
int priority(char x){
    if(x=='('){
        return 0;
    }
    if(x=='+'||x=='-'){
        return 1;
    }
    if(x=='*'||x=='\'){
        return 2;
    }
}