// A complete program using class
#include <iostream>
using namespace std;
class rectangle
{
private:
int l,b;

public:
void setData(int length,int breath)
{
 l=length;
 b=breath;   
}

int Area()
{
    return l*b;
}
int Perimeter()
{
    return 2*(l+b);
}
};
rectangle c;
int main() {
    int x,y;
 c.setData(5,6);
x=c.Area();
y=c.Perimeter();
cout<<"area is :"<<x<<endl;
cout<<"perimeter is:"<<y;
    return 0;
}