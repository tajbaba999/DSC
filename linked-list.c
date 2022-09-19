#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
//int NODE count =0;
typedef struct node NODE;
NODE *create(NODE *);
//void count();
void display(NODE *);
NODE *inse_begin(NODE *);
NODE *inse_end(NODE *);
NODE *delete_begin(NODE *);
NODE *delete_end(NODE *);

int main(){
    NODE *head = NULL;
    char ch=0;
   while (ch!=7) 
    {
        int choice;
        printf(" 1.To Create\n");
        printf(" 2.Dispaly\n 3.Insertion Begin\n 4.Insertion End\n 5.Deletion begin\n 6.Deletion End\n 7.Exit");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: head=create(head);
            break;
        case 2:display(head);
            break;
        case 3:inse_begin(head);
            break;
        case 4:inse_end(head);
            break;
        case 5:delete_begin(head);
            break;
        case 6:delete_end(head);
            break;
        case 7: exit(0);
        default:printf("Please Enter the right choice");
        }
    }
    return 0;
}
NODE *create(NODE *head){
    NODE *newnode, *temp;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("\n Enter the Data");
    scanf("%d",&newnode->data);
    if (head==NULL)
    {
       head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }

    return head;
}
void display(NODE *head){
    NODE *temp=head;
    if(temp==NULL){
        printf("\n THE List is empty");
    }
    else{
         printf("Elements are =");
        while (temp!=NULL)
        {
           printf("%d",temp->data);
        }    
    }
}
//void count()
//{
 //   printf("The total No.of Elemants are =%d",NODEcount);
//}
NODE *inse_begin(NODE *head){
    NODE *newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter the Data =");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head = newnode;
    }
    else{
        newnode->next=head;
        head = newnode;
    }
   // NODE count++;
    return head;
}
NODE *inse_end(NODE *head){
    NODE *newnode, *temp;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter the Data:");
    scanf("%d",&newnode->data);
    temp=head;
    while (temp->data!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
   // NODE count++;
    return head;
}
NODE *delete_begin(NODE *head){
    NODE *temp=NULL;
    if (temp==NULL)
    {
        printf("Deletion is not possible it is Empty");
    }
    else{
        printf("delete element is=%d",temp->data);
        head=head->next;
        free(temp);
      //  NODE count--;
    }
    return head;
}
NODE *delete_end(NODE *head){
    NODE *temp,*previous;
    temp=head;
    while (temp->next!=NULL)
    {
        previous=temp;
        temp=temp->next;
    }
    previous->next=NULL;
    printf("Deleted element is =%d",previous->data);
    free(temp);
    //NODE count--;
    return head;
}