class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        double sum = 0;
        for(int num : nums){
            pq.push(double(num));
            sum += num;
        }
        
        double diff = sum;
        int count = 0;
        while(diff > sum/2 && !pq.empty()){
            double maxe = pq.top();
            pq.pop();
            diff -= maxe/2;
            pq.push(maxe/2);
            count++;
        }
        return count;   
    }
};