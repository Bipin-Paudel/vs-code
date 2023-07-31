#include <iostream>

using namespace std;
class distance {
private:

int feet;
int inches;

public:
void setdata(int f,int i)
{
feet=f;
inches=i;
}

void addDistance(distance d1,distance d2)
{
feet=d1.feet+d2.feet;
inches=d1.inches+d2.inches;
feet=feet+inches/12;
inches=inches%12;
}
void display()
{
    cout<<"("<<feet<<","<<inches<<")"<<endl;
}
};
int main() {
    

 
    return 0;
}