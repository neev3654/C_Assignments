#include <stdio.h>
int main()
{
    int n;
    printf("Input:");
    scanf("%d", &n);

    for (int i = 65; i <= n+65; i++)
    {
        for (int j = 65; j <= 2*i-66; j++)
            printf(" ");
        for (int j = 65; j <=2*(n+65-i)+63; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}