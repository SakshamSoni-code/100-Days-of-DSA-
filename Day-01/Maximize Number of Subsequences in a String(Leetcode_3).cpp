class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        
        
        long long c1 = 0, c2 = 0, ans = 0;
        
        for(char &c : text){
            if(c == pattern[1]){
                ans+=c1;
                c2++;
            }
            if(c == pattern[0]) c1++;
        }
        
        return ans + max(c1,c2);
        
       /* long long c1=0 , c2=0;
        for(char c : text){
            if(c == pattern[0]) c1++;
            if(c == pattern[1]) c2++;
        }
        
        if(c1 == 0 && c2 == 0){
            return 0;
        }
        else if(c1 == 0) return c2;
        else if(c2 == 0) return c1;
        
         if(pattern[1] == pattern[0]){
            c1+=1;
            return (c1*(c1-1))/2 ;
        }
        
        string temp1 = text;
        temp1.insert(0,1,pattern[0]);
       
        long long cnt = 0 , ans=0;
        for(long long i = temp1.size()-1 ;i>=0; i--){
            if(temp1[i] == pattern[1]) cnt++;
            if(temp1[i] == pattern[0]) ans+=cnt;
        }
        
       
        string temp2 = text;
        temp2.push_back(pattern[1]);
        long long cnt2 = 0, ans2=0;
        for(long long i = temp2.size()-1 ;i>=0; i--){
            if(temp2[i] == pattern[1]) cnt2++;
            if(temp2[i] == pattern[0]) ans2+=cnt2;
        }
        return max(ans, ans2);  */
        
    }
};