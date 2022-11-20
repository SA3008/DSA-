class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
        mp[nums[i]]=i;
    int r;
    vector<int> ans;
    for(int i=0;i<nums.size();i++)
    {
        r=target-nums[i];
        if(mp[r] && i!=mp[r])
        {
            ans.push_back(i);
            ans.push_back(mp[r]);
            break;
        }
    }
    
    return ans;
    
    
}
};