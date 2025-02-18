/*
A B C 
B C D
C D E*/
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
            cout<<(char)('A'+i+j-2)<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
}