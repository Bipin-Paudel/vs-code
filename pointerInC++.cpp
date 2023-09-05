#include <iostream>

using namespace std;

int main() {

int a=3;
int* b=&a;


// & =Adress of operator
// * =(value at operator) DEreference operator


cout<<b<<endl;//cout<<&b;
cout<<&a<<endl;
cout<<*b<<endl;
 
int **c=&b;//pointer to pointer
cout<<**c;



    return 0;
}