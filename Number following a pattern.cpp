//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        string ans="1";
        int n=S.size();
        for(int i=0;i<n;i++) ans+='1';
        for(int i=0 ;i<n;++i){
            if(S[i]=='D'){
                ans[i+1]=ans[i];
                int j=i;
                for(;j>=0 && S[j]=='D';j--) ans[j]++;
            }else{
                ans[i+1]=i+1+'1';
            }
          //  cout<<ans[i]<<' ';
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends