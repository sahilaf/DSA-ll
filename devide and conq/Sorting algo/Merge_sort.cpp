#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int mid,int s,int e)
{
    int n1=mid-s+1;
    int n2=e-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++)
    {
        a1[i]=arr[s+i];
    }
    for(int i=0;i<n2;i++)
    {
        a2[i]=arr[mid+1+i];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = s;
    while (i < n1 && j < n2)
        {
        if (a1[i] <= a2[j])
        {
            arr[k] = a1[i];
            i++;
        }
        else
        {
            arr[k] = a2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = a1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = a2[j];
        j++;
        k++;
    }
}
void Merge_sort(int arr[],int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
    Merge_sort(arr,s,mid);
    Merge_sort(arr,mid+1,e);
    Merge(arr,mid,s,e);
    }

}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Merge_sort(arr,0,n-1);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

