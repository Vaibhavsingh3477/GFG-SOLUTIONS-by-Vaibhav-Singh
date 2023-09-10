//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
                 int a=0;
       for(int i=1;i<=n;i++)
       {
           for(int k=1;k<=(n-i);k++)
           {
               cout<<" ";
           }
           for(int j=1;j<=(i+a);j++)
           {
               cout<<"*";
           }
           a++;
           cout<<endl;
       }
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends