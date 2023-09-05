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
catch(int i)
{
cout<<"inclid because b="<<i;
}


}
int main() {
 
divide(18,7);





    return 0;
}