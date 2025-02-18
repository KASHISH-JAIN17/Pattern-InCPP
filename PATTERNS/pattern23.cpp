/*
   1
  22
 333
4444
*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1,k=n;
        while(k>i){
            cout<<' ';
            k--;
        }
        while(j<=i){
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
}