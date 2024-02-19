//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        istringstream str(s);
        string read;
        unordered_map<string , int> compare;
        vector<string> store;
        
        while(str >> read){
            if(compare.find(read) == compare.end()){
                store.push_back(read);
            }
            compare[read]++;
        }
        
        string result = "";
        int check = 0;
        
        for(string p : store){
            if(compare[p] > check){
                check = compare[p];
                result = p + " " + to_string(compare[p]);
            }
        }
        return result;
}

