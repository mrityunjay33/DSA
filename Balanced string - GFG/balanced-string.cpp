//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
private:
    int sumDigit(int N){
        int ans = 0;
        while(N){
            ans+=(N%10);
            N/=10;
        }
        return ans;
    }
    
public:
    string BalancedString(int N) {
        string alpha ="abcdefghijklmnopqrstuvwxyz";
        string ans ="";
        int multiple = N/26;
        int rem = N%26;
        for(int i = 0 ; i < multiple ; i++){
            ans+=alpha;
        }
        
        int f,l;
        if(rem&1){
            if(sumDigit(N)%2==0){
                f = l = rem/2;
                f+=1;
            }
            else{
                f = l = rem/2;
                l+=1;
            }
        }
        else{
            f=l=rem/2;
        }
        
        ans+=alpha.substr(0,f) + alpha.substr(26-l,l);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends