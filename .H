#ifndef BIBLIOTHEQUE_H
//const
#define BIBLIOTHEQUE_H

typedef struct {
    int id;
    char titre[100];
    char auteur[100];
    char description[100];
    float prix;
    char categorie[100];
    int dispo; 
    char nom[100];
} LIVRE;

LIVRE L[100]; // Array of books
int livreCounteur; 

int saisirId(); // Function to input and validate an ID
void afficherLivres(LIVRE L[], int livreCounteur);
void trierLivres(LIVRE L[], int livreCounteur);
void rechercherLivre(LIVRE L[], int livreCounteur);
void stockerBibliotheque(LIVRE L[], int livreCounteur);
int ajouter(LIVRE L[], int livreCounteur);
void modifier(LIVRE L[], int livreCounteur);
int supprimer(LIVRE L[], int livreCounteur);

#endif // BIBLIOTHEQUE_H
