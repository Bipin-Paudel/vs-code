#include <iostream>
using namespace std;

class test
{
private:
int a,c;

public:
int d;

void setdata(int l,int b)
{
a=l;
c=b;
}
int Area()
{
return a*c;
}
};
test w;
int main() {

  int z;
  w.setdata(5,6);
 z=w.Area();

cout<<"Area:"<<z<<endl;

cout<<"enter num:";
cin>>w.d;

// cout<<"enter num:";
// cin>>w.d; (error )
    return 0;
}
