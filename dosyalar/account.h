#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<QString>

class Account
{
public:
    Account();
    int balanceUpdate();
    int balanceIncrease();


    int balance=0;



    // int miktar;
    // QString name;
    // QString surname;
    // int id;
    // int password;
    // int iban;

};

#endif // ACCOUNT_H
