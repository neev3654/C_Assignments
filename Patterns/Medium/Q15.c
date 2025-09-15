#include <stdio.h>
int main(){
    int n;
    
    printf("Input:");
    scanf("%d",&n);

    for(int i=65;i<=n+65;i++){

        for(int j=1;j<=n-i+65;j++){
            printf("  ");
        }
        for(int j=65;j<=i*2-67;j+=1){
            printf("%c ",j);
        }
         
        printf("\n");
    }
}
