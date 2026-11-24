#pragma once
#include <iostream>
#include "Notification.h"
using namespace std;

class GestionnaireNotifications {
private:
    static const int TAILLE_MAX = 100;
    Notification* notifications[TAILLE_MAX];
    int compteur;

public:
    GestionnaireNotifications();

    void ajouter(Notification* n);
    void envoyerToutes() const;

};
