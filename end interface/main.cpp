#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <process.h>
using namespace std;

//functions
void begin();
void login();
void regist();
void loginFuser();
void loginFemp();
void registerAcc();
void userRegister();
void contORqui();
void quit();

/*class journal
{
    string name;
    string phone;
    string address;
    string manager;
    string email;

    public:
    string get_name()
        {
        string x;
        x="******** WelCome To Helwan Journal  ************";
        return x;
    }
    string get_phone()
        {
        string x;
        x="PhoneNum : 02251651532";
        return x;
    }
    string get_address()
        {
        string x;
        x="Address  : Faculty Of Computers & information";
        return x;
    }
    string get_manager()
        {
        string x;
        x="ManaGer  : Mahmoud Ali";
        return x;
    }
      string get_email()
        {
        string x;
        x="Email    : Heljournal.net";
        return x;
    }
};*/
int main()
{
   /* system("color b");
    journal interface;
   cout<<"     "<<interface.get_name()<<endl<<endl;
   cout<<"     "<<interface.get_address()<<endl;
   cout<<"     "<<interface.get_phone()<<endl;
   cout<<"     "<<interface.get_manager()<<endl;
   cout<<"     "<<interface.get_email()<<endl;
   cout<<"\n\n\n\n      ******* Press To Enter System *******\n";
   getch();*/
   begin();

    return 0;
}
void begin()
{
int choise;
    cout<<"Select one option below \n";
    cout<<"\n\t<-1->  Login     ---< L o g i n    is For Admins &  Editors & Users >";
    cout<<"\n\t<-2->  Register  ---< Registertion is For Authors & Reviewers       >";
    cout<<"\n\t<-3->  Read Latest News ";
    cout<<"\n\t<-4->  About Journal ";
    cout<<"\n\t<-5->  Quit ";
    cout<<"\n\nEnter Your Choise : ";
    cin>>choise;
    switch (choise)
    {
    case 1:
        login();
        break;
    case 2:
         userRegister();
         break;
    case 3:
        cout<<"\n\n100 JOBS WILL be created by a medical device company in Athlone over the next three years.Teleflex,Aglobal provider of medical devices for critical care and surgery,has confirmed its intention to create the high-skilled positions over the next three years at its Athlone office.The expansion is supported by the Department of Jobs, Enterprise and Innovation through IDA Ireland.Since the creation of the Athlone site in 2007, Teleflex has grown to employ more than 150 people who support the company’s growing business in Europe, Middle East, Africa (“EMEA”), Asia Pacific and India. Teleflex is one of the top 160 companies by revenue in Ireland, and the Athlone site recently was accredited as one of the best workplaces in Ireland by the Great Place to Work Institute.The Athlone business employs front office functions such as administration, customer service, finance, human resources, information technology quality, operations and research and development\n\n";
    contORqui();
        case 4:
        cout<<"\n\nPeace journalism is defined as a special mode of socially responsible journalism which contributes to the peaceful settlement of conflicts. Although this concept has been widely discussed, there has been no assessment of its underlying philosophy from the perspective of mass communication theory. This paper argues that peace journalism draws epistemologically from a naive realism and is, according to mass communication theory, largely based on the assumption of powerful, causal and linear media effects. By contrast, the author theorizes journalism as a highly autonomous though not autarkic system whose function is to provide social co-orientation. If that is true, it cannot be the task of journalism to engage actively in the peaceful settlement of conflicts since this is the task of politics or the military. There is, however, no doubt that journalism can contribute to the peaceful settlement of conflicts, but its potential influence is limited. After discussing peace journalism for three decades many questions remain unanswered. This contribution will,therefore,identify some important issues for further research.\n\n";
      contORqui();
        case 5:
        quit();
    default:
        cout<<"\n\nWrong Choise\n\n";
        contORqui();
    }}

/*void login()
{
    int choise;
    cout<<"\n\t<-1->  Login Employee ";
    cout<<"\n\t<-2->  Login Registerd Users    ";
    cout<<"\n\nEnter Your Choise : ";
    cin>>choise;
    switch (choise)
    {
    case 1:
        loginFemp();
    break;
    case 2:
    loginFuser();
    break;
    default:
        cout<<"\n\nWrong Choise \n\n";
        login();
    }
}*/
void loginFemp()
{
    ifstream employee("emps.txt");
    string username;
    int id;
    int ID;
    string UM;
    cout<<"\nEnter User Name : ";
    cin>>UM;
    cout<<"\nEnter ID :";
    cin>>ID;
    while(employee>>username>>id){
        if(UM==username && ID==id)
            {
            cout<<"Employee found"<<endl;
            cout<<"SucessFul Login\nWelcome"<<UM;
            //afterempLog();
                        }
            if(!(UM==username || ID==id))
            cout<<"Sorry! Not Found,Please Try again.";
loginFemp();
    }
}
/*void registerAcc()
{
    string name;
    string username;
    string email;
    int  password;

    ofstream user("users.txt",ios::app);
    cout<<"\nEnter The New User's  Name     : ";
    cin>>name;
    cout<<"\nEnter The New User's User Name : ";
     cin>>username;
    cout<<"\nEnter The New User's  Email    : ";
    cin>>email;
    cout<<"\nEnter The New User's  PassWord : ";
    cin>>password;
    user <<"Name     : "<<name<<endl;
    user <<"Username : "<<username<<endl;
    user <<"Email    : "<<email<<endl;
    user <<"Password : "<<password<<endl;
    user <<"----------"<<endl;
    cout<<"Created"<<"\n\n";
    user.close();
}*/
/*void userRegister()
{
    int choise;
    cout<<"\n\t<-1->  Author   ";
    cout<<"\n\t<-2->  Reviewer ";
    cout<<"\n\nEnter Your Choise : ";
    cin>>choise;
    switch (choise)
    {
    case 1:
        registerAcc();
    case 2:
        registerAcc();
    default:
        cout<<"\nWrong choise \n";
        contORqui();
    }
}*/
void loginFuser()
{
    ifstream user("users.txt");
    string email;
    int password;
    int PW;
    string EM;
    cout<<"\nEnter E-Mail : ";
    cin>>EM;
    cout<<"\nEnter Password :";
    cin>>PW;
    while(user>>email>>password)
    {
    if(PW==password && EM==email)
    {
    cout<<"User found"<<endl;
    cout<<"SucessFul Login\nWelcome";
    //afteruserLog();
    }
    if(!(PW==password && EM==email))
    cout<<"Sorry! Not Found,Please Try again.";
   contORqui();
    }
}
void quit()
{
 cout<<"Are You Sure ?";
 int choise;
    cout<<"\n\t<-1-> Yes ";
    cout<<"\n\t<-2-> No  ";
    cout<<"\n\nEnter Your Choise : ";
    cin>>choise;
    switch (choise)
    {
    case 1:
        cout<<"\n\nThank You For Visit....\n\n";
        exit(0);
    case 2:
        begin();
    default:
        cout<<"\nWrong Choise \n\n";
        quit();
}
}
/*void contORqui()
{
    int choise;
    cout<<"\n\t<-1-> Return Program & Continue ";
    cout<<"\n\t<-2-> Quit  ";
    cout<<"\n\nEnter Your Choise : ";
    cin>>choise;
    switch (choise)
    {
    case 1:
        begin();
    case 2:
        quit();
        default:
        cout<<"\nWrong Choise \n";
        contORqui();
    }
}*/
