/***************************************************************************
 * Name: Casey Cole
 * Email: coleca@email.sc.edu
 * Function: Account object header
 * 
 * Copyright (C) 2020 by Casey Cole                                        *
 *                                                                         *
 ***************************************************************************/
#include <iostream>
#include <string>
using namespace std;
/*
 * The following will define the member variables as well as the functions
 * of the Account object.
 * */


class Account {
public:
    //Constructors
    //Default
    Account(); //Optional

    //Alternate Constructors
    Account(float, string);

    //Copy Constructor
    Account(const Account&);

    //Destructor
    ~Account();

    //Public Member Functions
    void print() const;
    string getName() const;
    float getAmount() const;

private:

    //Private Member Variables
    string name;
    float* amount;

    //Private Member Functions
    void setName(string);
    void setAmount(float);
};
