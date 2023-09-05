#include <iostream>
#include<fstream>

using namespace std;

int main() {
 
ifstream read;

read.open("reading.txt");
string str;
while(getline(read,str))
{
  
cout<<str<<endl;
   
}
read.close();

    return 0;
}