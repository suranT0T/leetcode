/*虽然题目中要求的是a+b+c=0，我们可以对问题进行拓展，推广到a+b+c=target
 首先对数组进行排序，然后从左到右枚举数字作为我们要找的第一个元素a，这样问题就转化为了在剩余的数字中寻找元素b和c，使得b+c=target−a。
因为在第(1)步中，已经对数组进行了排序，因此我们可以使用两个指针，一个指针从a右侧的第一个元素开始向右扫描，另一个指针从数组末尾的元素开始向左扫描：
如果两个指针指向的数字之和比target−a小，那么左侧的指针向右移动；
如果两个指针指向的数字之和比target−a大，那么右侧的指针向左移动；
如果两个指针指向的数字之和等于target−a，那么我们就找到了三个元素a,b,c，并且a+b+c=target
，将这个三元组记入答案，指针继续扫描，直到两个指针相遇。

通过上述的描述，我们可以发现，当枚举了一个数组元素作为a后，寻找b和c只需要O(n)的时间复杂度。因此，整体的时间复杂度为O(n^2)。

在这道题中，需要注意的一点就是去重，去重其实并不难实现：因为数组有序，所以在扫描数组的过程中，如果发现该元素与它之前的元素相同，则跳过该元素。

*/

/*15. 3Sum

    Total Accepted: 151218
    Total Submissions: 748197
    Difficulty: Medium

Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; ++i) {
            // 'a'去重
            if (i && nums[i] == nums[i - 1]) {
                continue;
            }
            int l = i + 1, r = n - 1;
            while (l < r) {
                // 'b'去重
                if (l != i + 1 && nums[l] == nums[l - 1]) {
                    ++l;
                    continue;
                }
                // 'c'去重
                if (r != n - 1 && nums[r] == nums[r + 1]) {
                    --r;
                    continue;
                }
                if (nums[i] + nums[l] + nums[r] == 0) {
                    vector<int> tuple;
                    tuple.push_back(nums[i]);
                    tuple.push_back(nums[l]);
                    tuple.push_back(nums[r]);
                    ans.push_back(tuple);
                    ++l;
                    --r;
                } else if (nums[i] + nums[l] + nums[r] < 0) {
                    ++l;
                } else {
                    --r;
                }
            }
        }
        
        return ans;
    }
};