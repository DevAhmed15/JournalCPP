#include "author.h"
#include<iostream>
#include<string>
using namespace std;
author::author()
{
}
int author::id=100;
int author::id_author()
{
	id++;
	return id;
 }
 
void author::set_text(string text)
{
	this->text=text;
}
void author::set_article(article *y ,string text)
{  
	y->set_arti(text);
}
string author::get_article(article *y){
  return y->get_arti();
}
string author::get_article1(){
	return text;
}
/*article author::send_to_editor()
{
	return x;
}
*/
author::~author()
{
	
}
