/* 11. Container With Most Water
Given n non-negative integers a1, a2, ..., an, 
where each represents a point at coordinate (i, ai). 
n vertical lines are drawn such that 
the two endpoints of line i is at (i, ai) and (i, 0). 
Find two lines, which together with x-axis forms a container, 
such that the container contains the most water. 


*/



class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,maxarea=0,a=0,b=0;
         while (i<j) //i，j相向而行
         { 
             if((a=height[i])<=height[j]){ maxarea=max(maxarea,(j-i)*a);i++;}//只有向中间移动相对较小的那个板子，水桶的体积才有可能变大
             if((a=height[j])<height[i]) { maxarea=max(maxarea,(j-i)*a);j--;}//省去了很多不必要的比较
         }
         
         return maxarea;
        
    }
};