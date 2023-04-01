class Solution
{
public:
    int minimumCardPickup(vector<int> &v)
    {
        int mn = v.size();
        unordered_map<int, int> mp;
        bool found = false;
        for (int i = 0; i < v.size(); i++)
        {
            if (mp.count(v[i]) > 0)
                {
                    mn = min(mn, abs(mp[v[i]] - i) + 1);
                    found = true;
                }
            mp[v[i]] = i;
        }
        return  found ? mn : -1;
    }
};