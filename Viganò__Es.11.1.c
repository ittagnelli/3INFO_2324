#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define d 10
float LEGGERE(void);
float BINARIO(int a);
float OTTALE(int b);
float ESADECIMALE(int c);

int main(void)
{
    LEGGERE();
}

float LEGGERE(void)
{
    int m, i, n;
    i=0;
    do
    {
        printf("Inserisci numero: ");
        scanf("%d", &m);
        if ((m>=256)&&(m<0))
        {
            while ((m>=256)&&(m<0))
            {
                printf("Inserisci numero: ");
                scanf("%d", &m);
            }
            n=m;
            for (i = 8; i >= 0; i--)
            {
                printf("%d", BINARIO(n));
                n=BINARIO(n);
            }
            printf("%d", OTTALE(m));
            printf("%d", ESADECIMALE(m));
        }
        if(m!=0)
        {
            n=m;
           for (i = 8; i >= 0; i--)
            {
                printf("%d", BINARIO(n));
                n=BINARIO(n);
            }
            printf("%d", OTTALE(m));
            printf("%d", ESADECIMALE(m));
        }
    } while ((m!=0));
}

float BINARIO(a)
{
    
}

float OTTALE(b)
{

}

float ESADECIMALE(c)
{
    
}