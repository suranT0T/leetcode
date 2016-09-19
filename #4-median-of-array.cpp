class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        vector<int> nums0;
        for(int s1=0,s2=0;(s1<a||s2<b);)
            {
                  if(s1<a&&(b<=s2||(nums1[s1]<=nums2[s2])))nums0.push_back(nums1[s1++]);
                  if(s2<b&&(a<=s1||(nums2[s2]<nums1[s1]))) nums0.push_back(nums2[s2++]);
            }
            int m=(a+b)/2;
            if((a+b)%2) return (double)nums0[m];
            else 
            {
                double c =( (double)nums0[m-1]+(double)nums0[m])/2;
                return c;
            }
            
        
        
    }
};