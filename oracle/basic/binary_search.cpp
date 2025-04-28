int search(vector<int> &nums, int target) {
    // Write your code here.
    int l=0,m=0,h=nums.size()-1;
    m = l + (h-l)/2;
    while(l<=h)
    {
        if(nums[m]==target)return m;
        else if (nums[m]<target)l++;
        else h--;
        m = l + (h-l)/2;
    }
    return -1;
}