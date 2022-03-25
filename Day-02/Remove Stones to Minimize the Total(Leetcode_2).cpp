class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        
        
        // n+klogn
        priority_queue<int> pq;
        int sum = 0;
        for(int num : piles){
            pq.push(num);
            sum += num;
        }
        
        while(k-- && !pq.empty()){
            int maxe = pq.top();
            pq.pop();
            pq.push((maxe+1)/2);
            sum -= maxe/2;
        }
        return sum;
    }
};