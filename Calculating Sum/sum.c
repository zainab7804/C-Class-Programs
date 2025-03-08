#include <stdio.h>
#include <stdlib.h>
int add(int c, int d);
int main()
{

    int a,b,sum;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("The sum is %d",sum);
    return 0;
}
int add(int c, int d)
{
    int add=c+d;
    return add;
}

