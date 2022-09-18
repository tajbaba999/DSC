#include<stdio.h>
#include<stdlib.h>
void read(int [], int);
void quick(int[], int, int );
void display(int [], int);
int main(void){
    int i,n,a[40];
    printf("Enter the size of array:");
    scanf("%d",&n);
    read(a,n);
    printf("\nElements before sorting:");
    display(a,n);
    quick(a,0,n-1);
    display(a,n);
    
    
}

void read(int a[], int n){
for(int i = 0; i < n; i++)
    {
       a[i]=rand()%100;
    }
   
}

void display(int a[], int n){
   
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
   }
   printf("\n");
  }
    
void quick(int a[], int lb, int ub){
    int i,j,pivot,temp;
    if (lb>=ub){
        return;
    }
    pivot=a[lb];
    i=lb;
    j=ub;
    while(1)
    {
        while (a[i]<=pivot)
        {
            i++;
        }
        while (a[j]>pivot)
        {
            j--;
        }
        if (i>j)
        {
           break;
        }
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
   a[lb]=a[i];
   a[i]=a[j];
   a[j]=a[lb];
   quick(a,lb,j-1);     
    quick(a,j+1,ub);
}