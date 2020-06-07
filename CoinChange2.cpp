class Solution {
public:
int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int ar[n+1][amount+1];
        for(int j=0;j<=amount;j++)
            ar[0][j]=0;
        for(int i=0;i<=n;i++)
            ar[i][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
                if(j<coins[i-1])
                    ar[i][j]=ar[i-1][j];
                else
                    ar[i][j]=ar[i-1][j]+ar[i][j-coins[i-1]];
        }
        return ar[n][amount];
        
    }
};
