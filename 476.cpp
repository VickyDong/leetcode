class Solution {
public:
    int findComplement(int num) {
        vector<int> bin;
        while(num!=0){
            bin.push_back(num%2);
            num /= 2;
        }
        int ret = 0;
        for(int i = bin.size()-1;i>=0; i --){
            if(bin[i]==1) ret = ret * 2 + 0;
            else ret = ret * 2 + 1;
        }
        return ret;
    }
};