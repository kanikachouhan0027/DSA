class Solution {
public:
int BinarySearch1(vector<int>& nums,int start,int end, int target){
    int mid=start+(end-start)/2;
    if(start>end){
        return  nums.size();
    }
    else{
        if(nums[mid]<target){
            if(mid+1==nums.size()){
                return nums.size();
            }
            if(nums[mid+1]>target){
                return mid+1;
            }

            return BinarySearch1(nums,mid+1,end,target);
        }
        else{
            if(mid-1<0){
           return 0;
            }
           if(nums[mid-1]<target){
            return mid;
           }
           
        
        return BinarySearch1(nums,start,mid-1,target);
    }
}}
int BinarySearch(vector<int>& nums,int start,int end, int target){
    int mid=start+(end-start)/2;
    if(start>end){
        return 0;
    }
    if(nums[mid]==target){
        return mid;
    }
    else{
        if(nums[mid]<target){
            return BinarySearch(nums,mid+1,end,target);
        }
        return BinarySearch(nums,start,mid-1,target);
    }
}
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
       int ans=BinarySearch(nums,start,end,target);
       int ans1=BinarySearch1(nums,start,end,target);
       if(ans){
        return ans;
       }
       else{
        return ans1;
       }
       
   
    }

};