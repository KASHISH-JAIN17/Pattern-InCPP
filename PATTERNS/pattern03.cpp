/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"ENTER THE VALUE OF n :";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}