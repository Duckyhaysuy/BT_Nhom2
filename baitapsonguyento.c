#include <stdio.h>
#include <math.h>

int main() {
    int n, i, check = 1;  

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 2) {
        check = 0;  
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                check = 0;  
                break;
            }
        }
    }

    if (check == 1)
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai la so nguyen to.\n", n);

    return 0;
}

