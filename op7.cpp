#include<iostream>
#include<string.h>
using namespace std;

class myacc{
    private:
    string deposname;
    int accno;
    string acctype;
    int bal;

    public:
    void assin(string deponame,int accno,string acctype,int bal){
        this->deposname=deposname;
        this->accno=accno;
        this->acctype=acctype;
        this->bal=bal;

    }
    void deposit(int amount){
        bal+=amount;

    }
    void withdraw(int amount){
        if(amount<=bal){
            bal-=amount;
        }
        else{
            cout<<"insuff";
        }

    }
    void dis(){
        cout<<deposname<<endl<<bal;
    }

};
int main(){
    myacc a;
    a.assin("gv",231,"sbi",10);
    a.deposit(10);
    a.withdraw(1);
    a.dis();


}