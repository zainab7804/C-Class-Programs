#include<stdio.h>
int add(int num);
void main()
{
    int res=add(1);
    printf("The sum of numbers from 1 to 100 except 3,5,7 is : %d\n",res);

}
int add(int num)
{
    if (num>100)
    {
        return 0;
    }
    if ( num==3 | num==5 | num==7 )
    {
        return add(num+1);
    }
    return num+add(num+1);
}

