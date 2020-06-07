#include <stdio.h>
#include <stdbool.h>
// chữ đệ là chữ em
// quay về lấy kết quả thèn nhỏ giải quyết thèn lớn. Và ngược lại điêu kiện dừng.
// phương pháp qui hoạch động là phương pháp chia để trị.
// gặp những điều không mong muốn thì quay đầu lại.
// kết hợp phục hồi dữ liệu thì gọi là đệ qui quay lui.
// Thuc hanh de qui quay lui write 3 number make from 4 number;
//union find
// javascript
// tinh tong n phan tu trong mang bằng đệ qui
int arraymain[100];
int numbers;
int n = 0;
void inputArray()
{
    printf("Vui long nhap so phan tu: ");
    scanf_s("%d", &numbers);
    for (int i = 0; i < numbers; i++)
    {
        printf("Nhap phan tu thu %d :", i);
        scanf_s("%d", &arraymain[i]);
    }
    printf("Phan tu vua nhap la :\r\n");
    for (int i = 0; i < numbers; i++)
    {
        printf("%d  ", arraymain[i]);
    }
}
int sumArray(int array[], int numbers)
{
   
    printf("\n %d ", numbers);
    if (numbers == 0)
    {
        return arraymain[numbers];
    }
    else
    {
        return  arraymain[numbers] + sumArray(arraymain, numbers - 1);
    }
}
void main()
{
  ///function input;
    inputArray();
    printf("\n Tong la : %d", sumArray(arraymain, numbers-1));
    /// function dequi from array;

}