/*
1
2 2
3 3 3
4 4 4 4
*/
#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<' ';
            j++;
        }
        i++;
        cout<<endl;
    }
}