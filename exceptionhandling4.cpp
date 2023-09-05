#include <iostream>

using namespace std;


int main() {
int a, b;
float result;

char opr;

try{
cout<<"Enter first  number:";
cin>>a;

cout<<"Enter second  number:";
cin>>b;

cout<<"enter operator:";
cin>>opr;

if(opr=='/'){
if(b==0)
{
    throw 0;
}
}
if(opr!='+'&& opr!='-'&& opr!='*'&& opr!='/')
{
throw opr;
}

switch(opr)
{
case '+':
cout<<"Result="<<a+b;
break;
case '-':
cout<<"Result="<<a-b;
break;
case '*':
cout<<"Result="<<a*b;
break;
case '/':
cout<<"Result="<<a/b;
break;
}
}
catch(...)
{
    cout<<"Exception ocurred";
}


    return 0;
}