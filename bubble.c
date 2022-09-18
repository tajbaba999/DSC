#include<stdio.h>
#include<stdlib.h>
void read(int [], int);
void bubble(int[], int);
void display(int [], int);
int main(void){
    int i,n,a[40];
    printf("Enter the size of array:");
    scanf("%d",&n);
    read(a,n);
    printf("\nElements before sorting:");
    display(a,n);
    bubble(a,n);
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

  void bubble(int a[], int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    

  }