#include <stdio.h>

int main() {
    int n, i, nilai, jumlah = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nilai);
        jumlah += nilai;
    }

    double rata = (double)jumlah / n;
    
    printf("%d\n", jumlah);
    printf("%.2f\n", rata);

    return 0;
}