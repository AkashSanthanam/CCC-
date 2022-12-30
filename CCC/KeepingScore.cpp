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

string s;
vector<char> clubs,dia,hearts,spades; 
cin >> s; 
int c = 0,d,h,sp,a = 0,b = 0,n = 0,m = 0, total = 0; 

for(int i = 0; i < s.size(); i++){
    if(s[i] == 'D'){
        d = i; 
    }else if(s[i] == 'H'){
        h = i; 
    }else if (s[i] == 'S'){
        sp = i; 
    }
}

if (d - c == 1){
    a += 3;
}else if (d - c == 2){
    a += 2;
}else if (d - c == 3){
    a += 1;
}

if (h - d == 1){
    b += 3;
}else if (h - d == 2){
     b += 2;
}
else if (h - d == 3){
    b += 1;
}

if (sp - h == 1){
    n += 3;
}else if (sp - h == 2){
    n += 2;
}else if (sp - h == 3){
    n += 1;
}

if (s.size() - sp == 1){
    m += 3;
}else if (s.size() - sp == 2){
    m += 2;
}
else if (s.size() - sp == 3){
    m += 1;
}

for(int i = 1; i < s.size(); i++){
   if(i < d){
        if(s[i] == 'A'){
            a += 4; 
        }else if(s[i] == 'K'){
            a += 3; 
        }else if(s[i] == 'Q'){
            a += 2; 
        }else if(s[i] == 'J'){
            a += 1; 
        }
        clubs.pb(s[i]); 
   }else if(i < h){
        if(s[i] == 'A'){
            b += 4; 
        }else if(s[i] == 'K'){
            b += 3; 
        }else if(s[i] == 'Q'){
            b += 2; 
        }else if(s[i] == 'J'){
            b += 1; 
        }
        dia.pb(s[i]); 
   }else if(i < sp){
        if(s[i] == 'A'){
            n += 4; 
        }else if(s[i] == 'K'){
            n += 3; 
        }else if(s[i] == 'Q'){
            n += 2; 
        }else if(s[i] == 'J'){
            n += 1; 
        }
        hearts.pb(s[i]); 
   }else{
        if(s[i] == 'A'){
            m += 4; 
        }else if(s[i] == 'K'){
            m += 3; 
        }else if(s[i] == 'Q'){
            m += 2; 
        }else if(s[i] == 'J'){
            m += 1; 
        }
        spades.pb(s[i]); 
    }
}

total = a + b + n + m; 

cout << total << endl; 


cout << "Cards Dealt\t" << "Points" << endl; 
cout << "Clubs "; 
for(auto x : clubs){
    cout << x << " "; 
}
cout << "\t" << a << endl; 
cout << "Diamonds ";
for(auto x : dia){
    cout << x << " "; 
}
cout << "\t" << b << endl; 
cout << "Hearts ";
for(auto x : hearts){
    cout << x << " "; 
}
cout << "\t" << n << endl; 
cout << "Spades ";
for(auto x : spades){
    cout << x << " "; 
}
cout << "\t" << m << endl; 
cout << "Total\t" << total; 


   return  0; 
   
}