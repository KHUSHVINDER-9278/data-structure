class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int first=0;
       int count=0;
        while(first!=nums.size()){
            if(nums[first]==0){
                first++;
            }
            else{
                swap(nums[first],nums[count]);
                count++;
                first++;
            }
        }
    }
};