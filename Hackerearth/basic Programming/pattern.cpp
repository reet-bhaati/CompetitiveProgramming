#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    long int sum = a[0]+a[n-1];
    cout<<sum<<'\n';
}
int main() {
    int t;
//    cin>>t;
t=1;
    while(t--)
    {
        solve();
    }
	
	return 0;
}