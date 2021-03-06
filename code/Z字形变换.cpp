class Solution {
public:
	string convert(string s, int nRows) {
		if (nRows <= 1) return s;
		string res = "";
		int size = 2 * nRows - 2;
		for (int i = 0; i < nRows; ++i) {
			for (int j = i; j < s.size(); j += size) {
				res += s[j];
				int tmp = j + size - 2 * i;
				if (i != 0 && i != nRows - 1 && tmp < s.size()) res += s[tmp];
			}
		}
		return res;
	}
};