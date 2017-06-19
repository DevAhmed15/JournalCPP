#include<iostream>
#include <string>

using namespace std;
#pragma once
class article
{
private:
	
	string arti;
	string authorname;
	string editorname;
	string reviewername;
	string reviewerfeedback;
public:
        static int next_id;
        int id_article();
		void set_arti(  string arti );
		
	void set_authorname(string y);
	void set_editorname(string z);
	void set_reviewername(string a);
	void set_revfeedback(string b);

	
	string get_arti();
	string get_authorname();
	string get_editorname();
	string get_reviewername();
	string get_revfeedback();
	article(void);
	~article(void);
};
