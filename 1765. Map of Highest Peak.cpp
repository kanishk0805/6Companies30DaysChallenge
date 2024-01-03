class Solution {
public:
   // ios_base::sync_with_stdio(false);
    //cin.tie(false);
    typedef pair<int,int> pii;
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size(),n=isWater[0].size();
        vector<vector<int>> ans(m,vector<int>(n,-1));
        queue<pii> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) if(isWater[i][j]==1) q.push({i,j});
        }
        int height=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto [i,j]=q.front(); 
                //cout<<i<<' '<<j<<endl;
                q.pop();
                if(ans[i][j]!=-1) continue; 
                ans[i][j]=height;     
                 if(i+1<m && ans[i+1][j]==-1) q.push({i+1,j});
                 if(i-1>=0 && ans[i-1][j]==-1) q.push({i-1,j});
                 if(j+1<n && ans[i][j+1]==-1) q.push({i,j+1});
                 if(j-1>=0 && ans[i][j-1]==-1) q.push({i,j-1});
            }
            ++height;
        }
      //  cout<<endl;
        return ans;
    }
};