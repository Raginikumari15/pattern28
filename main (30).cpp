#include <iostream>
using namespace std;
int main() {
 int i=1;
    int j,k,n,h;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        h = 1;
        k=i;
        while(h<=i){
            cout<< k;
            k++;
            h++;
        }
        j=1;
        k=2*i-2;
        while(j<=i-1){
            cout<<k;
            k--;
            j++;
            }
        cout<<endl;
        i++;
    }
}
             
