// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int a[], int b[], int n, int m) {
	    int gap = ceil((float)(m+n)/2);
	    while(gap > 0){
	        int i = 0;
	        int j = gap;
	        while(j < (m+n)){
    	        if(j < n && a[i] > a[j]){
    	            swap(a[i], a[j]);
    	        }
    	        else if(j >= n && i < n && a[i] > b[j-n]){
    	            swap(a[i], b[j-n]);
    	        }
    	        else if(i >= n && j >= n && b[i-n] > b[j-n]){
    	            swap(b[i-n], b[j-n]);
    	        }
    	      i++;
    	      j++;
	        }
	        if(gap == 1){
	            gap = 0;
	        }
	        else{
        	    gap = ceil((float)gap/2);
	        }
	    }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends