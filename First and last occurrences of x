// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int>ans;
    int i,occurance,first_index;
    occurance= count(arr, arr+n,x);
    // cout<<occurance <<"\n";
    if(occurance == 0){
        ans.push_back(-1);
        ans.push_back(-1);
    }
     
    else{ 
    first_index = find(arr, arr+n,x)-arr;
    // cout<< first_index ;
    ans.push_back(first_index);
    ans.push_back(first_index + occurance-1);
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends