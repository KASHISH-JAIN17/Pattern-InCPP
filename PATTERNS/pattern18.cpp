/*
D
C D
B C D
A B C D*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
             cout<<(char)('A'+n-i+j-1)<<' ';
             j++;
         }
        i++;
        cout<<endl;
    }
}