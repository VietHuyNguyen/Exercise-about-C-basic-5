#include <stdio.h>
#include <stdlib.h>

float Tinh(float tien, int check);
void Ktra(int *check);
void Nap(float *tien);
int main()
{
    int check;
    float tien, PhiDV;
    Nap(&tien);
    Ktra(&check);
    printf("So du tai khoan=%.2f\n", tien);
    printf("So lan check=%d/thang\n", check);
    PhiDV=Tinh(tien, check);
    printf("Tong phi dich vu trong 1 thang=%f\n", PhiDV);
    return 0;
}
void Nap(float *tien)
{
    do
    {
        printf("Nhap so tien trong tai khoan\n");
        scanf("%f", &*tien);
        if(*tien<0)
            printf("So du dang am, vui long nap them\n");
    }while(*tien<0);
}
void Ktra(int *check)
{
    do{
        printf("Nhap so lan check trong 1 thang\n");
        scanf("%d", &*check);
        if(*check<0)
            printf("Vui long nhap dung so lan check\n");
    }while(*check<0);
}
float Tinh(float tien, int check)
{
    float PhiDV;
    if(tien>=400)
    {
        if(check<20)
            PhiDV=(check*0.1)+10;
        else if(check>=20 && check<=39)
            PhiDV=(check*0.08)+10;
        else if(check>=40 && check <=50)
            PhiDV=(check*0.05)+10;
        else
            PhiDV=(check*0.04)+10;
    }
    else
    {
         if(check<20)
            PhiDV=(check*0.1)+15;
        else if(check>=20 && check<=39)
            PhiDV=(check*0.08)+15;
        else if(check>=40 && check <=50)
            PhiDV=(check*0.05)+15;
        else
            PhiDV=(check*0.04)+15;
    }
    return PhiDV;
}
