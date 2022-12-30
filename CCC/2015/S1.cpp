#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 
#define ll long long int

int main(){
   ios::sync_with_stdio(0);cin.tie(0);
 
string a,b; 
cin >> a; 

for(int i = 1; i < a.size(); i++){
    if(islower(a[i]) == 0 || islower(a[i-1] == 0)){
        char ch = a[i]; 
        a.erase(a.begin() + (i-1)); 
        a[i] = toupper(ch); 
    }else{
        a.erase(a.begin() + (i-1));
    }
}

cout << a << endl; 
    return 0;
}