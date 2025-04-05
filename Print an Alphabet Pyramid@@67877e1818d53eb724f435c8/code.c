#include <stdio.h>
int main() {
    int i, j, n;
    char alphabet = 'A';
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 0; j <= i; j++) {
            printf("%c",alphabet+ j);
        }
        printf("\n");
    }

    return 0;
}
