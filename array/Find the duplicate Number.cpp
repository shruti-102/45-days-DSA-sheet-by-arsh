class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int i=0;
        while(i<nums.size())
        {
            int k=nums[i];
            if(k<0)
            {
                nums[k*-1]*=-1;
                if(nums[k*-1]>0) return k*-1;
            }
            else{
                nums[k]=nums[k]*-1;
                if(nums[k]>0) return k;
            }
            i++;
        }
        return 0;
    }
};
