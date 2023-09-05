#include <iostream>

using namespace std;
void divide(int a,int b)
{
try{
if(b==0)
{
throw b;
}
else
{
    cout<<"Result:"<<(float)a/b;
}
}
catch(int )
{
throw ;
}


}
int main() {
 try{
divide(18,0);
 }

catch(int i )
{
    cout<<"divide by zero exception";
}

    return 0;
}