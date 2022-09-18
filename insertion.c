#include<stdio.h>
#include<stdlib.h>
void read(int [], int);
void insertion(int[], int );
void display(int [], int);
int main(void){
    int i,n,a[40];
    printf("Enter the size of array:");
    scanf("%d",&n);
    read(a,n);
     printf("\nElements before sorting:");
    display(a,n);
    insertion(a,n);
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
    
void insertion(int a[], int n){
    int i,min,temp;
    for (i = 0; i < n-1; i++){
        min=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[min]>a[j])
            {
                min=j;
            }
            
        }
        if (i!=min)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
   }

}