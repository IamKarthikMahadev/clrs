class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapElements;
        for(int i = 0; i < nums.size(); i++)
        {
            map<int, int>::iterator it = mapElements.find(target-nums[i]);
            if(it != mapElements.end())
            {
                return vector<int>({ it->second, i});
            }
            else
            {
                mapElements[nums[i]] = i;
            }
        }
        return vector<int>({ 0, 0});
    }
};