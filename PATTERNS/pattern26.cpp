/*  pending
   1
  121
 12321
1234321
*/
#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    i=1;
    while(i<=n){
        int j=1,k=i;
        while(k<n){
            cout<<' ';
            k++;
        }
        while(j<=i){
            cout<<j;
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}