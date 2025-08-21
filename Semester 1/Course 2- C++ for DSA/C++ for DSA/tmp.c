#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x <= 1000)
    {
        printf("Bad luck!\n");
        return 0;
    }
    if (x > 1000)
    {
        printf("I will buy Punjabi\n");
        x = x - 1000;
    }
    if (x >= 500)
    {
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
}