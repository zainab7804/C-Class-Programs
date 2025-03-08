#include<stdio.h>
#include<string.h>
void reverse(char *str);
void main()
{
    char str[100];
    printf("Enter the String:");
    scanf("%s",&str);
    printf("Original String: %s\n",str);
    reverse(str);
    printf("Reversed String: %s\n",str);
}
void reverse(char *str)
{
    int l,i;
    char *bp, *ep, ch;
    l=strlen(str);
    bp=str;
    ep=str+l-1;

    for(i=0;i<l/2;i++)
    {
        ch=*ep;
        *ep=*bp;
        *bp=ch;
        bp++;
        ep--;
    }
}
