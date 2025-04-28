long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.

    long long ans = 0;
    long long sum = 0;
    for (auto i:arr)
    {
        sum += i;
        ans = max(ans,sum);
        if(sum<=0)sum=0;
    }
    return ans;
}