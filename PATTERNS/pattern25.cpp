/*
   1
  23
 456
78910*/
#include <iostream>
using namespace std;

int main(){
    int n,i,val;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    val=1;
    while(i<=n){
        int j=1,k=i;
        while(k<n){
            cout<<' ';
            k++;
        }
        while(j<=i){
            cout<<val;
            val++;
            j++;
        }
        i++;
        cout<<endl;
    }
}