class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos=1;
        int previous =nums[0];
        for(int i=1;i<nums.size();i++){
          if(nums[i]==previous){

          }else{
            nums[pos++]=nums[i];
              previous=nums[i];
          }

        }
        return pos;
    }
    
};