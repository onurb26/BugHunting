#include <stdio.h>
#include <ctype.h>

void menu();
void moltiplica();
void dividi();
void ins_string();
 
//Corpo principale del programma
int main()
{
	char scelta;
do{                                                //il ciclo  do fa si che l'utente possa continuare ad usare il    
	menu();                                    //programma finchè non decide di terminare.
	scanf(" %c",&scelta);
while(toupper(scelta)<'A' || toupper(scelta)>'D'){ //toupper è una funzione che rende maiuscolo  un carattere char 
printf("Input Errato! Riprova ->");                //in questo caso viene utilizzato per far si che se anche l' utente 
                scanf(" %c",&scelta);              //inserisce una lettera minuscola, viene convertita
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
                case 'D':
                break;
	}
}while(toupper(scelta)!='D');
return 0;

}


void menu()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nD >> Esci dal programma\n");

}


void moltiplica()
{
        int  a=0,b=0,c1=0,c2=0;
	printf ("Inserisci i due numeri da moltiplicare:");    
        c1=scanf ("%d",&a);
        c2=scanf ("%d",&b);
        if(c1==0 || c2==0)                   //controlla che l'untente solo numeri 
           printf("Errore input!"); 
        else{
           int prodotto = a * b;
           printf ("Il prodotto tra %d e %d e': %d\n", a,b,prodotto);
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
        if(c2==0 || b<1){              //Controlla che l'input sia un numero e denominatore sia >0         
           printf("Errore input!");
          return;
        }else{
        float divisione=(float)a /(float) b;
        printf ("La divisione tra %d e %d e': %f\n", a,b,divisione);
        }
       }
}





void ins_string() 
{
	char stringa[10];
        printf("Inserisci la stringa (max 9 caratteri): ");
        scanf(" %9[^\n]",&stringa);      //Inserisce nella variabile stringa  fino a 9 caratteri, inclusi spazi 
        printf("Stringa Inserita: %s",stringa);

}

