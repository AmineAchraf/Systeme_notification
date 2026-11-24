#pragma once
#include <iostream>
#include "Notification.h"
using namespace std;

class NotificationSMS : public Notification {
private:
    string operateur;

public:
    NotificationSMS(const string& numero, const string& operateur,
        const string& message);

    void afficher() const override;
    void envoyer() const override;
};

