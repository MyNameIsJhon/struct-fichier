#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef personne personne;
struct personne
{
    char* nom;
    char* prenom;

    int age;
    int sexe; //booléen

};

int main()
{
    int i, suivant = 0;
    
    FILE* fichier = NULL;

    fichier = fopen("fichier.txt","w");

    if(fichier != NULL)
    {
        personne joueur[10];

        printf("vous allez maintenant accéder a la phase d'enregistrement...\n");
        
            
        while(suivant == 1)
        { 
            printf("quel est votre prenom?");
            scanf("%s",joueur[i].prenom);
            printf("quel est votre nom?");
            scanf("%s",joueur[i].nom);
            printf("quel age avez vous?");
            scanf("%d",joueur[i].age);
            printf("Homme = 0 / Femme = 1");
            scanf("%d",joueur[i].sexe);
            fprintf(fichier,"%s %s est âgé(e) de %d ans et aura le resultat de 1 pour F et 0 pour H: %d",joueur[i].prenom , joueur[i].nom , joueur[i].age , joueur[i].sexe);
            printf("personne n°%d a été enregistré, pour un enregistrement mettez 1:\n ",i);
            scanf("%d",&suivant);
        }
        
        fclose(fichier);
    }

    else
    {
        printf("votre prog ne marche pas salle merde");
    }
    
    return 0;
}