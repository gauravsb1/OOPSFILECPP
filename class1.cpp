#include<iostream>
using namespace std;
class gv{
    public:
    //instance variable
    int roll=8;
string name="sk";
//instance method
void setroll(int newroll){
    roll=newroll;
}
void show(){
    cout<<roll<<endl<<name;
}
};

void main(){
    gv s1,s2;
    s1.roll=4;
    s1.show();
    s2.show();

}
