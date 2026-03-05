#include <stdio.h>

int main() {
    int n, i, nilai, jumlah = 0;
    int data[100]; // asumsi maksimal 100 nilai
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
        jumlah += data[i];
    }

    double rata = (double)jumlah / n;

    int count = 0;
    for (i = 0; i < n; i++) {
        if (data[i] >= rata) {
            count++;
        }
    }
    
    printf("%d\n", jumlah);
    printf("%.2f\n", rata);
    printf("%d\n", count);

    return 0;
}