#include <iostream>

using namespace std;
class time
{
int min,sec;

public:
void getData()
{
cout<<"enter minute:";
cin>>min;
cout<<"enter second:";
cin>>sec;
}
void print()
{
cout<<"\nminute:"<<min<<"\t";
cout<<"sec:"<<sec;
}
void addTime(time t1,time t2)
{
min=(t1.sec+t2.sec)/60+(t1.min+t2.min);
sec=(t1.sec+t2.sec)%60;


}

};
time tm1,tm2,tm3;
int main() {
int n;
tm1.getData();
tm2.getData();

tm3.addTime(tm1,tm2);

cout<<"after adding result is:";
tm3.print();
    return 0;
}