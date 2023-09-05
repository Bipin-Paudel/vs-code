#include <iostream>

using namespace std;

class kamal
{
public:

void paisachahiyo()
{
cout<<"malaii dherae paisa chahiyoo";
}

};

class rupa
{
public:
void paisachahiyo()
{
cout<<"malaii dherae paisa chahiyetheoo ahileaa chhaina hola tw sanga";
}


};
class sudan:public kamal,rupa
{

public:
void paisachahiyo();




};



int main() {

sudan br;

br.kamal :: paisachahiyo();
    
 
    return 0;
}


