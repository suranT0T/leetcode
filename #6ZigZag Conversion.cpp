class Solution {
public:
    string convert(string s, int numRows) {
        int sum=2*numRows-2;
        int len=s.length();
        string buf="";
        if(numRows>1)
        {
        for(int k=0;k<numRows;k++)
        {
            int i=k,sign=1;
            while(i<len)
            {
                if(sign==1&&(sum-2*k)!=0)
                {
                    buf+=s[i];
                    i+=sum-2*k;
                }
                if(sign==0&&(2*k)!=0)
                {
                    buf+=s[i];
                    i+=2*k;
                }
                sign=!sign;
                if(buf.length()==len) break;
            }
        }
        return buf;
        }
        else return s;
        }
};