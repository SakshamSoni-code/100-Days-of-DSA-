class Solution {
public:
    string getSmallestString(int n, int k) {
        
        
        string ans(n , 'a');
        k -= n;
        
        while(k > 0){
            ans[--n] += min(k , 25);
            k -= min(k,25);
        }
        return ans;
        
        
        
        
        
        
        /* mine idea
        
        string s(n , 'a');
        
        if(n == k) return s;
        int curr = n-1;
        int next = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(k - (curr + next) >=1 && k - (curr + next) <= 26){
                s[i] = 'a' + (k - curr - next - 1) ;
                break;
            }
            else{
                s[i] = 'z';
                curr --;
                next += 26;
                
            }
        }
        return s;  */
    }
};