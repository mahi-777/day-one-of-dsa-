#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int low, int high, int search)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==search)
        {
            return mid;
        }
        else if(arr[mid]<search)
        {
            low=mid+1;
        }
        else if(arr[mid]>search)
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int search;
    cout<<"enter element you want to search : ";
    cin>>search;
    cout<<"element found at index "<<binary(arr,0,n,search);
    return 0;
}