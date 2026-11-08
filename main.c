
#include <stdio.h>  // Pour afficher et lire des informations
#include <stdlib.h> // Pour générer un nombre aléatoire
#include <time.h>   // Pour utiliser l'heure actuelle

int main(void)
{
    // On démarre le hasard avec l'heure actuelle
    srand(time(NULL));

    // On choisit un nombre au hasard entre 1 et 100
    int entre_1_et_100 = rand() % 100 + 1;

    // On met 111 pour que la boucle commence
    int nombre_user = 111;

    // La boucle continue tant que le nombre n'est pas trouvé
    while (entre_1_et_100 != nombre_user) {

        // On demande un nombre à l'utilisateur
        printf("Entre un nombre entre 1 et 100 : ");

        // On récupère le nombre écrit par l'utilisateur
        scanf("%d", &nombre_user);

        // Si le nombre est correct
        if (nombre_user == entre_1_et_100) {
            printf("Bravo, tu as trouvé ! Le nombre était %d.\n", entre_1_et_100);
        }

        // Si le nombre est trop petit
        else if (nombre_user < entre_1_et_100) {
            printf("C'est plus ! Le nombre est supérieur à %d.\n", nombre_user);
        }

        // Si le nombre est trop grand
        else if (nombre_user > entre_1_et_100) {
            printf("C'est moins ! Le nombre est inférieur à %d.\n", nombre_user);
        }
    }
    
    return 0;
}
