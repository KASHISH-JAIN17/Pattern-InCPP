/* pending
1234554321
1234**4321
123****321
12******21
1********1
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
        while(j<=(n+1-i)){
            cout<<j;
            j++;
        }

        while(k<i){
            cout<<"**";
            k++;
        }
        j--;
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}