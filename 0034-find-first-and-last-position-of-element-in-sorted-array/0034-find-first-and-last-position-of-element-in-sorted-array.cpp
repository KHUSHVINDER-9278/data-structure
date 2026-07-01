class Solution {
    private:
    int findfirst(vector<int>&nums,int target){
        int s=0,e=nums.size();
        while(s<e){
            int mid= s+(e-s)/2;

            if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid;
            }

        }
        return s;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = findfirst(nums,target);
        if(start==nums.size()||nums[start]!=target){
            return{-1,-1};
        }
        return {start,findfirst(nums,target+1)-1};
        
    }
};