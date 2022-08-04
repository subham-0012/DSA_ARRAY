#include<stdio.h>
#include<stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}
void append(struct array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length]=x;
        arr->length++;
    }
}
void insert(struct array *arr,int index,int x)
{
    if(index>=0&&index<=arr->length)
    {
        int i;
        for(i=arr->length;i>index;i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}
int delete(struct array *arr,int index)
{
    int x=0;
    if(index>=0&&index<arr->length)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
    }
    arr->length--;
    return x;
}
int linearSearch(struct array *arr,int key)
{
    int i,temp;
    for(i=0;i<arr->length;i++)
    {
        if(arr->A[i]==key)
        {
            temp=arr->A[i-1];
            arr->A[i-1]=arr->A[i];
            arr->A[i]=temp;
            return i-1;
        }
    }
    return -1;
}
int BinarySearch(struct array arr,int key)
{
    int low=0,high=arr.length-1,mid,count=0;
    while(low<=high)
    {
        count++;
        mid=(low+high)/2;
        if(arr.A[mid]==key)
        {
            printf("%d",count);
            return mid;
        }
        else if (arr.A[mid] > key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int recursiveBinarySearch(struct array arr, int low,int high,int key)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr.A[mid] == key)
        {
            return mid;
        }
        else if (arr.A[mid] > key)
        {
            recursiveBinarySearch(arr,low,mid-1,key);
        }
        else
        {
            recursiveBinarySearch(arr, mid+1, high, key);
        }
    }
    return -1;
}
int main()
{
    struct array arr={{1,3,4,6,8,10,15,17,19,35},10,10};
    //display(arr);
    //append(&arr,6);

    //display(arr);
    //insert(&arr,3,6);

    //int x=delete(&arr,3);
    //printf("%d",x);
    //display(arr);

    //int p=linearSearch(&arr,5);
    //printf("\n%d",p);

    int r=BinarySearch(arr,1);
    //printf(" %d",r);
}