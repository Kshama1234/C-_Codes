#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int> &arr, int n, int K) {
     
     set<vector<int>> st;
	 vector<vector<int>> ans;

    // check all possible triplets:
    for (int i = 0; i < n-2; i++) {
        for (int j = i + 1; j < n-1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == K) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(), temp.end());
                   if(st.find(temp)==st.end()) {
                       ans.push_back(temp);
                       st.insert(temp);
                   }
                }
            }
        }
    }

    //store the set elements in the answer:
    return ans;
   
}
