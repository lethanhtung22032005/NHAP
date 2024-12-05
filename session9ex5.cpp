#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
    return 1;
}

int main() {
    int arr[100], n = 0, choice, i, value, index, sum;

    do {
        printf("\nMENU\n");
        printf("1. Nhap mang\n2. In mang\n3. So chan va tong\n");
        printf("4. Lon nhat va nho nhat\n5. So nguyen to va tong\n");
        printf("6. Thong ke phan tu\n7. Them phan tu\n8. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so phan tu: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) scanf("%d", &arr[i]);
        } 
        else if (choice == 2) {
            for (i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } 
        else if (choice == 3) {
            sum = 0;
            printf("So chan: ");
            for (i = 0; i < n; i++) {
                if (arr[i] % 2 == 0) {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong chan: %d\n", sum);
        } 
        else if (choice == 4) {
            int max = arr[0], min = arr[0];
            for (i = 1; i < n; i++) {
                if (arr[i] > max) max = arr[i];
                if (arr[i] < min) min = arr[i];
            }
            printf("Max: %d, Min: %d\n", max, min);
        } 
        else if (choice == 5) {
            sum = 0;
            printf("So nguyen to: ");
            for (i = 0; i < n; i++) {
                if (isPrime(arr[i])) {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nTong nguyen to: %d\n", sum);
        } 
        else if (choice == 6) {
            printf("Nhap gia tri can thong ke: ");
            scanf("%d", &value);
            sum = 0;
            for (i = 0; i < n; i++) if (arr[i] == value) sum++;
            printf("So lan xuat hien: %d\n", sum);
        } 
        else if (choice == 7) {
            printf("Nhap gia tri va vi tri: ");
            scanf("%d %d", &value, &index);
            if (index < 0 || index > n) printf("Vi tri khong hop le\n");
            else {
                for (i = n; i > index; i--) arr[i] = arr[i - 1];
                arr[index] = value;
                n++;
            }
        }
    } while (choice != 8);

    return 0;
}

