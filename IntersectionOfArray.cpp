class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(auto i:nums2) {
            st.insert(i);
        }
        set<int> ans;
        for(auto i:nums1){
            // if(st.find(i)!=st.end()){
                if(st.count(i)>0){
                    ans.insert(i);
                }

            }
        
   
    
    vector<int> res(ans.begin(), ans.end());
    return res;
    }

};
