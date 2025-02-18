/*
1
2 1
3 2 1 
4 3 2 1
*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=i;
        while(j>=1){              //also i-j+1 formula with normal triangular execution
            cout<<j<<' ';
            j--;
        }
        cout<<endl;
        i++;
    }
}