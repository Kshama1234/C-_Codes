class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;

        for(auto interval : intervals) {
             if (merged.empty() || merged.back()[1] < interval[0]) {
            // no overlap → add new interval
            merged.push_back(interval);
        } else {
            // overlap → extend the end
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;
        }
    
};
