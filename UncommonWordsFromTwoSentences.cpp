class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        istringstream ss(s1);
        string word;
        while(ss >> word){
            mp[word]++;
        }
        istringstream s(s2);
        string wor;
        while(s >> wor){
            mp[wor]++;
        }

        vector<string>ans;
        for(auto i : mp){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
