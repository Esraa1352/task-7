#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;//number of elements in the array
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
        {
            if (arr[i]==target)
            {
                cout<<i;
                return 0;
            }
        }

    cout<< -1;
    return 0;
}
