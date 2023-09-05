#include <iostream>
#include <fstream>
using namespace std;

int main() {
 
ifstream read("input.txt");
string rd;

//read>>rd;

getline(read,rd);

cout<<rd;
    return 0;
}