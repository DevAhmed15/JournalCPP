#include<iostream>
#include<string>

using namespace std;


class reviewer
{

private:
    int id;
    string name;
    string feedback;

public:
  void setid(int id);
    void setname(string name);
    int  getid();
    string getname();
    void setfeedback(string feedback);
    string getfeedback(string feedback);
};


