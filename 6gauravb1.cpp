#include<iostream>
using namespace std;
 class hotel{
    private:
    int rno;
    string name;
    int terrif;
    int nod;

    cal(int nod,int terrif){
if(nod*terrif>10000){
    return nod*terrif*1.05;
}
else{
    nod*terrif;
}

    }

public:
void checkin(int rno,string name,int terrif,int nod){
    this->rno=rno;
    this->name=name;
    this->terrif=terrif;
    this->nod=nod;
}
void checkout(){
    cout<<"rno : "<<rno<<endl<<"name : "<<name<<endl<<" nod : "<<nod<<endl<<"amount : "<<ca;+l(nod,terrif)<<endl;
}

 };
 int main(){
    int n ;
    
    string name;
    int rno;
    int terrif;
    int nod;
    cout<<"enter no of custemer :";
    cin>>n;

    hotel h[n];

    for(int i =0;i<n;i++){
        cout<<"welcome to hotel"<<endl;

        cout<<"name :";
        cin>>name;

        cout<<" room no :";
        cin>>rno;

        cout<<" terrif : ";
        cin>>terrif;

        cout<<"no of days stay :";
        cin>>nod;

        h[i].checkin(rno,name,terrif,nod);

        h[i].checkout();



    }
 }