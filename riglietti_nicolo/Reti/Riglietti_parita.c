#include <stdio.h>
#include<string.h>
#define l 50

int main(void) 
{
 char v[l];
 int p;

 printf("inserisci una sequenza di bit: ");
 scanf("%s", v);

int lunghezza = strlen(v);

for(int i = 0; i < lunghezza; i++)
{
    if(v[i] == '1')
    {
        p++;
    }
}

if(p%2==0)
{
    printf("la sequenza con il bit di parita pari 0 e': %s0 \n ", v);
    printf("la sequenza con il bit di parita dispari 1 e': %s1 ", v);
}
else
{
    printf("la sequenza con il bit di parita pari 1 e': %s1 \n ", v);
    printf("la sequenza con il bit di parita dispari 0 e': %s0 ", v);
}

    return 0;
}