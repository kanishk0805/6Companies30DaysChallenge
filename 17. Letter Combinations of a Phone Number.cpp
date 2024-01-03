class Solution {
public:
    string here[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void insertword(vector<string> &ans,string word, string digits){
        if(digits.size()==0){
            //cout<<word<<endl;
            ans.push_back(word);
            return;
        }
        string ins=here[digits[0]-'2'];
        int n=ins.size();
        for(int i=0;i<n;i++){
            insertword(ans,word+ins.substr(i,1),digits.substr(1));
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        insertword(ans,"",digits);
        return ans;
    }
};