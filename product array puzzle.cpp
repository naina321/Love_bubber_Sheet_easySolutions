// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        vector<long long int>P (n, 0);
        long long int product = 1;
        int i ,c,j;
        
        c= count(nums.begin(), nums.end(),0);
        // cout<<c;
        if(c==0){
             for(i=0 ;i <n ; i++)
                product *= nums[i];
                // cout<<product;
             for(i=0 ;i <n ; i++)
                 P[i] = product/nums[i] ;
        }
        else if(c==1){
             for(i=0 ;i<n ; i++){
                if(nums[i]!=0)
                    product *= nums[i];
                if(nums[i]==0)  
                    j=i;
             }
             P[j] = product;
             return P;
             
        }
        else 
            return P;
        
        return P;
    } 
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends