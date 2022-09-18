#include<stdio.h>
#include<stdlib.h>
int binary(int[], int, int, int);

int main(void){
    int n,a[50],ele;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element");
    scanf("%d",&ele);
   int index = binary(a,ele,0,n-1);
    if (index==-1){
        printf("Element is not found"); 
    }
    else{
        printf("Elemet %d found at index=%d ",ele,index);
    }
}

int binary(int a[], int ele, int f, int l){
    int mid=(f+l)/2;
    if(a[mid]==ele){
        return mid;
    }
    else if(ele > a[mid]){
        binary(a,ele,mid+1,l);
    }
    else{
        binary(a,ele,f,mid-1);
    }
    return -1;
}