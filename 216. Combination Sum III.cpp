class Solution {
public:
    bool helper(vector<vector<int>> & ans,int k,int n,vector<int> & ins,int i){
        if(i>9 || i>n) return false;
        if(k==1) {
            if(n>9) return false;
            ins.emplace_back(n);
            ans.push_back(ins);
            ins.pop_back();
            return true;
        }
        for(;i<9;i++){
            ins.push_back(i);
            if(!helper(ans,k-1,n-i,ins,i+1)) {
              //  ins.pop_back();
              //  break;
            }
            ins.pop_back();
        }
        return true;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
      //  vector<vector<int>> arr
        vector<int> ins;
        helper(ans,k,n,ins,1);
        return ans;
    }
};