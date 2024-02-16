#include <stdio.h>
#include <string.h>

#define d 50

float PARI(int x);
float DISPARI(int x);
float SUCCESIVO(int x);
float LUNGHEZZA(int t);


int c=0;

int main()
{
    int n[d], m, i;
    printf("inserire numero: ");
    scanf("%d", &n[c]);
    do
    {
        if(n[c]%2==0)
        {
            n=PARI(n);
        }
        else
        {
            n=DISPARI(n);
        }
    } while (n!=1);
    LUNGHEZZA(c)
}
float PARI(int x)
{
    c=c+1
    return x%2;
}

float DISPARI(int x)
{
    c=c+1
    return (x*3)-1;
}

float LUNGHEZZA(int x)
{
    for (i = 0; i < c+1; i++)
    {
        printf("%d\t", n[i]);
        printf(" - lunghezza %d", c);
    }
    
}