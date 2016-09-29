/* 12. Integer to Roman 
Given an integer, convert it to a roman numeral.
Input is guaranteed to be within the range from 1 to 3999.

*/



class Solution {
public:
    string intToRoman(int num) {
        string M[] = {"", "M", "MM", "MMM"};
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        //构建转换数组。。这是最直接，效率最高的方式了，也不容易出错。很直接。
        string a="";
        a = M[num/1000]+C[(num%1000)/100]+X[(num%100)/10]+I[num%10];
        return a;
    }
};