class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        //cout<<nums1.size();
        int size=nums1.size();
        if(size%2==0)
        {
            
            int temp1=size/2;
            int temp2=(size/2)-1;
            double ans= nums1[temp1]+nums1[temp2];
            return ans/2;
        }
        
        double ans=nums1[size/2];
        return ans;
        
        
    }
};