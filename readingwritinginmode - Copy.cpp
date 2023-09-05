#include <iostream>
#include<fstream>

using namespace std;

int main() {
 
ofstream name;
name.open("hello.txt");
name<<"hello guus today program will start under  few minutes";


cout<<"written on file sucessfully"<<endl;
name.close();

ifstream dream;
string str;
dream.open("dream.txt");

getline(dream,str);

cout<<"content of this file is: "+ str;

    return 0;
}