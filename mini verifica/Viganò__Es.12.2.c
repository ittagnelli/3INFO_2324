#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


#define d 50

int MEDIA();
int MAX();
int MIN();
int REGEN();
int MEDIAU();
void EXIT();

int n[d];
int e[8];




int main()
{
    int c=0;
    int m, i, ist, ris;
    int tot[8];
    srand(time(NULL));
    for (i = 0; i < d; i++)
    {
        n[i]=(rand()%100)+1;
    }
    do
    {
        ris = 0;
        printf("inserire numero: ");
        scanf("%d", &ist);
        switch (ist)
        {
        case 1:
            ris = MEDIA();
            printf("%d\n", ris);
            break;
        case 2:
            ris = MAX();
            printf("%d\n", ris);
            break;
        case 3:
            ris = MIN();
            printf("%d\n", ris);
            break;
        case 4:
            REGEN();
            printf("array regenerato\n");
            break;
        case 5:
            MEDIAU();
            for (i = 0; i < 7; i++)
            {
                printf("%d ", e[i]);
            }
        case 6:
            EXIT();
            break;
        }
    }while (ist!=6);
}
int MEDIA()
{
    int tot=0, i, m;
    tot = 0;
    m = 0;
    for (i = 0; i < d; i++)
    {
        tot=tot+n[i];
        m=tot/d;
        return m;
    } 
}

int MAX()
{
    int max = 0, j, i;
    max = 0;
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < d; j++)
        {
            if((j!=i)&&(n[i]>n[j]))
            {
                if(n[i]>max)
                {
                    max = n[i];
                }
            }
        }
    }
    return max;
}

int MIN()
{
    int min, j, i;
    min = 0;
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < d; j++)
        {
            if((j!=i)&&(n[i]<n[j]))
            {
                if(n[i]<min)
                {
                    min = n[i];
                }
            }
        }
    }
    return min;
}

int REGEN()
{
    int i;
    srand(time(NULL));
    for (i = 0; i < d; i++)
    {
        n[i]=(rand()%100)+1;
    }
    printf("\n");
    return 0;
}

int MEDIAU()
{
    int tot=0, i, m, t, c=0;
    for (i = 0; i < d; i++)
    {
        tot=tot+n[i];
        m=tot/d;
    }
    for (i = 4; i > 0; i--)
    {
        c=c+1;
        e[c] = m - i;
    }
    for (i = 0; i < 5; i++)
    {
        c=c+1;
        e[c] = m + i;
    }
    return 0;
}

void EXIT()
{
    printf("Uscita dal programma");
}