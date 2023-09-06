//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
   bool isPrime(int N) {
    if (N <= 1) {
        return false; // 1 and non-positive numbers are not prime
    }
    if (N <= 3) {
        return true; // 2 and 3 are prime
    }
    if (N % 2 == 0 || N % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are not prime
    }

    // Check for prime using 6k +/- 1 rule (optimization)
    for (int i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) {
            return false;
        }
    }

    return true; // If no divisors found, it's prime
}

    
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends