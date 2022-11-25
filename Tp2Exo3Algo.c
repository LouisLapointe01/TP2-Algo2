#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int ligne_m1;
	int colonne_m1;
	int ligne_m2;
	int colonne_m2;
	int ligne_m_sortie;
	int colonne_m_sortie;



	printf("Veuillez entrer le nombre de ligne de m1 : ");
	scanf("%d",&ligne_m1);

	printf("Veuillez entrer le nombre de colonne de m1 : ");
	scanf("%d",&colonne_m1);

	printf("Veuillez entrer le nombre de ligne de m2 : ");
	scanf("%d",&ligne_m2);

	printf("Veuillez entrer le nombre de colonne de m2 : ");
	scanf("%d",&colonne_m2);

	

	// m-sortie = (ligne_m1 ; colonne_m2)

		ligne_m_sortie = ligne_m1;
		colonne_m_sortie = colonne_m2;



		int** m1 = malloc(ligne_m1*sizeof(int*));
		int** m2 = malloc(ligne_m2*sizeof(int*));
		int** m_sortie= malloc(ligne_m_sortie*sizeof(int*));
		

  if (colonne_m1 == ligne_m2)
  {

		for (int i = 0; i<ligne_m1;++i ) // Initialisation colonne m1
		{
			m1[i] = malloc(colonne_m1 * sizeof(int));
			
		}	

		for (int i = 0; i<ligne_m2;++i ) // Initialisatoin colonne m2
		{
			m2[i] = malloc(colonne_m2 * sizeof(int));
			
		}

    for (int i = 0; i<ligne_m_sortie;++i ) // Initialisatoin colonne ms
		{
			m_sortie[i] = malloc(colonne_m_sortie * sizeof(int));
			
		}

    printf("\n");
    printf("La matrice 1 :\n");

		for (int i = 0; i < ligne_m1 ; i++) //ligne 
		{	
			
			for(int j = 0; j < colonne_m1; j++ ) //colonne
			{
				printf("[%d][%d] = ",i,j);
				scanf("%d",&m1[i][j]);

			}

	  }
    
    printf("\n");
    printf("La matrice 2 :\n");

    for (int i = 0; i < ligne_m2 ; i++) //ligne 
		{	
			
			for(int j = 0; j < colonne_m2; j++ ) //colonne
			{
				printf("[%d][%d] = ",i,j);
				scanf("%d",&m2[i][j]);

			}

	  }

    printf("\n");
    printf("La matrice 1 :\n");
    
		for (int i = 0; i < ligne_m1 ; i++) //ligne 
			{	
			
				for(int j = 0; j < colonne_m1; j++ ) //colonne
				{
				
					printf("%d ",m1[i][j]);

				}		

      printf("\n");

			}	

    printf("\n");
    printf("La matrice 2 :\n");

    for (int i = 0; i < ligne_m2 ; i++) //ligne 
			{	
			
				for(int j = 0; j < colonne_m2; j++ ) //colonne
				{
				
					printf("%d ",m2[i][j]);

				}		

      printf("\n");

			}	

    for (int i = 0; i < ligne_m1 ; i++) 
				{	
				
					for(int j = 0; j < colonne_m2; j++ ) 
					{
           
            
						for(int k = 0; k < colonne_m1; k++ ) 
						{
							m_sortie[i][j] = m1[i][k] * m2[k][j];

						}
          }
        }  

    printf("\n");
    printf("Matrice sortie : \n");
    printf("\n");

		for (int i = 0; i < ligne_m1  ; i++) 
				{	
				
					for(int j = 0; j < colonne_m2  ; j++ ) 
					{
					
						printf("%d ",m_sortie[i][j]);

					}	
						
					printf("\n");

				}
             
		
  }
  else
  {
    exit(EXIT_FAILURE);
  }

  free(m1);
	free(m2);
	free(m_sortie);
	
  return 0;
}
	
	