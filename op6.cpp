#include<iostream>
#include<string.h>
using namespace std;

class hotel{
    private:
    int rno;
    string name;
    int terrif;
    int nod;
    int amount;
int calc(int nod ,int terrif){
     amount=nod*terrif;
   if(amount>1000){
amount=1.05*(nod*terrif);
   }
   else{
    amount= nod*terrif;
   }
   return amount;
}
public:

void checkin(int rno,string name,int terrif,int nod){
    this->rno=rno;
    this->name=name;
    this->terrif=terrif;
    this->nod=nod;
}
void checkout(){
    cout<<rno<<endl<<name<<endl<<terrif<<endl<<nod<<endl<<amount;
}
void cals(int nod,int terrif){
    calc(nod,terrif);
}
};
int main(){
    hotel h;
    h.checkin(12,"gv",50,2);
    h.cals(2,50);
    h.checkout();
}