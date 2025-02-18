/*
1 2 3 
4 5 6
7 8 9*/
#include <iostream>
using namespace std;

int main(){
    int n,i,k=1;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<k<<' ';
            k++;
            j++;
        }
        i++;
        cout<<endl;
    }
}