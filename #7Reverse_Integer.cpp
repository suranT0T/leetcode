
/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321 
*/
//今天开始让自己习惯写注释吧，，，
class Solution {
public:
    int reverse(int x) {
       int res=0,neg=0,a=0;
       int INT32_MAXw=214748364;//32位最大整数除以10.余数是七.
       if(x<0)
       {
           x=-x;neg=1;//判断x是否为负数
       }
       while(0<x)//依次取出x的末尾数进行处理
       {
           a=x%10;
           if(res>INT32_MAXw||(res==INT32_MAXw&&a>7))return 0;//判断溢出?
           else
           {
           res=res*10+a;
           x/=10;
           }
       }
       if(neg) return -res;
       else return res;
    }
};