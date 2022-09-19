#include <stdio.h>
 #include<stdlib.h>
void readList(int [],int);
void printList(int [],int);
void mergeSort(int [],int,int);
void merge(int [],int,int,int);
int main(void) {
  int a[20];
  int n;
  printf("enter n:\n");
  scanf(" %d",&n);
  printf("enter elements:\n");
  readList(a,n);
  printList(a,n);
  mergeSort(a,0,n-1);
  printf("elements after sorting are:\n");
  printList(a,n);
    return 0;
}
void readList(int a[],int n){
    int i;
    for(i=0;i<n;i++)
     a[i]=rand()%100;
} 
void printList(int a[],int n){
    int i;
    for(i=0;i<n;i++)
      printf(" a[%d]=%d\n",i,a[i]);
}
void mergeSort(int a[],int low,int hi){
    int mid;
    if(low<hi){
        mid=(low+hi)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,hi);
        merge(a,low,mid,hi);
    }
} 
void merge(int a[],int low,int mid,int hi){
    int i=low;
    int j=mid+1;
    int b[20];
    int k=low;
    while(i<=mid && j<=hi){
           if(a[i]<=a[j])
             b[k++]=a[i++];
            else if(a[i]>a[j]) 
              b[k++]=a[j++];
    }
    if(i>mid){
       while(j<=hi)
         b[k++]=a[j++];
    }
    else{
      while(i<=mid)
        b[k++]=a[i++];
    }
   for(k=low;k<=hi;k++)
     a[k]=b[k];
}
