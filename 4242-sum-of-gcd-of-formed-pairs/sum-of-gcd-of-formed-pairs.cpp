class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int mx=0;

        for(int i=0;i<n;i++){
            if(nums[i]>mx){
            mx = nums[i];
            }
            nums[i] = gcd(mx,nums[i]);   
        }

        sort(nums.begin(),nums.end());
        int l=0, r=n-1;
        long long ans=0;
        while(l<r){
            ans += gcd(nums[l],nums[r]);
            l++;r--;
        }
        return ans;
    }
};