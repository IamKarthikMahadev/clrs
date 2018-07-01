//96ms performance
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
// how to get Leetcode tests to run approximately 10-40% faster, since they do a lot of print outs.
static auto x = [](){
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    cin.tie(NULL);
    return 0;
}();
//2ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapElements;
        for(int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int>::iterator it = mapElements.find(target-nums[i]);
            if(it != mapElements.end())
            {
                return vector<int>({ mapElements[target-nums[i]], i});
            }
            else
            {
                mapElements[nums[i]] = i;
            }
        }
        return vector<int>({ 0, 0});
    }
};
