#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    //if solution exists
    if (k == 1) {
        printf("YES\n");
        for (int i = 0; i < n; i++) {
            printf("1\n");
        }
        return 0;
    }
    if (k % 2 == 1 && n % 2 == 0) {
        printf("NO\n");
        return 0;
    }    
    printf("YES\n");
    
    if (k % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < k/2; j++) {
                printf("%d %d ", i, n+1-i);
            }
            printf("\n");
        }
    }
    else {
        int x = (n + 1)/2;
        for (int i = 1; i <= n; i++) {
            //first three columns
            int a = n+1-i;
            int b = (i <= x) ? (2*i-1) : (2*(i-x));
            int c = 3*x - a - b;
            printf("%d %d %d ", a, b, c);
            
            //remaining columns
            for (int j = 3; j < k; j += 2) {
                printf("%d %d ", i, n+1-i);
            }
            printf("\n");
        }
    }    
    return 0;
}