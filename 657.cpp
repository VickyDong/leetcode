class Solution {
public:
	bool judgeCircle(string moves) {
		int R = 0, L = 0, U = 0, D = 0;
		for (int i = 0; i<moves.length(); i++) {
			if (moves[i] == 'R') R++;
			else if (moves[i] == 'L') L++;
			else if (moves[i] == 'U') U++;
			else if (moves[i] == 'D') D++;
		}
		if (R == L&&U == D) return true;
		else return false;
	}
};