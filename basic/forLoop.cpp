#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of digits = ";
    cin>> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    for(int i=0; i<n; i++) cout<<a[i]<< " ";

    cout<<endl;
    return 0;
}