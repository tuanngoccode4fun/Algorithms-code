#include <stdio.h>
// chữ đệ là chữ em
// quay về lấy kết quả thèn nhỏ giải quyết thèn lớn. Và ngược lại điêu kiện dừng.
// phương pháp qui hoạch động là phương pháp chia để trị.
// gặp những điều không mong muốn thì quay đầu lại.
// kết hợp phục hồi dữ liệu thì gọi là đệ qui quay lui.
TowerHaNoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%c - %c \r\n", A, B);
    }
    else
    {
        TowerHaNoi(n - 1, A, C, B);
        TowerHaNoi(1, A, B,C);
        TowerHaNoi(n - 1, C, B, A);
    }
}
void main()
{
    TowerHaNoi(10, 'a', 'b', 'c');
}