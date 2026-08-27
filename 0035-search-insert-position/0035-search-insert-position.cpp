class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        
        int n=nums.size();
        int s = 0;
        int e = n-1;
        int mid;
         if(target<nums[s]){
                return 0;
            }
            if(target>nums[e]){
                return n;
            }
        while(s<=e){
            mid=s+(e-s)/2;
           
           
           
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
        return s;
        
    }
};