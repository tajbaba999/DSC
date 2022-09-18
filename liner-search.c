#include<stdio.h>
#include<stdlib.h>
void read(int [], int);
int search(int [], int, int);
int main(void){

    int a[40],ele,n,index;
     printf("Enter the number of elements:");
    scanf("%d",&n);
    read(a,n);
    printf("\nEnter the element to search:");
    scanf("%d",&ele);
    index=search(a,ele,n);
    if(index==-1){
        printf("Element is not found");
    }
    else{
         printf("Index == %d",index);
    }
   

}

void read(int a[], int n){
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

int search(int a[], int ele, int count){
    int index=-1;
    for (int i = 0; i < count; i++)
    {
        if (a[i]==ele)
        {
            index=i;
        }
        
    }
    
return index;
}