#include<bits/stdc++.h>
using namespace std;
int print_odd(int a[],int s,int e)
{
    if(s==e)
    {
        if(a[s]%2!=0)
        cout<<a[s]<<" ";
        return 0;
    }
    int mid=(s+e)/2;
    print_odd(a,s,mid);
    print_odd(a,mid+1,e);
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print_odd(arr,0,n-1);
}