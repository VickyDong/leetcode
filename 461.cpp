class Solution {
public:
    int hammingDistance(int x, int y) {
        int xb[32]={0},yb[32]={0};
		int i=31,j=31;
        
		while(x!=0){
			xb[i] = x%2 ;
			x /= 2 ;
			i--;
		}
        
		while(y!=0){
			yb[j] = y%2 ;
			y /= 2 ;
			j--;
		}
        
		int ret = 0;
		for(int k=0;k<32;k++){
			if(xb[k]!=yb[k]) ret++;
		}
		return ret;
    }
};