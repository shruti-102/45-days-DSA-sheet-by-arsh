//using counting sort method
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) red++;
            else if(nums[i]==1) white++;
            else blue++;
        }
        cout<<red<<white<<blue<<endl;
        for(int i=0;i<red;i++)
        {
            nums[i]=0;
        }
        for(int i=red;i<red+white;i++)
        {
            nums[i]=1;
        }
        for(int i=red+white;i<nums.size();i++)
        {
            nums[i]=2;
        }
    }
};

***********************************************************************

//using three pointer approach low,mid and high
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
           else if(nums[mid]==1)
            {
                mid++;
            }
           else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
               
            }
        }
    }
};

