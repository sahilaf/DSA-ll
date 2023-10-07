#include <bits/stdc++.h>
using namespace std;

int binary_search_v1(int a[], int low, int high, int key)
{
    
    if (low == high)
    {
        if (key == a[low])
        return low;
        else 
        return -1;
    }
    else
    {
        int mid = (low + high) / 2;
        if (key == a[mid])
            return mid;
        if (key < a[mid])
        {
            return binary_search_v1(a,low,mid-1,key);
        }
        if (key > a[mid])
        {
            return binary_search_v1(a,mid+1,high,key);
        }
    }
}
int binary_search_v2(int a[], int low, int high, int key)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else if(key<a[mid])
        {
            return binary_search_v2(a,low,mid-1,key);
        }
        else
        {
            return binary_search_v2(a,mid+1,high,key);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    if(binary_search_v2(arr, 0, n - 1, key)==-1)
    cout <<key<<" not found";
    else
    cout << key << " found in index " << binary_search_v2(arr, 0, n - 1, key);
}

