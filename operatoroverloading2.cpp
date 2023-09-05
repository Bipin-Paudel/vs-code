#include <iostream>

using namespace std;

class test{
int math_marks;
int english_marks;
int science_marks;

public:
test(int m,int e,int s){
math_marks=m;
english_marks=e;
science_marks=s;

}

test operator-(test x){

test z;
z.english_marks=english_marks +x.english_marks;
z.math_marks=math_marks +x.math_marks;

}

};


int main() {


 
    return 0;
}