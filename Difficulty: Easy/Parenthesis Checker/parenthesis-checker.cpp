//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> store;
        
        for(char c : x){
            if(store.empty() && (c == ')' || c == '}' || c == ']')){
                return false;
            }
            if(c == '[' || c == '{' || c == '('){
                store.push(c);
            }
            else{
                char check = store.top();
                store.pop();
                
                if((c == ')' && check != '(') || (c == '}' && check != '{') || (c == ']' && check != '[')){
                    return false;
                }
            }
        }
        if(!store.empty()){
            return false;
        }
        return true;
    }

};


//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends