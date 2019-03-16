#include <stdio.h>
#include <stdlib.h>
#include "time.h"
int main()
{
    int sayi,tahmin,x;
    a:
    srand(time(NULL));

    sayi=rand()%35;
    printf("Tahmininiz : ");
    scanf("%d",&tahmin);
    while(sayi!=tahmin)
    {
        if(sayi<tahmin)
            printf("Daha kucuk sayi gir : ");
        else
            printf("Daha buyuk sayi gir : ");
        scanf("%d",&tahmin);
    }
    printf("Tebrikler Bildiniz\n");
    printf("Devam [1] Cikis [-1] \n");
    scanf("%d",&x);
    if(x==1)
        goto a;
    else
        exit:
    return 0;
}
