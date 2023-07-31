#include<iostream>
using namespace std;
struct employee
{
    private:
char name[50];
int id;
int salary;

public:
void getdata()
{
cout<<"enter name:";cin>>name; 
cout<<"enter id:";cin>>id;
 cout<<"enter salary:";cin>>salary;
}

int display()
{
    cout<<"name:"<<name <<endl;
    cout<<"id:"<<id<<endl;
    cout<<"salary:"<<salary<<endl;

}

};
employee e;
int main()
{
e.getdata();
 cout<<"enter information is\n";
 e.display();
    return 0;
}