By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int sayi)
{
    float x;
    int i=3;
    if(sayi==2 || sayi==3 || sayi==5 || sayi==7)
       return 1;
    else if(sayi%2==0)
        return 0;
    else
    {
        x=sqrt(sayi);
        while(i<=x)
            {
               if(sayi%i==0)
                return 0;
               i+=2;
            }
            return 1;
    }
}
int main()
{
    int k=0,p=1;
    while(k<10001)
    {
      p++;
      if(prime(p)==1)
        k++;
    }
    printf("10001st Prime :%d",p);
    return 0;


}

