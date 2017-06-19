#include<stdio.h>
#include <iostream>
#include <fstream>
#include <ostream>
#include"reviewer.h"
using namespace std;


string sendfeedback(int article){
    if(article == 1)
        return "like";
    else if(article == 2)
        return "unlike";
    else
        return "like with change";
}

main()
{
int id;
cout<<"Enter your id:";
cin>>id;

string name;
cout<<"Enter your name:";
cin>>name;

int article;
cout<<"read article:";
cin>>article;

         char c;
        ifstream s("article.txt",ios::in);
        if(s.fail())
            cout << "file not found";
        else {
        while(!s.eof())
        {
            s.get(c);
            cout << c;
        }
        int feedback;
        cout << "enter your opinion (1- if you like, 2- if you unlike, 3-if you like with change) : ";
        cin >> feedback;
        sendfeedback(feedback);
        }
        s.close();

}
