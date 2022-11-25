#include <stdio.h> // Input Output
#include <stdlib.h> // Standard library


int main(int argc,char* argv[]) 
{
	
	int tab[5]; // Initialisation du premier tableau de 5 éléments 

	int n; // compteur double utilisation 

	int *newt; // initialisation du tableau nouveau, newt

	int NombreIt; // nombre d'itération choisis par l'utilisateur

	for(int i = 0 ; i < 5 ; i ++) // Boucle pour entrer la 
	{
    printf("Entrer le valeur de T[%d] = ",i); // Afficher La valeur du i

		scanf("%d",&n); // entrer la valeur de n du T[i] correspondant

		tab[i] = n; // donne la valeur de n à sa valeur correspondante T[i]

	}

	n = 0; // Ré - initilisation de n à zéro afin de le réutiliser

  printf("Veuillez entrer le nombre de fois à recopier le tableau * 5 : "); 
	
  scanf("%d",&NombreIt); // Entrer la valeur du nombre d'itération du tableau que l'utilisateur veut

	newt = malloc(NombreIt * sizeof(int)); // donne la valeur d'un tableau dynamique à newt,  avec un sizeof en int



	for(int compteur = 0; compteur < NombreIt ; compteur++) // Boucle d'incrementation du nombre d'itération du tableau 1 (tab) dans le nouveau tableau 2 (newt) 
	
	{

  	for(int i = 0; i < 5; i ++ ) // Boucle d'incrementation qui donne la valeur du tableau 1 à la position du tableau 2 
  	{
   
    newt[n] = tab[i];
    
    n++;
   

  	}

	} 

	for(int i = 0 ; i < NombreIt * 5 ; i ++) // Boucle d'affichage du tableau 2 newt
	
  {
    printf(" T[%d] = %d \n ",i,newt[i]);

  }

	free(newt); //Libération d'éspace mémoire de newt

}