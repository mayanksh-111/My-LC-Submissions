class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<string> st;
        for(string s: nums) st.insert(s);
        int num = 0;
        int n = nums[0].size();
        int r = 1 << n;
        for(int i = 0;i < r;i++){
            string temp;
            int t = i;
            while(t > 0){
                temp.push_back(t%2 + '0');
                t /= 2;
            }
            int rem = nums[0].size() - temp.size();
            for(int i = 0;i < rem;i++){
                temp = '0' + temp;
            }
            if(st.find(temp) == st.end()){
                return temp;
            }
        }
        return "";
    }
};
