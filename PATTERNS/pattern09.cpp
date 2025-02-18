/*
1
2 3
3 4 5
4 5 6 7*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<i+j<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
}