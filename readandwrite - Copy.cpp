#include <iostream>
#include <fstream>
using namespace std;

int main() {
 string  ch;

ifstream rd("input2.txt");

rd>>ch;
cout<<"content of this file is: "<<ch<<endl;

rd.close();

string hr="hello guys";
ofstream wr("input.txt");

wr<<hr;

wr.close();
cout<<"written in file sucessfully";
    return 0;
}