class Solution {
  

public:

    vector<int> acc_weight;

    int binarysearchfunction(int num) {

        int low=0, high=acc_weight.size(), mid;

        while (low < high) {

            mid = low + (high - low) / 2;

            if (acc_weight[mid] < num) 
            low = mid + 1;

            else 
                high = mid;

        }

        return low;

    }
    
    Solution(vector<int>& w) {

        int total = 0;

        for (int weight:w) {

            total += weight;

            acc_weight.push_back(total);

        }

    }

    
    int pickIndex() {

        int random = rand() % acc_weight.back() + 1;

        return binarysearchfunction(random);

    }

};
