#include<stdio.h>
#include<stdlib.h>

#define NB 50
#define F_SORTIE "sortie"

int main(void)
{
	FILE *f_in, *f_out ; 
	int * tab; 
	int i ; 
	
	tab = (int*)malloc(NB * sizeof(int));
	for(i = 0 ; i < NB ; i++)
		tab[i] = i ;

	if((f_out = fopen(F_SORTIE , "w")) == NULL )
	{
		fprintf(stderr , "\nImpossible d'ecrire dans le ficher %s\n",F_SORTIE);
		return(EXIT_FAILURE);
	}
	fwrite(tab , NB * sizeof(int) , 1, f_out);
	fclose(f_out);
	if((f_in = fopen(F_SORTIE, "r")) == NULL)
	{
		fprintf(stderr, "\nImpossible de lire dans le fichier%s\n",F_SORTIE);
		return(EXIT_FAILURE);
	}
	fseek(f_in , 0,SEEK_END);
	printf("\n position %ld", ftell(f_in));
	fseek(f_in,-10 * 4, SEEK_END);
	printf("\n position %ld", ftell(f_in));
	fread(&i , sizeof(i), 1, f_in);
	printf("\t i =%d",i);
	rewind(f_in);
	printf("\n position %ld", ftell(f_in));
	fread(&i , sizeof(i) , 1 , f_in);
	printf("\t i = %d", i);
	fseek(f_in , 5 * sizeof(int) , SEEK_CUR);
	printf("\n position %ld", ftell(f_in));
	fread(&i,sizeof(i), 1, f_in);
	printf("\t i = %lld\n", i);
	fclose(f_in);
	getch();
	return(EXIT_SUCCESS);

}

