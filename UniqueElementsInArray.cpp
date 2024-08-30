#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	int n=arr.size();
	set<int>st;
	for(auto i:arr){
		st.insert(i);
	}
	int m=st.size();
	int ans = n-m;
	return ans;
}
