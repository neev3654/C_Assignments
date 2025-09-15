#include <stdio.h>
int main(){
    int n;
    printf("Input:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=65;j<=i+64;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}