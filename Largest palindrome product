A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include <stdlib.h>
/* Sayıyı tersden yazdıran fonksiyon*/
int donustur(int x)
{
    int kalan=0,sonuc=0;
    while(x>0)
    {
        kalan=x%10;
        sonuc=sonuc*10+kalan;
        x/=10;
    }
    return sonuc;
}

int main()
{
    int j=999,i=999,k;
    {

        while(i>0)
        {
            k=i*j;
            while(k==donustur(k))
            {
                printf("%d Max Digit number :",k);
                printf(" i:%d j:%d k: %d\n",i,j,k);
                return 0;
            }
            i=i-1;
        }

    }



}
