#include<iostream>
#include<string.h>
using namespace std;

class electric{
    private:
    string name;
    int unit;
int charge;

    public:
    void setdet(string name,int unit){
        this->name=name;
        this->unit=unit;
    }
    int cal(int unit){
        if(unit<=100){
           charge=(unit*0.6);
        }
        else if (100<unit && unit<=200){
            charge+=(unit-100)*0.8;
        }
        else{
            charge+=(unit-300)*0.9;

        }
        if(unit<50){
            charge=50;

        }
        if(unit>300){
           int surcharge=charge*0.15;
            charge+=surcharge;
        }
        return charge;

        
    }
    void show(){
        cout<<name<<endl<<unit<<endl<<charge;
    
}
};
int main(){
    electric e1;
    e1.setdet("ravi",400);
    e1.cal(400);
    e1.show();
    return 0;

}
