#include <iostream>

using namespace std;

int recur(int n)
{
if(n==0 || n==1){
return 1;
}
  return n*recur(n-1);  
}

int main() {
cout<<recur(5);



 
    return 0;
}