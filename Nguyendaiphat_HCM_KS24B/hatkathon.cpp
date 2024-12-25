#include <stdio.h>
#include <iostream>

int show_menu();

int main()
{
    int n = 0;
    int arr[100];
    int repair_index, location;
    int hollow = -1;
    int sum = 0;
    int star = 0;
    int end, x, mid;
    int count = 0;
    while(true)
    {
        int chose = show_menu();
        system("cls");
        switch(chose)
        {
            case 1:
                printf("Nhap vao so luong mang: ");
                scanf("%d", &n);
                printf("Nhap mang: \n");
                for(int i = 0; i < n; i++)
                {
                    printf("Nhap phan tu thu arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                if(n == 0)
                {
                    printf("Mang chua duoc khoi tao\n");
                    break;
                }
                printf("Mang hien tai la\n");
                for(int i = 0; i < n; i++)
                {
                    printf("Phan tu thu arr[%d]: %d\n", i, arr[i]);
                }
                break;
            case 3:
                if(n == 0)
                {
                    printf("Mang chua duoc khoi tao\n");
                    break;
                }
                printf("Dem so luong so hoan hao trong mang: ");
                
                for(int i = 0; i < n; i++)
                {
                    int sum = 0;
                    for(int j = 1; j < arr[i]; j++)
                    {
                        if(arr[i] % j == 0)
                        {
                            sum += j;
                        }
                    }
                    if(sum == arr[i])
                    {
                        count++;
                    }
                }
                printf("%d\n", count);
                break;
            case 4:
                //
                break;
            case 5:
                if(n == 0)
                {
                    printf("Mang chua duoc khoi tao\n");
                    break;
                }
                printf("Mang hien tai la: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                
                int add_index, x;
                printf("Nhap vao gia tri ban muon them vao: ");
                scanf("%d", &x);
                printf("Nhap vao vi tri muon them vao(Luu y: mang duoc tinh tu vi tri 0): ");
                scanf("%d", &add_index);
                
                if (add_index < 0 || add_index > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                
                for(int i = n; i > add_index; i--)
                {
                    arr[i] = arr[i-1];
                }
                arr[add_index] = x;
                ++n;
                break;
            case 6:
                if(n == 0)
                {
                    printf("Mang chua duoc khoi tao\n");
                    break;
                }
                printf("Mang hien tai la: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                
                int deleted_index;
                printf("Nhap vao vi tri muon xoa(Luu y: mang duoc tinh tu vi tri 0): ");
                scanf("%d", &deleted_index);
                
                if (deleted_index < 0 || deleted_index >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                
                hollow = arr[deleted_index];
                
                for(int i = deleted_index; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                --n;
                break;
            case 7:
                for(int i = 1; i < n; i++)
                {
                    int key = arr[i];
                    int j = i - 1;
                    while(j >= 0 && key < arr[j])
                    {
                        arr[j + 1] = arr[j];
                        j--; 
                    }
                    arr[j + 1] = key;
                }
                
                printf("Mang duoc sap xep theo thu tu tang dan: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                
                break;
            case 8:
                for(int i = n - 1; i > 0; i--)
                {
                    for(int j = 0; j < i; j++)
                    {
                        if(arr[j] > arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                
                printf("Mang da duoc sap xep lai\n");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                
                end = n - 1;
                printf("\n");
                printf("Nhap x can tim kiem: ");
                scanf("%d", &x);
                
                while(star <= end)
                {
                    mid = (star + end) / 2;
                    
                    if(arr[mid] == x)
                    {
                        printf("Vi tri %d\n", mid);
                        break;
                    }
                    else if(x > arr[mid])
                    {
                        star = mid + 1;
                    }
                    else
                    {
                        end = mid - 1;
                    }
                }
                
                if(star > end) {
                    printf("Khong tim thay x trong mang\n");
                }
                
                break;
            case 9:
                printf("So chan trong mang: ");
                for(int i = 0; i < n; i++)
                {
                    if(arr[i] % 2 == 0)
                    {
                        printf("%d ", arr[i]);
                    }
                }
                printf("\n");
                printf("So le trong mang: ");
                for(int i = 0; i < n; i++)
                {
                    if(arr[i] % 2 != 0)
                    {
                        printf("%d ", arr[i]);
                    }
                }
                
                break;
            case 10:
                printf("Mang truoc khi duoc dao nguoc: ");
                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                
                printf("\nMang sau khi duoc dao nguoc: ");
                for(int i = n - 1; i >= 0; i--)
                {
                    printf("%d ", arr[i]);
                }
                
                break;
            case 11:
                printf("Thoat chuong trinh, bai bai ban\n");
                return 1;
            default:
                printf("Du lieu khong hop le!!!\n");
        }
        int is_continue = 1;
        printf("\nBan co muon tiep tuc khong?(1/0)\n");
        scanf("%d", &is_continue);
        system("cls");
        if(is_continue == 0)
        {
            printf("Chuong trinh ket thuc, hen gap lai ban\n");
            break;
        }
    }
    
    return 0;
}

int show_menu()
{
    int chose;
    printf("            MENU            \n");
    printf("\n");
    printf("1. Nhap so phan tu va gia tri cho mang\n");
    printf("2. In ra gia tri cac phan tu trong mang\n");
    printf("3. Dem so luong so hoan hao co trong mang\n");
    printf("4. Tim gia tri lon thu 2 trong mang\n");
    printf("5. Them mot phan tu ngau nhien trong mang\n");
    printf("6. Xoa phan tu tai mot vi tri cu the\n");
    printf("7. Sap xep mang theo thu tu tang dan\n");
    printf("8. Tim kiem phan tu trong mang\n");
    printf("9. Hien thi phan tu chan va le\n");
    printf("10. Dao nguoc thu tu cac phan tu trong mang\n");
    printf("11. Thoat\n");
    printf("\n");
    printf("Lua chon cua ban la: ");
    scanf("%d", &chose);
    
    return chose;
}
