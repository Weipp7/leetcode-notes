class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int left=0,cur=0;
        for(int right=0;right<n;right++){
            if(right==0){
                nums[left]=nums[right];
                left++;
                cur++;
            }
            else if(nums[right]!=nums[right-1]){
                nums[left]=nums[right];
                left++;
                cur=1;
            }
            else if(nums[right]==nums[right-1] && cur<2){
                nums[left]=nums[right];
                left++;
                cur++;
            }
            else{
                cur++;
            }
        }
        return left;
    }
};