
#include <stdio.h>
#include <ctype.h>

void menu();
void moltiplica();
void dividi();
void ins_string();


int main()
{
	char scelta = {'\0'};
	menu();
	scanf (" %c",&scelta);
while(toupper(scelta)<'A' || toupper(scelta)>'C'){
printf("Input Errato! Riprova ->");
                scanf(" %c",&scelta);
        }

	switch (toupper(scelta))
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
	}

return 0;

}


void menu()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica()
{
        int  a=0,b=0,c1=0,c2=0;
	printf ("Inserisci i due numeri da moltiplicare:");
        c1=scanf ("%d",&a);
        c2=scanf ("%d",&b);
        if(c1==0 || c2==0)
           printf("Errore input!"); 
        else{
           int prodotto = a * b;
           printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
        }
}


void dividi()
{
        int  a=0,b=0,c1=0,c2=0;
        printf ("Inserisci il numeratore:");
       c1= scanf ("%d", &a);
       if(c1==0){
          printf("Errore input!");
           return;
         }else{
	  printf("Inserisci il denumeratore:");
          c2=scanf ("%d", &b);
        if(c2==0 || b<1){
           printf("Errore input!");
          return;
        }else{
        float divisione=(float)a /(float) b;
        printf ("La divisione tra %d e %d e': %f", a,b,divisione);
        }
       }
}





void ins_string() 
{
	char stringa[26];
        printf("Inserisci la stringa (max 26 caratteri): ");
        scanf(" %25[^\n]",&stringa);
        printf("Stringa Inserita: %s",stringa);

}

