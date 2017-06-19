#include <iostream>

using namespace std;

class editor
{

private:
    int ArticleID;
    int ID;
    int salary;
    string Email;
    string user_name;
public:
        //5sosyatoo
        void    set_Info(int ,int ,int ,string ,string );
        int     get_ArticleID();
        int     get_ID();
        int     get_salary();
        string  get_Email();
        string  get_user_name();
        // estlam
        void login();
        void ReciveFaut (string );              //  íÓÊáã ÇáãŞÇá ãä ÇáÕÍİì
        void edit       (string );                  //íÚÏá ÇáãŞÇá
        void ReciveFadm (string );             //  íÓÊáã ÇáãŞÇá ãä ÇáÇÏãä ÈÚÏ ÇáãæÇİŞå ÇáäåÇÆíå
        void publish    (string );            //íäÔÑå ÈÚÏ ãÇ ÊíÌì ÇáãæÇİŞå ÇáäåÇÆíå
       //send
       string publish();                    //íÍØåÇ İì ÇáİÇíá ãÚäÇå äÔÑåÇ
       string sendTOrev ();                // ÈíÈÚÊ ÇáãŞÇá ááãÑÇÌÚ
       string feedback();                 // ÈíÈÚÊ ÑÃíå

        editor()
        {
            cout<<"created"<<endl;
        }
        virtual ~editor()
        {
             cout<<"died"<<endl;
        }
};
int main()
{
 editor p;

    return 0;
}
