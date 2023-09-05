#include <iostream>

using namespace std;

int main() {

try{
int a,b;
a=15;
cout<<"enter the value of b:";
cin>>b;

if(b==0){

    throw b;
}
else{
int remainder =a/b;
 cout<<"remainder is: "<<remainder;
}
}
catch(int k){

cout<<"invalid because b="<<k;

}


    return 0;
}