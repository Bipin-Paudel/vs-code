#include <iostream>

using namespace std;
class teacher{
int salary;
char level;

public:
void get_data( int s,char l)
{
salary=s;
level=l; 
}

teacher operator/(teacher x)
{
teacher y;
y.salary=salary /x.salary;
y.level =level / y.level ;

return y;
}

void display()
{
    cout<<"salary: :"<<salary <<"\t"<<"level:"<<level;
}

};

int main() {
    teacher t1 ,t2,t3;
    t1.get_data(2500,'a');
     t2.get_data(50,'b');
   t3=t1/t2;
   t3.display();
    return 0;
}