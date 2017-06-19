#include "person.h"
#include<iostream>
#include<string>

using namespace std;

// setter functions
void person::setName(string name)
{
	this->name=name;
}

/*void person::setID(int id)
{
	this->id=id;
}
*/
/*void person::setPhonenumber(string phone_number)
{
	this->phone_number=phone_number;
}
*/
void person::setAddress(string address)
{
	this->address=address;
}

void person::setEmail(string E_mail)
{
	this->E_mail=E_mail;
}

//getter functions

string person::getName()
{
	return name;
}

/*int person::getID()
{
	return ID;
}
*/
/*string person::getPhonenumber()
{
	return phone_number;
}
*/
string person::getAddress()
{
	return address;
}

string person::getEmail()
{
	return E_mail;
}
person::person()
{
	

}


person::~person(void)
{
}
