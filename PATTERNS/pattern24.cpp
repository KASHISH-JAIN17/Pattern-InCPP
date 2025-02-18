/*
1234
 234
  34
   4
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
        while(k<i){
            cout<<' ';
            k++;
        }
        while(j<=(n-i+1)){
            cout<<i+j-1;
            j++;
        }
        i++;
        cout<<endl;
    }
}