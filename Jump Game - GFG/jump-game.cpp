// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int a[], int n) {
        int maxReach = a[0];
        int steps = a[0];
        int jumps = 1;
        if(n == 1){
            return 1;
        }
        if(maxReach == 0){
            return 0;
        }
        for(int i = 1; i < n; i++){
            if(i == n-1){
                return 1;
            }
            maxReach = max(maxReach, i+a[i]);
            steps--;
            if(steps==0){
                jumps++;
                if(maxReach <= i){
                    return 0;
                }
                steps = maxReach-i;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends