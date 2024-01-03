//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
       int b=0;
       long long int s=((long long int)(n)*(n+1))/2;
       sort(arr.begin(),arr.end());
       long long int sum=arr[0];
       for(int i=1;i<n;i++){
           if(arr[i]==arr[i-1]) b=arr[i];
           sum+=arr[i];
       }
        return {b,s-sum+b};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends