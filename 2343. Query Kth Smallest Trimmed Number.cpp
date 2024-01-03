class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
       unordered_map<int,vector<int>> mp;
       int n=nums.size();
       int size=nums[0].size();
       vector<int> index(n);
    vector<int> ans;
       iota(index.begin(),index.end(),0);
      // cout<<"here"<<endl;
       for(auto &i: queries){
         //  cout<<"here "<<i[0]<<endl;
          if(mp.count(i[1])==0){
              vector<string> ins(n);
             int pos=0;
             for(const string  s: nums) ins[pos++]=s.substr(size-i[1],i[1]);
              sort(index.begin(),index.end(),[&ins](const int &a,const int &b) {
                  return (ins[a]==ins[b])? a<b:ins[a]<ins[b];
              });
              mp[i[1]]=index;
              //for(auto &I:mp[i[1]]) cout<<I<<' ';
             // cout<<endl;
          }
            ans.push_back(mp[i[1]][i[0]-1]);
           // cout<<ans.back()<<endl;
       }
       return ans;
    }
};