#include "GestionnaireNotifications.h"
#include <iostream>
using namespace std;

GestionnaireNotifications::GestionnaireNotifications() : compteur(0) {}

void GestionnaireNotifications::ajouter(Notification* n) {
    if (compteur < TAILLE_MAX) {
        notifications[compteur] = n;
        compteur++;
    }
    else {
        cout << "Le gestionnaire est plein, notification ignorée." << endl;
    }
}

void GestionnaireNotifications::envoyerToutes() const {
    for (int i = 0; i < compteur; i++) {
        notifications[i]->envoyer();
    }
}
