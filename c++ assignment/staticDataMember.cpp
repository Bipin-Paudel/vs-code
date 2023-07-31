#include <iostream> 
using namespace std;
class potential_energy
{
int m;
int h;
static float g;
public:
void setdata(int a,int b)
{
m=a;
h=b;
}
void display()
{
    cout<<"total potential energy is:"<<m*g*h;
}
};
float potential_energy::g=10;
int main() {
potential_energy ob1 ,ob2;
int j,k;

cout<<"entet the value of mass and height:";
cin>>j>>k;
ob1.setdata(j,k);
ob1.display();

cout<<"\n enter the value of mass and height:";
cin>>j>>k;
ob2.setdata(j,k);
ob2.display();
    return 0;
}