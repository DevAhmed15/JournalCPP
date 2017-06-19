#include<iostream>
#include<string>
#include "author.h"
#include"person.h"

using namespace std;
void main(){

	author a;
	article b;
	a.setName("ahmed");
	cout<<a.getName()<<endl;
	a.setAddress("25th wallstreet egypt,cairo");
	cout<<a.getAddress()<<endl;
	a.set_text("hello i am galal i am going to speak fhnvifvk,v vfov,fvfvk vom ");
	cout<<a.id_author()<<endl;
	//b.set_arti(&text);
	cout<<a.get_article1()<<endl;

	system("pause");





}