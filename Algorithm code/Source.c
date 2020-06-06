#include <stdio.h>
// chữ đệ là chữ em
// quay về lấy kết quả thèn nhỏ giải quyết thèn lớn. Và ngược lại điêu kiện dừng.
// phương pháp qui hoạch động là phương pháp chia để trị.
// gặp những điều không mong muốn thì quay đầu lại.
// kết hợp phục hồi dữ liệu thì gọi là đệ qui quay lui.
int  fibo(int n)
{
    printf("%d  ", n);
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        fibo(n - 1) + fibo(n - 2);
    }

}
void main()
{
    fibo(10);
}