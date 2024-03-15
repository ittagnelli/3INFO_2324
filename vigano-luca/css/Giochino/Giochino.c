//Luca Viganò, 3INFO, venerdì 15 Marzo 2024, 12:00-13:50//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int stanzeTotali = 10; //dichiare quante stanza ho
int stanzeOccupate = 0; //dichiaro quante stanze sono occupate all'inizio del codice
int cassa = 0; //quanti soldi ho all'inizio
int upgrades = 1;
int minsoldi = 50;
int azioni = 10;

int occupaStanza();//aumenta di uno le stanze occupate
int liberaStanza(int notti);//aumenta i soldi e diminuisce di uno le stanze occupate
void stampaDati();
int upgrade(int soldi);

int main()
{  
    int n, d, s;//dichiaro il numero di scelta delle opzioni del menù e i giorni passati nel albergo
    do
    {
        printf("Scegli un numero tra 1-5 per scegliere un opzione: ");
        scanf("%d", &n);
        printf("\n");
        switch (n)//menù
        {
        case 1://per occupare una stanza            
            if(occupaStanza()==1)
            {
                printf("Ci sono stanze libere\n");//l'operazione ha avuto successo
                stanzeOccupate = stanzeOccupate + 1;
            }
            else
            {
                printf("Stanze piene\n");//l'operazione non ha avuto successo
            }
            break;
        case 2://per far liberare una stanza
            printf("quanti notti è stato? ");
            scanf("%d", &d);
            printf("\n");
            if(liberaStanza(d)==1)
            {
                printf("Hai ricevuto %d soldi\n", d*50);//l'operazione ha avuto successo
            }
            else
            {
                printf("Stanze vuote oppure numero di notti non disponibile\n");//l'operazione non ha avuto successo
            }
            break;
        case 3:
            stampaDati();
            break;
        case 4:
            printf("Quanti soldi vuoi dare per aggiornare l'hotel? (hai bisogno di %d soldi)", minsoldi);
            scanf("%d", &s);
            if(upgrade(s)==1)
            {
                printf("upgrade fatto hai una stanza in più\n");
            }
            else
            {
                printf("i soldi non sono abbastanza\n");
            }
            break;
        case 5:
            printf("Sei uscito dal programma");
            break;
        default:
            printf("errore");
            break;
        } while (azioni!=0);
}

int occupaStanza()
{
    if (stanzeOccupate!=stanzeTotali)//controllo per vedere se le stanze sono occupate o no
    {
        return 1;//ci sono posti liberi
    }
    else
    {
        return 0;//non ci sono posti liberi
    }
}

int liberaStanza(int notti)
{
    if(stanzeOccupate!=0&&notti!=0)//controllo per vedere se c'è qualcuno oppure no
    {
        stanzeOccupate = stanzeOccupate - 1;//liberiamo una stanza
        cassa = 50 * notti + cassa;//calcolo dei soldi
        return 1;//Tutto è andato bene
    }
    else
    {
        return 0;//qualcosa è andato storto
    }
}
int azioni = 10;
void stampaDati()
{
    printf("Hai %d soldi\n", cassa);
    printf("Hai %d stanze occupate\n", stanzeOccupate);
    printf("Stanze massime %d\n", stanzeTotali);
    printf("Soldi minimi per il prossimo upgrade %d\n", minsoldi);
}

int upgrade(int soldi)
{
    if(soldi>=minsoldi&&soldi<=cassa)
    {
        stanzeTotali=stanzeTotali+1;
        cassa = cassa - minsoldi;
        upgrades = upgrades + 1;
        minsoldi = upgrades * 50;
        return 1;
    }
    else
    {
        return 0;
    }
}