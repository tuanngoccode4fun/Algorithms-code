#include <stdio.h>
struct  giadinh
{
    int i;
    int tuoi;
    int noichon;
};

void main()
{
    struct giadinh gd;
    gd.i = 0;
    gd.tuoi = 28;
    gd.noichon = 200;
    printf_s("gia tri soluong = %d, tuoi = %d,noichon= %d", gd.i, gd.tuoi, gd.noichon);
}