#include <stdio.h>
int main(){
    int n;
     printf("Input:");
    scanf("%d",&n);
    int num=65;

    for(int i=65;i<=n+65;i++){
        for(int j=65;j<i;j++){
        printf("%c ",num);
        num++;
        }
        printf("\n");
    }
    
}