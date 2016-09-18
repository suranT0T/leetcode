class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        string b1,b2;
        b1=s[0];
        string *curr=&b1;
        string old;
        for(int i=1;i<s.length();i++)
        {
        
            for(int j=0;j<(*curr).length();j++)
            {
                if(s[i]==(*curr)[j])
                {
                    for(int k =j+1;k<(*curr).length();k++)
                        old+=(*curr)[k];
                    (b1.length()<b2.length())?curr=&b1:curr=&b2;
                    (*curr)="";
                    (*curr)+=old;
                    old="";
                    break;
                }
                
            }
           (*curr)+=s[i]; 
        }
        (b1.length()<b2.length()) ? curr=&b2:curr=&b1;
        return (*curr).length();
    }
};