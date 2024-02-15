#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define d 8
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
    int l[d], k[d]; 
    char j[d];
    i=0;
    do
    {
        printf("Inserisci numero: ");
        scanf("%d", &m);
        if ((m<256)&&(m>0))
        {
            n=m;
            for (i = 0; i < 8; i++)
            {
                l[i]=BINARIO(n);
                n=n/2;
            }
            for (i = 7; i >= 0; i--)
            {
                printf("%d", l[i]);
            }
            printf(" - ");
            n=m;
            for (i = 0; i < 3; i++)
            {
                k[i]=OTTALE(n);
                n=n/8;
            }
            for (i = 3; i >= 0; i--)
            {
                printf("%d", k[i]);
            }
            printf(" - ");
            n=m;
            for (i = 0; i < 2; i++)
            {
                j[i]=ESADECIMALE(n);
                n=n/16;
            }
            for (i = 2; i >= 0; i--)
            {
                switch (j[i])
                {
                case 'A':
                printf("%c", j[i]);
                    break;
                case 'B':
                printf("%c", j[i]);
                    break;
                case 'C':
                printf("%c", j[i]);
                    break;
                case 'D':
                printf("%c", j[i]);
                    break;
                case 'E':
                printf("%c", j[i]);
                    break;
                case 'F':
                printf("%c", j[i]);
                    break;
                default:
                printf("%d", j[i]);
                    break;
                }
            }
            printf("\n");
        }
    } while ((m!=0));
}

float BINARIO(int a)
{
    if(a%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

float OTTALE(int b)
{
    b = b%8;
    return b;
}

float ESADECIMALE(int c)
{
    c = c%16;
    switch (c)
    {
    case 10:
    return 'A';
        break;
    case 11:
    return 'B';
        break;
    case 12:
    return 'C';
        break;
    case 13:
    return 'D';
        break;
    case 14:
    return 'E';
        break;
    case 15:
    return 'F';
        break;
    default:
    return c;
        break;
    }
}