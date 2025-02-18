/*
****
***
**
*
    */
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=n;
        while(j>=i){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}