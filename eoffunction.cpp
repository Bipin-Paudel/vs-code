#include <iostream>
#include<fstream>

using namespace std;

int main() {
 
ifstream fin("reading.txt");
string c; // if we use char data type in the place of string

while(!fin.eof())
{

getline(fin,c); // then we can  # fin.get(c);
cout<<c<<endl;

}

    return 0;
}