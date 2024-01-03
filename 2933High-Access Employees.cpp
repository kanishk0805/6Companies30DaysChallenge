class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string,vector<int>> mp;
        for( auto &i : access_times){
            mp[i[0]].push_back(stoi(i[1]));
        }
        vector<string> ans;
        for(auto &[i,v]: mp){
            sort(v.begin(),v.end());
           // cout<<v[0]<<' ';
            for(int j=2;j<v.size();j++){
                //cout<<v[j]<<' ';
                if(v[j]-v[j-2]<100){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};