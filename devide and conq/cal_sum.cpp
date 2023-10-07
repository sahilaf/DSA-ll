#include<bits/stdc++.h>
using namespace std;
int calc_sum(int a[],int s,int e)
{
    int sum=0;
    if(s==e)
    {
        sum=sum+a[s];
        return sum;
    }
    int mid=(s+e)/2;
    int sum1=calc_sum(a,s,mid);
    int sum2=calc_sum(a,mid+1,e);
    return sum1+sum2;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<calc_sum(arr,0,n-1);
}