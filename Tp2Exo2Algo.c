#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Tab { 	// Type structuré de Tab ( qui contient = {x.n = nombre de valeurs})

	int* tab; 	// Tableau dynamique 

	int n; 		//Nombre de valeurs
};


int main (int argc, char* argv[] ) 
{

	struct Tab tableau1; 							 // Affectation de la structure Tab à tableau 1
	struct Tab tableau2; 							 // Affectation de la structure Tab à tableau 2

	printf("Veuillez entrer le nombre de valeurs de votre tableau ");

	scanf("%d",&tableau1.n); 					 	 // On scan la valeur n de tableau de la structure Tab soit : n.tableau

	printf("\n Tableau de base : \n\n");

	srand(time(NULL)); 							 	 // Obligation de srand(time(NULL)) pour ne pas affecter deux fois la même valeur (pour que ce soit réelement un random)

  	tableau1.tab = malloc(tableau1.n * sizeof(int)); // malloc de tableau.tab qui lui ai affecté tableau.n valeurs 

  	tableau2.tab = malloc(sizeof(int));

	for (int i = 0; i <=  tableau1.n - 1 ; i++) 	 // Pour pouvoir affecter n valeurs dans le tableau dynamique tableau.tab[]
	{
		tableau1.tab[i] = rand()%100+1; 			 // Pour affecter à tableau de structure Tab un random entre 0 et 100 si il y a rand()%100 c'est entre 0 et 99

 		printf("%d\n",tableau1.tab[i]);				 

	}

	tableau2.n = 0;									 // Initialisation du n de la strcture de tableau2 à 0

	int nombre_de_valeur_tab2 = 0;					 // Initilisation de la variable nombre_de_valeur_tab2 qui indique le nombre de valeurs du tableau 2 à 0

	for (int i = 0; i <= tableau1.n; i++)			 // Dans cette boucle nous allons parcourir l'ensemble des valeurs de tableau1.tab
	{
		if (tableau1.tab[i]%7 == 0 )				 // Si la valeur tableau1.tab[i] est divisible par 7 alors :
		{	
			tableau2.tab[tableau2.n] = tableau1.tab[i]; // La valeur est ajouté à un nouveau tableau2.tab

			tableau2.n++;							 // La valeur du compteur de tableau2.n est incrémenté de un 

			nombre_de_valeur_tab2++;				 // La valeur du nombre_de_valeur de tab2 est incrémenté de un car on y a ajouté une valeur
			
			int compteur_tableau1 = i;				 // La valeur de compteur_tableau1 prend la valeur i

			while(compteur_tableau1 < tableau1.n )	 // Tant que le compteur du tableau 1 n'est pas arrivé au bout du tableau1 (valeur tableau1.n)
			{

				tableau1.tab[compteur_tableau1] = tableau1.tab[compteur_tableau1 + 1]; // La valeur courante prend la valeur d'aprés

				compteur_tableau1++;				 // Le compteur du tableau est incrémenté afin de pourvoir arriver jusqu'à tableau1.n

			}

			tableau1.n--; 							// On à retirer une valeur du tableau1 donc nous décrementons tableau1.n pour ne pas déborder
		} 
	}	

	printf("\n Voici le tableau 1 : \n\n");

	for (int i = 0; i <=  tableau1.n - 1 ; i++) 	// Pour pouvoir affecter n valeurs dans le tableau dynamique tableau.tab[]
	{

		printf("%d\n",tableau1.tab[i]);

	}


	if (nombre_de_valeur_tab2 != 0) 
	{

		printf("\n Voici le tableau 2 : \n\n");

		for (int i = 0; i <=  nombre_de_valeur_tab2 -1 ; i++) 		 // Pour pouvoir affecter n valeurs dans le tableau dynamique tableau.tab[]
		{
								
 			printf("%d\n",tableau2.tab[i]);
 		

		}
	}


free(tableau1.tab); 							 //Libération de la mémoire pour tableau1.tab qui est un tableau dynamique 
free(tableau2.tab);								 //Libération de la mémoire pour tableau2.tab qui est un tableau dynamique 


return 0;

}