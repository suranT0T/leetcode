
//简单匹配。



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
	int len = strs.size(),j=0;
	string a = "";
	if (len ==1) return strs[0];
	if (len==0) return a;
	while (1) 
	{
        int count =0;
		for (int i = 0; i < len ; i++)
		{
		    char b=strs[i][j];
			if (strs[0][j] == b&& b != 0) count++;
			else return a;
		}
		if (count == len) a.push_back(strs[0][j]);
		j++;
	}
        
    }
};