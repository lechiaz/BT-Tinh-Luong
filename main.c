#include <stdio.h>


int luongThuong(int soNamKN, int soNamCH)
{
    int luong, thuong;
    if (soNamKN <= 2)
    {
        luong = 10000000;
        if (soNamCH <= 1) {
            thuong = (luong / 100 * 30);
        } else if (soNamCH > 1 & soNamCH < 2) {
            thuong = (luong / 100 * 50);
        } else if (soNamCH > 2 & soNamCH < 5) {
            thuong = (luong / 100 * 100);
        } else if (soNamCH > 5) {
            thuong = (luong / 100 * 200);
        }
    }
    if (soNamKN > 2 & soNamKN < 5)
    {
        luong = 20000000;
        if (soNamCH < 1) {
            thuong = (luong / 100 * 30);
        } else if (soNamCH > 1 & soNamCH < 2) {
            thuong = (luong / 100 * 50);
        } else if (soNamCH > 2 & soNamCH < 5) {
            thuong = (luong / 100 * 100);
        } else if (soNamCH > 5) {
            thuong = (luong / 100 * 200);
        }
    }
    if (soNamKN > 5)
    {
        luong = 30000000;
        if (soNamCH < 1) {
            thuong = (luong / 100 * 30);
        } else if (soNamCH > 1 & soNamCH < 2) {
            thuong = (luong / 100 * 50);
        } else if (soNamCH > 2 & soNamCH < 5) {
            thuong = (luong / 100 * 100);
        } else if (soNamCH > 5) {
            thuong = (luong / 100 * 200);
        }
    }

    return (int)thuong;
}

int main() {
    int soNamKN1, soNamCH1;

    printf("Nhap vao so nam lam viec cho cong ty \n");
    printf("so nam kinh nghiem \n");
    scanf("%d", &soNamKN1);
    printf("so nam cong hien \n");
    scanf("%d", &soNamCH1);
    printf("tong thuong: %d", luongThuong(soNamKN1,soNamCH1));
    return 0;
}
