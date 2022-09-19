#include<stdio.h>
#include<stdlib.h>
int countq=0;
typedef struct array_list
{
    int a[50];
    int size;
}h1;

void create(h1 *);
void inser_beg(h1 *);
void inser_pos(h1 *);
void inser_end(h1 *);
void delete_beg(h1 *);
void delete_end(h1 *);
void delete_pos(h1 *);
void display(h1 *);
void count(h1 *);

int main(void){
    h1 *ptr;
    int choice;
    char ch;
    do
    {
        printf("1.Create\n 2.Display\n 3.Insertion Begin\n 4.Insertion Position\n 5.Insertion End\n 6.Delete begin\n 7.Delete Position");
        printf("8.Delete End\n 9.Dispaly\n 10.count");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:create(ptr);
            break;
        case 2:display(ptr);
            break;
        case 3:inser_beg(ptr);
            break;
        case 4:inser_pos(ptr);
            break;
        case 5:inser_end(ptr);
            break;
        case 6:delete_beg(ptr);
            break;
        case 7:delete_pos(ptr);
            break;
        case 8:delete_end(ptr);
            break;
        case 9:display(ptr);
            break;
        case 10:printf("The %d",countq);
        //count(ptr);
            break;
        default:printf("You Had Entered Invalid range");
            break;
        }
        printf("If you want to continue Enter Y or y");
        scanf("%c",&ch);
   
    } while (ch=='Y'||ch=='y');
    
}

void create(h1 *ptr)
{
    printf("Enter the size of Array");
    scanf("%d",ptr->size);
    printf("Enter the Elemensts");
    for(int i=0; i<ptr->size; i++)
    {
        scanf("%d",&ptr->a[i]);
    }
}
void dispaly(h1 *ptr)
{
    printf("Entered elemants are :");
     for(int i=0; i<ptr->size; i++)
    {
        printf("%d",&ptr->a[i]);
    }
}
void inser_beg(h1 *ptr)
{
    int i;
    for ( i=ptr->size-1; i>=0; i--)
    {
        ptr->a[i+1]=ptr->a[i];
    }
    ptr->size++;
    ptr->a[0]=23;
    dispaly(ptr);
}
void inser_pos(h1 *ptr)
{
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    for (int i=ptr->size-1; i>=pos; i--)
    {
        ptr->a[i+1]=ptr->a[i];
    }
    ptr->size++;
    ptr->a[pos]=32;
    dispaly(ptr);
}
void inser_end(h1 *ptr)
{
    
    ptr->a[ptr->size]=45;
    ptr->size++;
    dispaly(ptr);
}
void delete_beg(h1 *ptr)
{
    for (int i = 0; i < ptr->size-1; i++)
    {
        ptr->a[i]=ptr->a[i+1];
    }
    ptr->size--;
    dispaly(ptr);
}
void delete_pos(h1 *ptr)
{
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    for (int  i = pos-1; i <=ptr->size-1; i++)
    {
        ptr->a[i]=ptr->a[i+1];
    }
    ptr->size--;
    display(ptr);
}
void delete_end(h1 *ptr)
{
    ptr->a[ptr->size-1]='\0';
    display(ptr);
}
void search(h1 *ptr)
{
    int search;
    printf("Enter the element to search:");
    scanf("%d",&search);
    for (int i = 0; i < ptr->size-1; i++)
    {
       if (ptr->a[i]==search)
       {
        printf("Element is found at %d",i+1);
       }
       else {
        printf("Element is not found ");
       }
       
    }
    
}
