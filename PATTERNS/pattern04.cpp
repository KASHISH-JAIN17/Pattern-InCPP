/*
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 */
#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"ENTER THE VALUE OF n :";
    cin>>n;
    i=1;
    while(i<=n){
        int j=n;
        while(j>=1){
            cout<<j<<' ';
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}