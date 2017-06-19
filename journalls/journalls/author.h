#include "person.h"
#include "article.h"
#include<iostream>
#include<string>
using namespace std;
#pragma once
class author:public person
{
private:
	string text;
	
public:
	static int id;
	author();
	int id_author();
	void set_text(string text);
	string get_article1();
	void set_article(article *y,string text);
	string get_article(article *y);
	//article send_to_editor(article *y);
	~author();
};