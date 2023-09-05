#include <iostream>
using namespace std;
int fibo( int n)
{
    if(n<2)
    return n;
    else
return fibo(n-1)+fibo(n-2);
}


int main() {

    int num;
    cout<<"enter the number of terms:";
    cin>>num;
    
for(int i=0;i<=num; i++){

cout<<fibo(i)<<"\t";

}

    return 0;
}