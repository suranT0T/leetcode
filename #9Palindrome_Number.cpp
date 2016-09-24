/* Palindrome Number */
/*Determine whether an integer is a palindrome. Do this without extra space.*/


class Solution {
public:
    bool isPalindrome(int x) {
	int buf = 0;
	if (x < 10&&x>-1) return 1;//0~9直接返回是回文数
	else if ((x % 10 == 0) || x<0) return 0;//负数和0结尾的肯定不是
	while (buf<=x)
	{
		buf = buf * 10 + x % 10;//buf依次相加和x比较
		x /= 10;
		if (x == buf) return 1;//相等就是回文数
		else if (x > 9 && x / 10 == buf)return 1;//中间夹了一个数的也是回文数
	}
	return 0;
    }
};