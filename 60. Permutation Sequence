class Solution {
public:
    int fact(int n){
        if(n == 0){
            return 1;
        }
        int k = 1;
        for(int i = 1;i <= n;i++){
            k *= i;
        }
        return k;
    }
    string getPermutation(int n, int k) {
        string ans = "";
        int size = n;
        vector<int> x(n);
        for(int i = 0;i < n;i++){
            x[i] = i+1;
        }
        int i = 0;
        while(n > 0){
            if(k == 0 || k == fact(n)){
                for(int j = size - 1;j >= 0;j--){
                    if(x[j] != -1) ans.push_back(x[j] + '0');
                }
                break;
            }
            else if(k == 1){
                for(int j = 0;j < size;j++){
                    if(x[j] != -1) ans.push_back(x[j] + '0');
                }
                break;
            }
            else{
                int a = fact(n - 1);
                n--;
                if(k % a == 0){
                    int add = k/a;
                    k = 0;
                    int num = x[i];
                    int j = 0;
                    while(add > 1 && num < size){
                        if(x[num - 1] == -1){
                            num++;
                        }
                        else{
                            num++;
                            add--;
                        }
                    }
                    while(num < size && x[num - 1] == -1) num++;
                    ans.push_back(num + '0');
                    x[num - 1] = -1;
                    while(i < size && x[i] == -1) i++;
                }
                else{
                    int add = k/a;
                    k %= a;
                    int num = x[i];
                    int j = 0;
                    while(add > 0 && num <= size){
                        if(x[num - 1] == -1){
                            num++;
                        }
                        else{
                            num++;
                            add--;
                        }
                    }
                    while(num < size && x[num - 1] == -1) num++;
                    ans.push_back(num + '0');
                    x[num - 1] = -1;
                    while(i < size && x[i] == -1) i++;
                }
            }
        }
        return ans;
    }
};
