#include <iostream>
#include <cstring>
#include "Person.h"
#include <locale>

using namespace std;

int main()
{
    setlocale(0, "");
    char *name = new char[100];
    char *surname = new char[100];
    int year;
    int ans=-1;
    Person p;

    while (1)
    {
        cout<<"������� 1, ����� ������ ���� name.\n";
        cout<<"������� 2, ����� ������ ���� surname.\n";
        cout<<"������� 3, ����� ������ ���� year.\n";
        cout<<"������� 4 ��� ���������� getName,getSurname,getYear.\n";
        cout<<"������� 5 ��� ���������� ������ ������� �� �����(print).\n";
        cout<<"������� 6 ����� ������� ������ p1 � ��������� �����������.\n";
        cout<<"������� 7 ����� ������� ����� ������.\n";
        cout<<"\n������� 0 ��� ������.\n";
        cin>>ans;
        while (ans<0&&ans>6)
            cin>>ans;
        switch(ans)
        {
        case(0):
            break;
        case(1):
            cout<<"������� name\n";
            cin>>name;
            p.setName(name);
            break;
        case(2):
            cout<<"������� surname\n";
            cin>>surname;
            p.setSurname(surname);
            break;
        case(3):
            cout << "������� year\n";
            cin >> year;
            p.setYear(year);
            break;
        case(4):
            *name=p.getName();
            *surname=p.getSurname();
            year = p.getYear();
            cout<<"Name:"<<name<<endl;
            cout<<"Surname:"<<surname<<endl;
            cout<<"Year:"<<year<<endl;
            break;
        case(5):
            p.print();
            break;
        case(6):
            {
            Person p1("Robert","Wilson",33);
            p1.print();
            }
            break;
        case(7):
            {
            Person p2(p);
            p2.print();
            }
            break;
        default:
            break;
        }
        cout<<endl;
        if (ans==0)
            break;
    }
    return 0;
}
