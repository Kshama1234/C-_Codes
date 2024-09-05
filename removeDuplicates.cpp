int removeDuplicates(vector<int> &arr, int n) {

    n= arr.size();
    if(n==0 || n==1) 
        return n;
        vector<int> temp;
        for(int i=0; i<n-1; i++ ) 
        if(arr[i]!= arr[i+1])
        temp.push_back(arr[i]);

    temp.push_back(arr[n-1]);

    arr = temp;

    return arr.size();
    
	
}
