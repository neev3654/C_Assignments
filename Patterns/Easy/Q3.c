#include <stdio.h>
int main(){
    int n;
    printf("Input:");
    scanf("%d",&n);
    for(int i=65;i<=n+64;i++){
        printf("%c ",i);
    }
}