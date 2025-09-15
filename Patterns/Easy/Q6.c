#include <stdio.h>
int main()
{
    int n;
    printf("Input:");
    scanf("%d",&n);

    for (int i = 65; i <= n+64; i++)
    {
        printf("\n");
        for (int j = 65; j <= n+64; j++)
        {
            printf("%c ", j);
        }
    }
}