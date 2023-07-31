#include<iostream>
using namespace std;
struct currency
{
int rupees;
float paisa;

};
  currency c1,c2,c3;
int main()
{
   
c2={123,56.4};
cout<<"enter rupees:";cin>>c1.rupees;
cout<<"enter paisa:";cin>>c1.paisa;

if(c3.paisa>=100)
{
    c3.paisa-=100.0;
    c3.rupees++;
}
c3.rupees=c1.rupees+c2.rupees;
c3.paisa=c1.paisa+c2.paisa;
cout<<" rs "<<c1.rupees<<" ps "<<c1.paisa<<"+";
cout<<" rs "<<c2.rupees<<" ps "<<c2.paisa<<"=";
cout<<" rs "<<c3.rupees<<" ps "<<c3.paisa<<endl;


    return 0;
}