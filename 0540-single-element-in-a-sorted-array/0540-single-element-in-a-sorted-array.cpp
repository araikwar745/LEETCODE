class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(m==0 && nums[m]!=nums[m+1]){
                return nums[m];
            }
            if(m==nums.size()-1 && nums[m]!=nums[m-1]){
                return nums[m];
            }
            if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]){
                return nums[m];
            }
            if(m%2==0){
                if(nums[m]==nums[m-1]){
                    e=m-1;
                }
                else{
                    s=m+1;
                }
            }
            else{
                if(nums[m]==nums[m-1]){
                    s=m+1;
                }
                else{
                    e=m-1;
                }
            }
        }
        return -1;   
    }
};