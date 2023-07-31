#include <iostream>
#include<string>
using namespace std;

class Employee 
{
    private:
    int eid,salary ;
    string ename;
    
public:
void displaly()
{
    cout<<"employee id:"<<eid<<endl<<"employee salary"<<salary<<endl<<"employee name:"<<ename<<endl;
}
void getData()
{
cout<<"enter value of id name and salary:";
cin>>eid>>ename>>salary;

}
class dob
{
    private:
int day,year;
string month;
public:

void getDob()
{
cout<<"enter day,  month and year of your date of birth: ";
cin>>day>>month>>year;
}
void dob_display()
{
    cout<<"date of birth is \n";
  cout<<"day:"<<day<<endl<<"month"<<month<<endl<<"year:"<<year<<endl;  
}
};
class dob;
};
Employee A1,A2;
int main() {
  A1.getData();



    return 0;
}
