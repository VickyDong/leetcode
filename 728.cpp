class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        for(int i=left;i<=right;i++){
            vector<int> fj;
            int num = i;
            while(num!=0){
                if(num%10 == 1){
                    num/=10;
                    continue;
                }
                fj.push_back(num%10);
				num/=10;
            }
			while(!fj.empty()){
				int x = fj.back();
				if(x==0) break;
				else if(i%x!=0) break;
				else fj.pop_back();
			}
			if(fj.empty()) ret.push_back(i);
        }
	return ret;
    }
};