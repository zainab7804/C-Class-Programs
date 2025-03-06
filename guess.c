#include <stdio.h>
void guess()
{
    int num=10, guess;
    while(1)
    {
        printf("Enter the number:");
        scanf("%d", &guess);
        if(num == guess)
        {
            printf("Correct!");
            return;
        }
        else
        {
            printf("Incorrect\n");
        }
    }
}
void main()
{
    guess();
}

