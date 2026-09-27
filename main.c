#include <stdio.h>

int main() {
    double distance_km;
    int is_surge;
    double fare = 0.0;

    printf("Nhap quang duong (km): ");
    scanf("%lf", &distance_km);

    printf("Nhap trang thai phu phi (0: binh thuong, 1: cao diem): ");
    scanf("%d", &is_surge);

    if (distance_km <= 0.0) {
        printf("Loi: Quang duong khong hop le.\n");
        return 1;
    }
    if (is_surge != 0 && is_surge != 1) {
        printf("Loi: Trang thai phu phi khong hop le.\n");
        return 1;
    }

    if (distance_km <= 2.0) {
        fare = 12000.0;
    } else {
        fare = 12000.0 + (distance_km - 2.0) * 4500.0;
    }

    if (is_surge == 1) {
        fare = fare * 1.2;
    }

    printf("Tong cuoc phi: %.2f VND\n", fare);

    return 0;
}
