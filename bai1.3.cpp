#include <stdio.h>
#include <conio.h>
struct Diem
{
    float x;
    float y;

}
typedef struct diem DIEM;
void NhapDiem(DIEM &);
void XuatDiem(DIEM );
struct DuongTron
{
    DIEM I;
    DIEM R;
}
typedef struct duongtron DUONGTRON;
void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON &);
void NhapDiem(DIEM &);
{
    float Temp;
    printf("\nNhap x:");
    scanf("%f",&temp);
    d.x = temp;
    printf("\nNhap y");
    scanf("%f"&temp);
    d.y = temp;
}
void XuatDiem(DIEM d)
{
    printf("(%8.3f,%8.3f)",d.x,d.y);
}
void NhapDuongTron(DUONGTRON &dt)
{
    float temp;
    NhapDiem(dt.l);
    printf("\nNhap ban kinh:");
    scanf("%f",temp);
    dt.R = temp;

}
void XuatDuongTron(DUONGTRON dt)
{
    printf("((%8.3f,%8.3f),%8.3f)",dt.l.x,dt.l.y,dt.R);
}
    int main()
    {
        DIEM d;
        DUONGTRON dt;
        NhapDuongTron(dt);
        XuatDuongTron(dt);
        getch();
        return 0;
    }
