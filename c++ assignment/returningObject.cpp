#include <iostream>
using namespace std;
class complex 
{
int a,b;

public:
void setData(int x,int y)
{
a=x;
b=y;
}
complex addComplex(complex c1,complex c2)
{
complex temp;
temp.a=c1.a+c2.a;
temp.b=c1.b+c2.b;
return temp;
}
void display()
{
cout<<"("<<a<<"+"<<b<<"i"<<")"<<endl;
}
};
int main() {
 complex m,n,p,r;
 int j,k;
cout<<"enter real  and complex part:";
cin>>j>>k;

m.setData(j,k);
cout<<"enter real  and complex part:";
cin>>j>>k;
n.setData(j,k);
r=p.addComplex(m,n);
 
 cout<<"after adding:";
 r.display();
    return 0;
}