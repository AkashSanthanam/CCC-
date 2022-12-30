#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);

string word; 
cin >> word;
int lower = 0, higher = 0; 

for(int i = 0; i < word.size(); i++){
    if((int)word[i] >= 65 && (int)word[i] <= 90){
        higher++; 
    }else{
        lower++; 
    }
}


if(higher > lower){
    transform(word.begin(), word.end(),word.begin(), ::toupper);
    cout << word << endl; 
}else{
    transform(word.begin(), word.end(),word.begin(), ::tolower);
    cout << word << endl; 
}
   return  0; 
   
}