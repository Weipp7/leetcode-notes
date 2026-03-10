class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int cur,left=1;

        if(n==0) return 0;
        else if(n==1) return 1;
        else cur=nums[0];

        for(int right=1;right<n;right++){
            if(nums[right]!=cur){
                nums[left]=nums[right];
                left++;
                cur=nums[right];
            }

        }
        return left;
    }
};