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
	*amount = 0.0;
}

//Alt constructor
Account::Account(float _amount, string _name)
{
	amount = new float; 
	*amount = _amount;
	name = _name;
}

Account::Account(const Account& obj2)
{
	setName(obj2.getName()); 
	setAmount(obj2.getAmount());
}

Account::~Account()
{
	cout << "Destructor called" << endl;
	delete amount;
}


void Account::print() const
{
	cout << "Holder Name: " << name << endl; 
	cout << "Amount: " << *amount << endl;
}

string Account::getName() const
{
	return name;
}

float Account::getAmount() const
{
	return *amount;
}

void Account::setName(string _name)
{
	name = _name; 
} 
void Account::setAmount(float _amount)
{
	*amount = _amount;
}


