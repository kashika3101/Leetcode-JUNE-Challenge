class Solution {
public:
    int change(int amount, std::vector<int>& coins) {
        
        std::sort(coins.begin(), coins.end());
        
        std::vector<int> T(amount+1, 0);
        
        T[0] = 1;
        
        for (int i = 0; i < coins.size(); i++)
        {
            int coin = coins[i];
           
            if (coin>amount)
                break;
            
            for (int i = 1; i <= amount; ++i) {
			   
                if (i >= coin)
                    T[i] += T[i-coin];
          }
        }
        return T[amount];
    }
};
