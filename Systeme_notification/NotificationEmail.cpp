#include "NotificationEmail.h"
#include <iostream>
using namespace std;

NotificationEmail::NotificationEmail(const string& destinataire, const string& objet,
    const string& message)
    : Notification(destinataire, message), objet(objet) {
}

void NotificationEmail::afficher() const {
    cout << "EMAIL  : " << destinataire
        << "Objet : " << objet
        << "Message : " << message << endl;
}

void NotificationEmail::envoyer() const {
    cout << " Envoi de email a " << destinataire << "..." << endl;
}
