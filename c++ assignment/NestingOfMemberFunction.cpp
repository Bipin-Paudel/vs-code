#include <iostream>
using namespace std;
class total
{
private:
float p,t,r;

public:
void setData(float principle,float time,float rate)
{
p=principle;
t=time;
r=rate;
float findInterest();
}

float findInterest()
{
    return ((p*t*r)/100);
}
float ta()
{
    return (p+ findInterest());
}

};
total t;
int main() {
    float p,tm,r,a,b;
    cout<<"enter the value of principle,time and rate:";
    cin>>p>>tm>>r;
    cout<<endl;
 t.setData(p,tm,r);
//a=t.findInterest();
//cout<<"interest is:"<<a<<endl;
b=t.ta();
cout<<"total amount after addding interest is:"<<b;

    return 0;
}