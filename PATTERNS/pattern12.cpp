/*
A B C 
A B C
A B C*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)(64+j)<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
}