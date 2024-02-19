//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long int game(int original_energies[], int hurdles_heights[], int n);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int original_energies[n];
        int hurdles_heights[n];
        for(int i=0;i<n;i++)
            cin>>original_energies[i];
        for(int i=0;i<n;i++)
            cin>>hurdles_heights[i];
        
        long long int ans = game(original_energies, hurdles_heights, n);
        if(ans == -1){
            cout << "Game Over\n";
        }
        else{
            cout << "You Win! " << ans << endl;
        }
    }
    return 0;
}

// } Driver Code Ends



long long int game(int original_energies[], int hurdles_heights[], int n)
{
    
    long long int check = 0;
    
    for(int i = 0; i<n; i++){
        check += original_energies[i];
        
        if(check < hurdles_heights[i]){
            return -1;
        }
        else{
            check -= hurdles_heights[i];
            check += i+1;
        }
    }
    return check;
}
