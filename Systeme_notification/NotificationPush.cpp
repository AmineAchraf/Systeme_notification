#include "NotificationPush.h"
#include <iostream>
using namespace std;

NotificationPush::NotificationPush(const string& idUtilisateur, const string& application,
    const string& message)
    : Notification(idUtilisateur, message), application(application) {
}

void NotificationPush::afficher() const {
    cout << "PUSH | Utilisateur : " << destinataire
        << " | Application : " << application
        << " | Message : " << message << endl;
}

void NotificationPush::envoyer() const {
    cout << "-> Envoi de la notification push a " << destinataire
        << " sur " << application << "..." << endl;
}