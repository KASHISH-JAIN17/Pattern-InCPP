/*
A B C 
D E F
G H I*/
#include <iostream>
using namespace std;

int main(){
    int n,i,k;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    k=0;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)(65+k)<<' ';
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}