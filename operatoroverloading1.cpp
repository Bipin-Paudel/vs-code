#include <iostream>
using namespace std;
 class marks{
int internal_marks;
int external_marks;

public:
void getmarks(int a,int b )
{
external_marks=a;
internal_marks=b;
}

marks operator+(marks x )
{
    marks c;
    c.external_marks=external_marks +x.external_marks;
    c.internal_marks=internal_marks +x.internal_marks ;

    return c;
}

void display()
{
    cout<<"external :"<<external_marks <<"internal:"<<internal_marks;
}
 };
int main() {

marks A,B,c;

A.getmarks(20,30);
B.getmarks(40,60);

c=A+B;

c.display();
    return 0;
}


