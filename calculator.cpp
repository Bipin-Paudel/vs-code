#include <iostream>

using namespace std;

class calculator
{
private:
    int x, y, z;
    float z1;

public:
    int add(int, int);
    int sub(int, int);
    int pro(int, int);
    float div(int, int);
};

int calculator::add(int a, int b)
{
    z = a + b;
    return z;
}

int calculator::sub(int x, int y)
{
    z = x - y;
    return z;
}

int calculator::pro(int x, int y)
{
    z = x * y;
    return z;
}

float calculator::div(int x, int y)
{
    z1 = x / y;
    return z1;
}

int main()
{
    int x, y;
    char ch;
    calculator c,d,e,f;
    cout << "enter 1st number:\n";
    cin >> x;
    cout << "enter 2nd number:\n";
    cin >> y;
    cout << "Which operation do you want to perform ?\n";
    cout << "Press + for add\nPress - for subtract\nPress * for multiplication\nPress / for division\n";
    cin >> ch;
    int result;
    switch (ch)
    {
    case '+':
        result=c.add(x, y);
        cout<<result;
        break;

    case '-':
        result=c.sub(x, y);
        cout<<result;
        break;

    case '*':
       result=c.pro(x, y);
       cout<<result;
        break;

    case '/':
       result=c.div(x, y);
       cout<<result;
        break;

    default:
        break;
    }
    return 0;
}