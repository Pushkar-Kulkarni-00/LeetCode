class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;
        for(int x:stones)pq.push(x);
        while(pq.size()>1){
            int t=pq.top();
            pq.pop();
            if(t==pq.top())pq.pop();
            else{
                int s=pq.top();
                pq.pop();
                pq.push(abs(t-s));
            }
        }
        if(pq.size()==0)return 0;
        return pq.top();
    }
};