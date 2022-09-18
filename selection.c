#include<stdio.h>
void read(int [], int);
void selection(int[], int );
void display(int [], int);
int main(void){
    int i,n,a[40];
    printf("Enter the size of array:");
    scanf("%d",&n);
    read(a,n);
    selection(a,n);
    display(a,n);
}

void read(int a[], int n){
    printf("Enter the elements:\n");
for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[], int n){
    printf("Elements after sorting are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
}   
void selection(int a[], int n){
    int i,j,key;
    for ( i = 0; i < n; i++){
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        
    }

}