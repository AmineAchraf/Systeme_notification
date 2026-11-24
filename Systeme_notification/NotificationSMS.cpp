#include "NotificationSMS.h"
#include <iostream>
using namespace std;

NotificationSMS::NotificationSMS(const string& numero, const string& operateur,
    const string& message)
    : Notification(numero, message), operateur(operateur) {
}

void NotificationSMS::afficher() const {
    cout << "SMS | Numero : " << destinataire
        << " | Operateur : " << operateur
        << " | Message : " << message << endl;
}

void NotificationSMS::envoyer() const {
    cout << "Envoi du SMS au " << destinataire
        << " via " << operateur << "..." << endl;
}
