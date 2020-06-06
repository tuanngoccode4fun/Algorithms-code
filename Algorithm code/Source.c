#include <stdio.h>
#include <stdbool.h>
// chữ đệ là chữ em
// quay về lấy kết quả thèn nhỏ giải quyết thèn lớn. Và ngược lại điêu kiện dừng.
// phương pháp qui hoạch động là phương pháp chia để trị.
// gặp những điều không mong muốn thì quay đầu lại.
// kết hợp phục hồi dữ liệu thì gọi là đệ qui quay lui.
// Thuc hanh de qui quay lui write 3 number make from 4 number;
int arraymain[4];
int arraytemp[3];
void input()
{
	printf("Vui long nhap so vao:\r\n");
	for (int i = 0; i < 4; i++)
	{
	scanf_s	("%d", &arraymain[i]);
	}

}
bool IsExist(int value,int m)
{
	for (int i = 0; i < m; i++)
	{
		if (arraytemp[i] == value)
		{
			return true;
		}
	}
	return false;
}
void show(int n)
{
	for (int i = 0; i < 4; i++)
	{
		if (!IsExist(arraymain[i], n))
		{
			arraytemp[n] = arraymain[i];

			if (n == 2)
			{
				for (int k = 0; k < 3; k++)
				{
					printf("%d", arraytemp[k]);
				}
				printf("\n");
			}
			else
			{
				show(n + 1);
			}
		}
	}

}

void main()
{
	input();
	show(0);
}