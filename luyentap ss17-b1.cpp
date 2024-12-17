#include <stdio.h>
#include <stdlib.h>
//1
void arrInput(int **arr,int n) {
    *arr = (int *)malloc(n * sizeof(int));
    if (*arr == NULL) {  
        printf("Khong the cap phat bo nho!\n");
        exit(1);
    }
    for(int i = 0; i < n; i++) {
        printf("arr[%d]: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}
//2
void arrOutput(int **arr,int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", (*arr)[i]);
    }
}

void arrQ(int n) {
    printf("so phan tu trong mang la: %d", n);
}

void arrSum(int **arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
       sum += (*arr)[i];
    }
    printf("Tong la: %d", sum);
}

void arrL(int **arr, int n) {
    int temp = 0;
    for(int i = 0; i < n; i++) {
        if(temp < (*arr)[i]) {
            temp = (*arr)[i];
        }
    }
    printf("so lon nhat la: %d", temp);
}
int main(void) {
    int *arr;
    int n = 0;
    int menu;
    do {
        printf("\n");
        printf("***********MENU**********\n");
        printf("1.Nhap vào so phan tu và tong phan tu\n");
        printf("2.Hien thi cac phan tu trong mang\n");
        printf("3.Tinh do dai mang\n");
        printf("4.Tinh tong cac phan tu trong mang\n");
        printf("5.Hien thi phan tu lon nhat\n");
        printf("6.Thoat\n");
        printf("Enter your number: ");
        scanf("%d", &menu);
        switch(menu) {
            case 1:
                printf("nhap so phan tu muon nhap: ");
                scanf("%d", &n);
                arrInput(&arr, n);
                break;

            case 2:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrOutput(&arr, n);
                break;

            case 3:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrQ(n);
                break;

            case 4:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrSum(&arr, n);
                break;

            case 5:
                if(n == 0) {
                    printf("chua nhap mang!!: ");
                }
                arrL(&arr, n);
                break;
        }
    }while (menu != 6);

}

