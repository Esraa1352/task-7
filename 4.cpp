#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//number of height measurements
    int arr[n];//height measurements data entry
    for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort (arr,arr+n);//moving the highest height to the end of array
        cout<<arr[n-1];

    return 0;
}
