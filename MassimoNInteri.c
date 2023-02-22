#include <stdio.h>

/* Programma che chiede all'utente di inserire un intero positivo n 
 * e poi n interi di cui l'applicazione stampa il massimo. */

int main() {
	int n;         /* numero di interi da leggere */ 
	int numero;       /* un intero da leggere*/
	int massimo;       /* massimo corrente */
	
	/* QUANTI INTERI? */
	printf("Quanti interi vuoi introdurre?\n");
	scanf("%d" , &n);
	
	if(n<=0)
		   printf("Peggio per te, ero un programma niente male!");
	else {
		   /* leggi il primo intero e memorizzalo in massimo */
		   printf("Introduci un intero, please.\n");
		   scanf("%d", &massimo);
		   
		   /* leggi i successivi n-1 numeri e confrontali con il massimo corrente */
		   for(int i=1;i<=n-1;i++) {
			   /* INPUT */
			   printf("Introduci un intero, please.\n");
			   scanf("%d", &numero);
			   
			   if(numero>massimo)
					  massimo = numero;
					  
		   }
		   
		   /* OUTPUT */
		   printf("\nIl massimo fra i numeri introdotti %c %d.\n", 138, massimo);
	
	}
	
}
