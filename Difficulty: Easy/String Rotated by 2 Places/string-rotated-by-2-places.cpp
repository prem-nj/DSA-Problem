class Solution {
	public:
	void rclockwise(string &s1) {
		char ch = s1[s1.size() - 1];
		int index = s1.size() - 2;
		while (index >= 0) {
			s1[index + 1] = s1[index];
			index--;
		}
		s1[0] = ch;
		
	}
	
	void ranti(string &s1) {
		char ch = s1[0];
		int index = 1;
		while (index < s1.size()) {
			s1[index-1] = s1[index];
			index++;
		}
		s1[s1.size() - 1] = ch;
		
	}
	bool isRotated(string& s1, string& s2) {
		// code here
		if (s1.size() != s2.size()) {
			return false;
		}
		string cw=s1;
		string rw=s1;
		rclockwise(cw);
		rclockwise(cw);
		if (s2 == cw) {
			return true;
		}
		ranti(rw);
		ranti(rw);
		if (s2 == rw) {
			return true;
		}
		return false;
		
	}
};
