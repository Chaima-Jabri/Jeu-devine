#include <stdio.h>//bibliotheque des entr�s sortie standard
#include <stdlib.h> //bibliotheque Gestion de la m�moire, conversions et fonctions syst�mes
int get_random_val (int max,int min)//cr�ation de fonction return valeur al�atoire entier de parametre min et max
{
	return (int) (rand()%(max-min)+1);//resultat retourn� 
}
int saisie()//cr�ation de fonction de saisie pour entier 
{
	int n;//d�claration des variables local
	printf("saisir un nombre entier: ");//ecrire sur l'ecran saisir un nombre entier
	scanf("%d",&n);//attendre le joeueur pour donner une valeur et la sauvegarder dans n
	return n;//resultat retourn�
}
void determine(int s)//cr�ation de fonction qui compare l'entier al�atoire et l'entier saisie
{
	int i,s1;//d�claration des variables local
	for(i=1;i<11;i++)//chance de r�p�ttion
	{	
		s1=saisie();//appel au fonction saisie 
		if(s1==s)//test de comparaison
		{
			printf("      ''bravo!! you win''\n");//ecrire sur l'ecran ''bravo!! you win'' avc retour a la ligne si s=s1
			printf("        score= %d/10",10-i);// ecrire sur l'ecran le resultat de score
			break;//sortir
		}
		else if (s1<s)//test de comparaison entre s1 saisie et s de programme
		    {
				printf("     < try again > \n");//ecrire sur l'ecran < try again >
				printf("le nombre a relever est plus grand\n");//ecrire sur l'ecran le nombre a relever est plus grand avec retour a la ligne
			}
			else
			{
				printf("     < try again >\n");//ecrire sur l'ecran < try again >
				printf("le nombre a relever est plus petit\n");//ecrire sur l'ecran le nombre a relever est plus petit avec retour a la ligne
			}
	}
	if(i>10)//test de sortie si la r�p�tition d�passe 10
	{
		printf("      ''game over''\n");//ecrire sur l'ecran
		printf("        score=0");// ecrire sur l'ecran le resultat de score
	}
}
int main()//fonction de programme principale
{//d�but du programme principale
	int s,s1,i;//d�claration des variable entier et alocation d'un espace m�moire
	s=get_random_val(0,100);// appelle au fonction qui donne des valeur al�atoire
	determine (s); // appelle au fonction pour afficher le resultat
return 0;//indique que le programmee s'est termin� avec succ�s
}//fin du programme
