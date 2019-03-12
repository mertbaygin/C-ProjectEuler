The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int sayi)
{
    int x;
    int i=3;
    if(sayi<2)
        return 0;
    else if(sayi%2==0 && sayi!=2)
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
    int top=0,i=2;
    while(i<2000000)
    {
        if(prime(i)==1)
            top+=i;
        i++;
    }
    printf("top :%d",top);


}
