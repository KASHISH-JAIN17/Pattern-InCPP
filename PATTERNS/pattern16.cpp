/*
A
B C
D E F
G H I J*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch++<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
}