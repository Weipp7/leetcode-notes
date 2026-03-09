class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int left=0,right=n-1;
        if(n==0) return 0;
        else if(n==1) return nums[0]==val?0:1;
        while(left<right){
            int tmp;
            while(left<n && nums[left]!=val) left++;
            while(right>-1 && nums[right]==val) right--;
            if(left>=n) return n;
            if(right<=-1) return 0;
            // cout << left << right << endl;
            if(left<right){
                tmp=nums[left];
                nums[left]=nums[right];
                nums[right]=tmp;
            }
            else break;
            
        }
        // for(int x:nums){
        //     cout << x;
        // }
        // cout << left << right << endl;
        return left;
    }
   
};