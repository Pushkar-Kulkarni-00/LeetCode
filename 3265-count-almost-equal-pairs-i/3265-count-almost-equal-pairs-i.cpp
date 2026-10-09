class Solution {
public:
    int countPairs(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){ans++;continue;}
                int t=0;
                vector <int> v1(10,0);
                vector <int> v2(10,0);

                int m=nums[i];
                int n=nums[j];

                while(m || n){
                    if((m%10)!=(n%10))t++;
                    v1[m%10]++;
                    v2[n%10]++;

                    m/=10;
                    n/=10;
                }

                if(t==2){
                    bool chk=true;
                    for(int i=0;i<10;i++){
                        if(v1[i]!=v2[i]){
                            if(i==0 && abs(v1[i]-v2[i])==1)continue;
                            chk=false;
                            break;
                        }
                    }
                    if(chk)ans++;
                }
            }
        }
        return ans;
    }
};