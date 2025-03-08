#include<stdio.h>
#include<string.h>
int cmp(char *s1, char *s2)
{
    while(*s1 && !(*s1-*s2))
    {
        s1++;
        s2++;
    }
}
int main()
{
    char s1[]="Hello";
    char s2[]="Helo";
    if(!cmp(s1,s2))
    {
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}
