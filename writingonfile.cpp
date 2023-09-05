#include <iostream>
#include<fstream>
using namespace std;

int main() {
 
string name=" hello guys are you ready for studying c++ programming";

ofstream write("input.txt");
write<<name;

    return 0;
}