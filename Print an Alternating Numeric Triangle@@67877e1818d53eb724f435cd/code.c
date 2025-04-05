#include <stdio.h>

int main() {
    int i, j, n;
    int num = 1;   
    char alphabet = 'A';  
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {  
            for(j = 1; j <= i; j++) {
                printf("%d ", num);
                num++;  
            }
        } else {  
            for(j = 1; j <= i; j++) {
                printf("%c ", alphabet);
                alphabet++;  
            }
        }
        printf("\n"); 
    }

    return 0;
}
