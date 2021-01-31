class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = -1;
        
        for(int j = n-2; j >= 0; j--){
            if(nums[j] < nums[j+1]){
                i = j;
                break;
            }
        }
        
        for(int j = n-1; j>i && i >=0; j--){
            // 2 5 4 3 1
            // 3 5 4 2 1
            if(nums[j] > nums[i]){
                swap(nums[j], nums[i]);
                break;
            }
        }
        
        sort(begin(nums)+i+1, end(nums));
    }
};

static const auto _____ = []()
{
    // fast IO code : this I understand
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
