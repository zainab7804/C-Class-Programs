
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file=fopen("example.txt","r+");
    if (file==NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fseek(file, 0, SEEK_SET);
    fprintf(file, "Updated content:Hello, Updated World!\n");
    fclose(file);
    printf("Data written to file Successfully!");
    return 0;
}
