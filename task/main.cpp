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
        void ReciveFaut (string );              //  ����� ������ �� ������
        void edit       (string );                  //���� ������
        void ReciveFadm (string );             //  ����� ������ �� ������ ��� �������� ��������
        void publish    (string );            //����� ��� �� ���� �������� ��������
       //send
       string publish();                    //����� �� ������ ����� �����
       string sendTOrev ();                // ����� ������ �������
       string feedback();                 // ����� ����

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
