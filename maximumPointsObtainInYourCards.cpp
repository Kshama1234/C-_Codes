class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> arr= cardPoints;
        for(auto i:cardPoints) {
            arr.push_back(i);
        }
        /*for(auto i:arr) {
            cout<<i<<'';
        }*/

        int n = cardPoints.size();
        long sum=0, mx=0;
        int i=n-k;
        while(i<n) {
            sum += arr[i];
            i++;
        }

        mx = max(mx, sum);
        for(; i<n+k; i++){
            sum -= arr[i-k];
            sum += arr[i];

            mx = max(mx,sum);


        }
        return mx;

        
    }
};
