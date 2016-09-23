/*这个中心很简单，但是各种判断非法情况弄得好烦。。等编程技巧更近一步再来改进。。注释就算了*/
//                    8.String to Integer (atoi)
/* Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. 
If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs).
 You are responsible to gather all the input requirements up front.  */

class Solution {
public:
    int myAtoi(string str) {
        int b = 0;
	    int sign = 0,count=0,havenum=0;
	    int len=str.length();
	    for (unsigned int i = 0; i < len; i++)
	  {
		int c=str[i]-48;
		if(-1<c&&c<10)
		{
		    if(i>8)
		    { 
		        if (b>(INT_MAX / 10)) 
		        { 
		            
		            if (sign==-3)return INT_MIN; else return INT_MAX; break;
		        }
		         if (b==(INT_MAX / 10)&&c>7)
		        { 
		            
		            if (sign==-3)return INT_MIN; else return INT_MAX; break;
		        }
		    }
		    b=b*10+c;
		    havenum=1;
		}
		else if(c!=-16||(havenum==1&&c==-16))
		{
		    if(havenum==1||c!=-3&&c!=-5) break;
		    sign=c;havenum=1;
		}
        
	  }
	if (sign==-3) b = -b;
    return b;   
    }
};