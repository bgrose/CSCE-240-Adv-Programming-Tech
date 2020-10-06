/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Account object
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/


#include "Account.h"

//int Account::numberAccounts = 0;

//Default constructor
Account::Account()
{
    name = "Null";
    amount = new float;
    *amount = 0;
}

Account::~Account()
{
    delete ammount;
    cout << "Destructor Called" << endl;
}

void Account::print() const
{
    cout << "Holder Name: " << name << endl;
    cout << "Amount: " << *amount << endl;
}


