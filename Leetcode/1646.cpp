// 1646. Get Maximum in Generated Array

class Solution {
public:
    int getMaximumGenerated(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);

        if(n < 2) return n;

        vector<int> nums(n+1);
        nums[0] = 0, nums[1]=1;
        int max_num=1;

        for(int i = 2; i<=n; i++){
            if(i%2==0)
                nums[i] = nums[i/2];
            else
                nums[i] = nums[i/2] + nums[i/2+1];
            
            max_num = max(max_num, nums[i]);
        }

        return max_num;
    }
};