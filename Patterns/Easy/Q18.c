#include <stdio.h>
int main()
{
    int n;
    printf("Input:");
    scanf("%d",&n);
   
    for (int i = n+64; i >= 65; i--)
    {
        printf("\n");
        for (int j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
    }
}