#include<stdio.h>
#include<stdlib.h>
int binary(int);
int a[50];
int main(void){
    int size,sear;
    printf("enter the size");
    scanf("%d",&size);
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element ");
    scanf("%d",&sear);
    int ele=binary(sear);
    printf("Index is =%d",ele);
    
}

int binary(int x){
    int mid,fir,las;
    mid=(fir+las)/2;
    if(a[mid]==x){
        return mid;
    }
    else if(a[mid]>x){
        binary(mid-1);
    }
    else{
        binary(mid+1);
    }

}