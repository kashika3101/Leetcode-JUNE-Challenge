class Solution {
public:
    static bool cmp(vector < int > &a, vector < int > &b) {
        if(a[0] == b[0]) {
            return a[1] < b[1];
        }
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),cmp);
        for(int i = 1 ; i < (int)people.size() ; i++) {
            int swaps = i-people[i][1];
            int j = i;
            while(swaps--) {
                swap(people[j],people[j-1]);
                j--;
            }
        }
        return people;
    }
};
