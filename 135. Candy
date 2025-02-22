class Solution {
public:
    int candy(vector<int>& rating) {
        int n = rating.size();
        vector<int> cnt(n,1);
        int ans = 0;
        for(int i = 1;i < n;i++){
            if(rating[i] > rating[i-1]) cnt[i] = cnt[i-1]+1;
        }
        for(int i = n-2;i >= 0;i--){
            if(rating[i] > rating[i+1] && cnt[i] <= cnt[i+1]) cnt[i] = cnt[i+1]+1;
        }
        for(int i : cnt) ans += i;
        return ans; 
    }
};
