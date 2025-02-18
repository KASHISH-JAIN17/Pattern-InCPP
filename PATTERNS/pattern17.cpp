/*
A
B C
C D E
D E F G*/
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
            cout<<(char)('A'+i+j-2)<<' ';
            j++;
        }
        i++;
        cout<<endl;
    }
}