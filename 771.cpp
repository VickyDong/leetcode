class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int stone[52]={0},jewels[52]={0};
        for(int i=0;i<S.length();i++){
            if(S[i]>='a'&&S[i]<='z') stone[S[i]-'a']++;
            else if(S[i]>='A'&&S[i]<='Z') stone[S[i]-'A'+26]++;
        }
        for(int i=0;i<J.length();i++){
            if(J[i]>='a'&&J[i]<='z') jewels[J[i]-'a']++;
            else if(J[i]>='A'&&J[i]<='Z') jewels[J[i]-'A'+26]++;
        }
        int ret = 0;
        for(int i=0;i<52;i++){
            if(jewels[i]!=0) ret = ret+stone[i];
        }
        return ret;
    }
};