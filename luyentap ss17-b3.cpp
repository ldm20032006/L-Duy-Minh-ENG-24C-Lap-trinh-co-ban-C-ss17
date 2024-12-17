#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int menu;
    int index = 0;
    char arr[100], arr2[100];
    do {
        printf("\n");
        printf("1.Nhap vao chuoi\n");
        printf("2.In ra chuoi dao nguoc\n");
        printf("3.Dem so luong  tu trong chuoi\n");
        printf("4.Nhap vao chuoi khac so sanh voi chuoi ban dau\n");
        printf("5.In hoa tat ca chu trong chuoi\n");
        printf("6.Nhap vao chguoi khac them vao choi ban dau\n");
        printf("Enter your choice");
        scanf("%d", &menu);
        getchar();
        switch (menu) {
            case 1:
                printf("Nhap vao chuoi: ");
                fgets(arr, 100, stdin);
                arr[strcspn(arr, "\n")] = '\0';
                break;
            case 2:
                printf("In ra chuoi dao nguoc:\n ");
                for(int i = strlen(arr); i >= 0; i--) {
                    printf("%c", arr[i]);
                }
                break;

            case 3:
                printf("In ra chuoi dao nguoc:\n ");
            for(int i = strlen(arr); i >= 0; i--) {
                if(islower(arr[i]) || isupper(arr[i])) {
                    index++;
                }
            }
                printf("Sophan tu trong chuoi la: %d", index);
                break;
            case 4:
                printf("Nhap vao chuoi thu 2: ");
                fgets(arr2, 100, stdin);
                if(strlen(arr2) > strlen(arr)) {
                    printf("chuoi thu 2 lon hon chuoi ban dau");
                } else if(strlen(arr2) < strlen(arr)) {
                    printf("Chuoi ban dau lon hon: ");
                }else {
                    printf("2 chuoi bang nhau");
                }
            printf("\n");
                break;
            case 5:
                for(int i = 0; i < strlen(arr); i++) {
                  arr[i] = toupper(arr[i]);
                  printf("%c", arr[i]);
                }
                break;
            case 6:
                printf("Nhap vao chuoi thu 2: ");
                fgets(arr2, 100, stdin);
                arr2[strcspn(arr2, "\n")] = '\0';
                strcat(arr, arr2);
                printf("%s ", arr);

                break;
        }
    }while (menu != 7);
}


