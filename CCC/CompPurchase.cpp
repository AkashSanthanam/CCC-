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
vector <pair<int, string>> list; 
for(int i = 0 ; i < n; i++){
    string s; 
    cin >> s; 
    int ram,speed,space; 
    cin >> ram >> speed >> space; 
    int total = 2*ram + 3*speed + space;
    list.pb(make_pair(total,s)); 
}
 
sort(list.begin(), list.end()); 

if(n == 1){
    cout << list[0].second << endl; 
}else{ 
    for(int  i = n; i > 0; i--){
        if(list[n-1].first == list[i].first && list[i].second < list[n-1].second){
            swap(list[i].first, list[n-1].first); 
        }
    }
    for(int  i = n - 1; i > 0; i--){
        if(list[n-2].first == list[i].first && list[i].second < list[n-2].second){
            swap(list[i].first, list[n-2].first); 
        }
    }
}

cout << list[n-1].second << endl; 
cout << list[n-2].second << endl; 



    return 0; 
}