#include<iostream>
#include<string.h>
using namespace std;

void remove( string str[],char ch ,int n){
    for(int i =0;i<n;i++){
        if(str[i] ==){
str[i]=str[i+1];
n--;
        }

    }
     for(int i =0;i<n;i++){
        cout<<str[i] ;
}
}

int main(){
    int n ;
    cout<<"enter size of string";
    cin>>n;
    string str[n];

for(int i =0;i<n;i++){
    cin>>str[i];
}
remove(str,'t',n);
}
