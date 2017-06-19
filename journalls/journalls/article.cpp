#include<iostream>
#include "article.h"
#include <string>
using namespace std;       
article::article(void)
{	 
	arti="";
	authorname="";
	editorname="";
	reviewername="";
	reviewerfeedback="";
}

int article::next_id;
int article::id_article()
{
	next_id++;
	return next_id;
 }
	void article:: set_arti( string arti)
	{		this->arti=arti;
	}
	void article::set_authorname(string y)
	{		authorname=y;
	}
	void article::set_editorname(string z)
	{		editorname=z;
	}
	void article::set_reviewername(string a)
	{	reviewername=a;
	}
	void article::set_revfeedback(string b)
	{		reviewerfeedback=b;
	}
	string article::get_arti()
	{		return arti;
	}
	string article::get_authorname()
	{		return authorname;
	}
	string article::get_editorname()
	{		return editorname;
	}
	string article::get_reviewername()
	{		return reviewername;
	}
	string article::get_revfeedback()
	{		return reviewerfeedback;
	}
	
	
	
article::~article(void)
{
}
