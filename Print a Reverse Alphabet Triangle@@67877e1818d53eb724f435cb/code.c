#include <stdio.h>
int main() {
    int i, j, n;
    int alphabet = 'A';
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 0; j < n+1-i; j++) {
            printf("%c ",alphabet+j);
        }
        printf("\n");
    }

    return 0;
}
