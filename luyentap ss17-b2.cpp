#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    int menu;
    int size = 0;
    char arr[size];
    int index = 0;

    do {
        printf("1.Nhap vao chuoi\n");
        printf("2.In ra chuoi\n");
        printf("3.Dem so luong chu cai trong chuoi va in ra\n");
        printf("4.Dem so luong chu so trong chuoi va in ra\n");
        printf("5.Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6.Thoat\n");
        printf("Enter your number: \n");
        scanf("%d", &menu);
        getchar();
        switch (menu) {
            case 1:
              printf("Nhap vao chuoi: ");
              fgets(arr, 100, stdin);
              size = strlen(arr);
                break;
            case 2:
                if(size == 0) {
                    printf("chua nhap vao chuoi");
                    continue;
                }
                printf("In ra chuoi: ");
                puts(arr);
                break;
            case 3:
                if(size == 0) {
                    printf("chua nhap vao chuoi");
                    continue;
                }
                index = 0;
                for(int i = 0; i < size; i++) {
                    if(arr[i] == ' ') {
                        continue;
                    }
                    if(islower(arr[i]) || isupper(arr[i])) {
                        index++;
                    }
                }
                printf("So luong chu cai trong chuoi: %d\n", index);
                break;
            case 4:
                if(size == 0) {
                    printf("chua nhap vao chuoi");
                    continue;
                }
                index = 0;
                for(int i = 0; i < size; i++) {
                    if(isdigit(arr[i])) {
                        index++;
                    }
                }
            printf("So trong chuoi: %d\n", index);
                break;
            case 5:
                if(size == 0) {
                    printf("chua nhap vao chuoi");
                    continue;
                }
                index = 0;
            for(int i = 0; i < size; i++) {
                if(ispunct(arr[i])) {
                    index++;
                }
            }
            printf("Ki tu dang biet trong chuoi: %d\n", index);
                break;
        }
    }while(menu != 6);

}

