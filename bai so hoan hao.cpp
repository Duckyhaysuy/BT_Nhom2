#include <stdio.h>

int isPrime(long long n);

int main() {
    int n, count = 0;
    int p = 2;
    long long mersenne, perfect;

    printf("Nhap so luong so hoan hao can tim: ");
    scanf("%d", &n);

    printf("\n=== %d SO HOAN HAO DAU TIEN ===\n\n", n);

    while (count < n) {
        if (isPrime(p)) {
            mersenne = (1LL << p) - 1;
            if (isPrime(mersenne)) {
                perfect = (1LL << (p - 1)) * mersenne;
                count++;
                printf("%d. %lld\n", count, perfect);
            }
        }
        p++;
    }

    return 0;
}

int isPrime(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
