#include<stdio.h>
#include<stdlib.h>
void read(int [], int);
void merge(int[], int, int);
void mergesort(int[], int , int, int);
void display(int [], int);
int main(void){
    int i,n,a[40];
    printf("Enter the size of array:");
    scanf("%d",&n);
    read(a,n);
    printf("\nElements before sorting:");
    display(a,n);
    merge(a,0,n);
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

void merge(int a[], int f, int l){
    int mid;
    if (f<l)
    {
        mid=(f+l)/2;
        merge(a,f,mid);
        merge(a,mid+1,l);
        mergesort(a,f,mid,l);
    }
}

void mergesort(int a[], int f, int mid,int l){
    int i=f,j=mid+1,index=f,temp[50];
    while (i<mid && j<=l ){
        if(a[i]<a[j]){
            temp[index]=a[i];
            i++;
        }
        else{
            temp[index]=a[j];
            j++;
        }
        index++;
    }
    if(i>mid){
        while (j<=l){
            temp[index]=a[j];
            j++;
            index;
        }
    }
    else{
        while (i<=mid){
            temp[index]=a[i];
            i++;
            index++;
        }
    }
for (int k = 0; k < index; k++)
{
    a[k]=temp[k];
}
    
}