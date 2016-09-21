class Solution {
public:
    string longestPalindrome(string s) {
        string buf="";
        int len=s.length();
        if(len==1) return s;
        if(len==2&&s[0]==s[1]) return s;
        else if(len==2) return NULL;
        for(int i=0;i+2<len;i++)
        {
            if(s[i]==s[i+2])
            {
                int j=i,k=i+2;
                while(0<=j&&k<=(len-1))
                {
                    if(s[j]!=s[k]) break;
                    j--;k++;
                }
                if((k-j-1)>buf.length()) buf.assign(s,j+1,(k-j-1));
            }
            if(s[i]==s[i+1])
            {
                 int j=i,k=i+1;
                while(0<=j&&k<=(len-1))
                {
                    if(s[j]!=s[k]) break;
                    j--;k++;
                }
                if((k-j-1)>buf.length()) buf.assign(s,j+1,(k-j-1));
            }
            if(s[i+1]==s[i+2])
            {
                 int j=i+1,k=i+2;
                while(0<=j&&k<=(len-1))
                {
                    if(s[j]!=s[k]) break;
                    j--;k++;
                }
                if((k-j-1)>buf.length()) buf.assign(s,j+1,(k-j-1));
            }
            
        }
        return buf;
        
    }
};