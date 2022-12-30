#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);
cin.tie(0);

int n; 
cin >> n; 
cin.ignore(); 
int english = 0, french = 0; 

while(n--){
    string s; 
    getline(cin , s); 
    for(int i = 0; i < s.size(); i++){
        if((char)tolower(s[i]) == 't'){
            english++; 
        }else if((char)tolower(s[i]) == 's'){
            french++; 
        }
    }
}

if(english > french){
    cout << "English" << endl; 
}else{
    cout << "French" << endl; 
}


   return  0; 
   
}