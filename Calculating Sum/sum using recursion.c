#include<stdio.h>
int add(int a);
void main()
{
    int sum,num;
    printf("Enter the total number of elements:");
    scanf("%d",&num);
    sum=add(num);
    printf("Sum of %d numbers is: %d",num,sum);
}
int add(int a)
{
    if (a<=0)
    {
        return 0;
    }
    return a+add(a-1);
}
