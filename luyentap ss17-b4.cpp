#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1
void arrInput(int **arr, int size);
//2
void arrEven(int **arr, int size);
//3
void arrPrime(int **arr, int size);
//4
void arrReverse(int **arr, int size);
//5
void arrUp(int **arr, int size);
//5
void arrFindn(int **arr, int size, int num);
int main(void) {
    int *arr;
    int size, num;
    int menu, menu1;
    char menu3;
    menu:
    do {
        printf("1.Nhap vao so phan tu va tung phan tu\n");
        printf("2.In ra cac phan tu la so chan\n");
        printf("3.In ra cac phan tu la so nguyen to\n");
        printf("4.Dao nguoc mang\n");
        printf("5.Sap xep mang (Khi chon thi menu con hien thi)\n");
        printf("6.Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7.Thoat\n");
        scanf("%d", &menu);
        getchar();
        switch (menu) {
            case 1:
                printf("nhap so luong phan tu: ");
                scanf("%d", &size);
                arrInput(&arr, size);
                goto menu1;
                break;
            case 2:
                arrEven(&arr, size);
                goto menu1;
                break;
            case 3:
                arrPrime(&arr, size);
                goto menu1;
                break;
            case 4:
                arrReverse(&arr, size);
                goto menu1;
                break;
            case 5:
                do {
                    printf("a.Tang dan\n");
                    printf("b.Giam dan\n");
                    printf("Enter your chacter 'a' or 'b': ");
                    scanf("%c", &menu3);
                    printf("\n");
                }while(menu3 != 'a' && menu3 != 'b' && menu3 != 'A' && menu3 != 'B');
            if(menu3 == 'a' || menu3 == 'A') {
                arrUp(&arr, size);
            }else{
                arrDown(&arr, size);
            }
                goto menu1;
                break;
            case 6:
                printf("Nhap phan tu muon tim: ");
                scanf("%d", &num);
                arrFind(&arr, size, num);
                goto menu1;
                break;
        }
    }while(menu =! 7);
    menu1:
    printf("\n");
    do {
        printf("1.Back to menu\n");
        printf("2.Exit\n");
        scanf("%d", &menu1);
    }while(menu1 != 1 && menu1 != 2);
    if(menu1 == 1) {
        goto menu;
    }else{
        return 0;
    }
}
void arrInput(int **arr, int size) {
    *arr = (int *)malloc(size* sizeof(int));
    for(int i = 0; i < size; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &(*arr)[i]);
    }
}

void arrEven(int **arr, int size) {
    for(int i = 0; i < size; i++) {
        if(*(*arr + i) % 2 == 0) {
            printf("%d\t", *(*arr + i));
        }
    }
}

void arrPrime(int **arr, int size) {
    for(int i = i; i < size; i++) {
        int check = 0;
        for(int j = 1; j < sqrt(*(*arr + i)); j++) {
            if(*(*arr + i) % *(*arr + j) == 0){
                check = 1;
            }
        }
        if(*(*arr + i) == 2){
            check = 0;
        }
        if(check == 0) {
            printf("%d\t", *(*arr + i));
        }
    }
}

void arrReverse(int **arr, int size) {
    for(int i = 0; i < size / 2; i++) {
        int temp = *(*arr + i);
        *(*arr + i) = *(*arr + (size - i - 1));
        *(*arr + (size - i - 1)) = temp;
    }
    for(int i = 0; i < size; i++) {
        printf("%d\t", *(*arr + i));
    }
}

void arrUp(int **arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(*arr + j) > *(*arr + j + 1)) {
                int temp = *(*arr + j);
                *(*arr + j) = *(*arr + j + 1);
                *(*arr + j + 1) = temp;
            }
        }
    }
    for(int i = 0; i < size; i++) {
        printf("%d\t",  *(*arr + i));
    }
}

void arrDown(int **arr, int size) {
    for(int i = 0; i < size ; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(*arr + j) < *(*arr + j + 1)) {
                int temp = *(*arr + j);
                *(*arr + j) = *(*arr + j + 1);
                *(*arr + j + 1) = temp;
            }
        }
    }
    for(int i = 0; i < size; i++) {
        printf("%d\t",  *(*arr + i));
    }
}

void arrFind(int **arr, int size, int num) {
    int check = 0;
    for (int i = 0; i < size; i++) {
        if(*(*arr + i) == num) {
            printf("Phan tu nam tai vi tri: %d\n", i + 1);
            check = 1;
        }
    }
    if(check == 0) {
        printf("Khong co phan tu do!!!!");
    }

}

