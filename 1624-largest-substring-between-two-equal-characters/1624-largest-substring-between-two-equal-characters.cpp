class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map <char,pair<int,int>> k;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(k.find(s[i])==k.end())k[s[i]]={i,i};
            else{
                if(i<k[s[i]].first)k[s[i]].first=i;
                if(i>k[s[i]].second)k[s[i]].second=i;   
            }
        }
        int ans=-1;
        for(int i=0;i<26;i++){
            if(k.find(i+'a')!=k.end()){
                int m=k[i+'a'].second-k[i+'a'].first-1;
                if(m>ans)ans=m;
            }
        }
        return ans;
    }
};