#include<iostream>
using namespace std;

class  electric{
    private:
    string name;
    int unit;
float amount;
    public:
    void setdetail(string name,int unit){
        this->name=name;
        this-> unit=unit;
    }

    int calbill(int unit){
        if(unit>=0 && unit<=100){
amount = (unit*0.6)+50;
        }
        else if(unit>100 && unit <=200){
            amount = (100*0.6)+ (unit-100)*0.8+50;
        }
        else{
            amount= (100*0.6)+(200*0.8)+(unit-300)*0.9+50;
        }
        if(amount>300){
            amount+=amount*0.15;
        }
        return amount;
    }
void display(){
    cout<<"name : "<< name<<endl<<"charge : "<<  calbill(unit)<<endl;
}
};
int main(){
    int n;
    string name;
    int unit;
    cout<<"number of people";
    cin>>n;
electric e[n];
for(int i =0;i<n;i++){
cout<<"enter name of a person";
cin>>name;
cout<<"enter no of unit consumed";
cin>>unit;
cout<<" details "<<endl;
e[i].setdetail(name,unit);

e[i].display();
}

}
