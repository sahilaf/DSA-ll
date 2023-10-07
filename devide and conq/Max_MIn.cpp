#include<bits/stdc++.h>
using namespace std;
int Max_Min(int arr[],int &max,int &min,int low,int high)
{
    if(low==high)
    {
        if(max<arr[low])
        {
            max=arr[low];
        }
        if(min>arr[high])
        {
            min=arr[high];
        }
        return 0;
    }
    if(high-low==1)
    {
        if (arr[low] < arr[high])       
        {
            if (min > arr[low]) {       
                min = arr[low];
            }

            if (max < arr[high]) {     
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) {      
                min = arr[high];
            }

            if (max < arr[low]) {      
                max = arr[low];
            }
        }
        return 0;
    }
    int mid=(high+low)/2;
    Max_Min(arr,max,min,low,mid);
    Max_Min(arr,max,min,mid+1,high);
    
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int max=INT_MIN;
    int min=INT_MAX;
    Max_Min(arr,max,min,low,high);

    cout<<max<<" "<<min;
}
