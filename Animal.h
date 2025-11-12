#include <iostream>
#include <string>
using namespace std;

class animal{
private:
string name;
int age;
bool isHungary;

public:
animal(string n,int a,bool h): name(n),age(a),isHungary(h){

}
void display(){

    cout<<"name"<<name<< endl;
    cout<<"age"<<age<<endl;
    cout<<"the animal is"<<isHungary<<endl;
}
void feed(){
    if(animal==isHungary){
    cout<<"animal is hungary"<<;
    }else
    cout<<"animal is not hungary"<<
}

}
