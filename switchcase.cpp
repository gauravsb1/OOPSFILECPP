#include<iostream>
using namespace std;
void traversal(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void bs(int arr[], int n,int key){
    int si =0,ei=n-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(arr[mid]==key){
            cout<<"key found"<<endl<<mid;
            break;
        }
        else if (key<arr[mid]){
            ei--;
        }
        else{
            si++;
        }
    }
   cout<<"key not found" ;
}







void insertion(int arr[],int idx,int v,int n,int max){
    if(n>=max){
        cout<<"array is full";
    }
    for(int i =n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=v;
    n+=1;
    traversal(arr,n);

}
void deletion(int arr[],int idx,int n){
   
    for(int i =idx;i<n;i++){
        arr[i]=arr[i+1];
    }
n-=1;
traversal(arr,n);
}

void bubblesort(int arr[] ,int n){
    int t=0;
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-1-i;j++){
if(arr[j]>arr[j+1]){
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}
        }
    }
    traversal(arr,n);

}

int main(){
    int n,max ;
    int key=2;
    cout<<"enter  max size of array";
    cin>>max;
    int arr[max];
    cout<<"enter size upto u want to enter ele";
cin>>n;
    cout<<"enter element";
    for(int i =0;i<n;i++){
    cin>>arr[i];
    }
    int var=0;
    cout<<"enter choice";
    cin>>var;

    switch(var){
//traversal
case 1: 
traversal(arr,n);
break;

case 2: 
bs(arr,n,key);
break;

case 3:
insertion(arr,1,8,n,max);
break;

case 4: 
 deletion(arr,1,n);
break;

case 5:
 bubblesort(arr,n);
break;
           
default :
cout<<"nothing";

    }
}