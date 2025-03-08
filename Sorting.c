#include<stdio.h>
void sort(int arr[],int size)
{
    for(int step=0; step<size-1; step++)
    {
        for(int i=0; i<size-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void print(int arr[],int size)
{
    for( int i=0; i<size; ++i)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int data[]={1,5,8,9,6};
    int size= sizeof(data)/sizeof(data[0]);
    sort(data,size);
    printf("Sorted Array:\n");
    print(data, size);
}
