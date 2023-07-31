#include <iostream>

using namespace std;
const int Max=10;
class Employee
{
private:
int salary;
int id;

public:
void getData()
{
cout<<"enter id:";
cin>>id;
cout<<"enter salary:";
cin>>salary;
}
void putData()
{
    cout<<"salary:"<<salary<<endl;
    cout<<"id:"<<id;
}
};
Employee e[Max];
int main() {
    int n=0;
    char ans;
 do{
cout<<"Enter employee num:"<<n+1<<endl;
e[n++].getData();
cout<<"Entet another(y/n)?:";
cin>>ans;
 }
 while(ans!='n');
 cout<<endl<<"*****employee details***"<<endl;
for(int  j=0;j<n;j++)
{
cout<<"\n Employee number is: "<<j+1<<"\n";
e[j].putData();
}

    return 0;
}


