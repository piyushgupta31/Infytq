class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
        vector<int> ans;
        double res;
        int j = 0, k = 0;
        while(j<nums1.size() && k<nums2.size())
        {
            if(nums1[j] <= nums2[k])
            {
                ans.push_back(nums1[j++]);
            }
                
            else
            {
                ans.push_back(nums2[k++]);
            }
                
        }
        while(j<nums1.size())
        {
            ans.push_back(nums1[j++]);
        }
        
        while(k<nums2.size())
        {
            ans.push_back(nums2[k++]);
        }
        
        int n = ans.size();
        int i = n/2-1;
        if(n%2==0)
        {
            res = (ans[i]+ans[i + 1]);
            res = res/2;
        }
        else
        {
            res = ans[n/2];
        }
        return res;
    }
};
