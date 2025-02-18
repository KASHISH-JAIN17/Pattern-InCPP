/*
   *
  **
 ***
****
*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1,k=1;
        while(k<=(n-i)){
            cout<<' ';
            k++;
        }
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}