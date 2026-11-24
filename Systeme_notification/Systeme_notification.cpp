#include <iostream>
#include "NotificationEmail.h"
#include "NotificationSMS.h"
#include "NotificationPush.h"
#include "GestionnaireNotifications.h"
using namespace std;

int main() {
    NotificationEmail email("sara@example.com", "Securite","Nouvelle connexion detectee");
    NotificationSMS sms("0612345678", "Orange", "Votre code est 4582");
    NotificationPush push("user_102", "MyBank", "Paiement confirme");

    Notification* tab[3] = { &email, &sms, &push };

    cout << " Partie : polymorphisme " << endl;
    for (int i = 0; i < 3; i++) {
        tab[i]->afficher();
        tab[i]->envoyer();
        cout << endl;
    }
    GestionnaireNotifications gestionnaire;
    gestionnaire.ajouter(&email);
    gestionnaire.ajouter(&sms);
    gestionnaire.ajouter(&push);
    gestionnaire.envoyerToutes();

    return 0;
}