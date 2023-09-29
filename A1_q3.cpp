#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i == 0){
            cout<<"not prime"<<endl;
            return 0;
        }
        i+=1;
    }
    cout<<"prime";
    
    return 0;
}
