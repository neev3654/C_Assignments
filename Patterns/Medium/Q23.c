#include <stdio.h>
int main()
{
    int n;
    printf("Input:");
    scanf("%d", &n);

    for (int i = 65; i <= n+65; i++)
    {
        for (int j = 65; j <= i; j++)
            printf("  ");
        for (int j = 65; j <= n+65 - i +64; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}