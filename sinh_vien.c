#include <stdio.h>
#include <stdlib.h>

typedef struct sinh_vien
{
    char MSSV[4];
    char hoten[20];
    float toan;
    float ly;
    float hoa;
}sinh_vien;

void nhap(sinh_vien sv);
void xuat(sinh_vien sv);
int main()
{
    sinh_vien sv;
    nhap(sv);
}

void nhap(sinh_vien sv)
{
    printf("\nNhap MSSV ");
    fgets(sv.MSSV, sizeof(sv.MSSV), stdin);
    printf("\nNhap ho va ten: ");
    fflush(stdin);
    gets(sv.hoten);
    printf("nhap toan ");
    fflush(stdin);
    scanf("%f", &sv.toan);
    printf("nhap ly ");
    scanf("%f", &sv.ly);
    printf("nhap hoa ");
    scanf("%f", &sv.hoa);
    xuat(sv);
}
void xuat(sinh_vien sv)
{
    puts(sv.MSSV);
    puts(sv.hoten);
    printf("Toan: %.2f Ly: %.2f Hoa: %.2f", sv.toan, sv.ly, sv.hoa);
}

