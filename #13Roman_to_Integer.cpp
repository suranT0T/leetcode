class Solution {
public:
    int romanToInt(string s) {
        int len =s.length();
        int a=0,temp=0,sum=0;
        for(int i=len-1;i>-1;i--)
        {
            switch(s[i]){
                case 'I': a=1;break;
                case 'V': a=5;break;
                case 'X': a=10;break;
                case 'L': a=50;break;
                case 'C': a=100;break;
                case 'D': a=500;break;
                case 'M': a=1000; 
                default:break;
            }
            a>=temp?sum+=a:sum-=a;//从后往前。根据罗马数字的规则进行加减。难度不大。
            temp=a;
        }
        return sum;

    }
};