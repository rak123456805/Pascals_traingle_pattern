#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j,i;
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        int c=1;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<c;
            c=c*(i-j)/j;
        }
        cout<<"\n";
    }
    return 0;
}