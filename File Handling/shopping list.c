#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char a[50];
    FILE *file=fopen("example.txt","w");

    for(i=0;i<10;i++)
    {

        printf("Enter the list items:");
        scanf("%s",&a);
        fprintf(file, "%s\n",&a);
    }
    if (file==NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fclose(file);
    printf("Data written to file Successfully!");
    return 0;
}
