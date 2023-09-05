#include <iostream>

using namespace std;

int main() {
 int marks[5] ={27,39,98,45,28};

marks[3]=55;

cout<<marks[3]<<endl;// we can change the value of array


int i,num=0;
for(i=0;i<5;i++)
{
  
  cout<<*(marks+i)<<endl;


}

    return 0;
}