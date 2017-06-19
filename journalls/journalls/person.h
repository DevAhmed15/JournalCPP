//lib
#pragma once
#include<string>
using namespace std;


class person
{
private:
	
	string name;
	string username;
	string address;
	string E_mail;
    
public:
	void setName(string name );
	//void setID(int id);
	void setPhonenumber(string phone_number);
	void setAddress(string address);
	void setEmail(string E_mail);
	string getName();
	//int  getID();
	string getPhonenumber();
	string getAddress();
	string getEmail();

public:
	person(void);
	~person(void);
};

