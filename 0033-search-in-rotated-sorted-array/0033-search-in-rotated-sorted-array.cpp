class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1,t=target;
        while(s<=e){
            int m= s+(e-s)/2;
            if(nums[m]==t){
                return m;
            }
            if(nums[s]<=nums[m]){
                if(nums[s]<=t && t<nums[m]){
                    e=m-1;
                }
                else{
                    s=m+1;
                }
            }
            else{
                if(nums[m]<t && t<=nums[e] ){
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