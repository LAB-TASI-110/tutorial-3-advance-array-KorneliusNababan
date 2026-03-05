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
    int min = data[0], max = data[0];
    for (i = 0; i < n; i++) {
        if (data[i] >= rata) {
            count++;
        }
        if (data[i] < min) min = data[i];
        if (data[i] > max) max = data[i];
    }

    int range = max - min;

    printf("%d\n", jumlah);
    printf("%.2f\n", rata);
    printf("%d\n", count);
    printf("%d\n", range);

    return 0;
}