class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> kid;
        int n=candies.size();
        int a;
        for(int i=0;i<n;i++)
        {
            a=candies[i]+extraCandies;
            int k=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(a>=candies[j])
                        k++;
                }
            }
            if(k==n-1)
                kid.push_back(true);
            else
                kid.push_back(false);
        }
    return kid;
    }
};
