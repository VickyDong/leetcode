class Solution {
public:
    int reverse(int x) {
        bool dyl = true;
        if(x==-2147483648) return 0;
        if(x<0){
            dyl = false;
            x = -x;
        }
        int result = 0;
        vector<int> ivec;
        vector<int> standard{2,1,4,7,4,8,3,6,4,7};
        while(x!=0){
            ivec.push_back(x%10);
			x = x/10;
        }
        if(ivec.size() == standard.size()){
            if(ivec>=standard) return 0;
        }
		for(int i=0;i<ivec.size();i++){
			result = result * 10 + ivec[i];
		}
        if(dyl==false) result *= -1;
		return result;
    }
};