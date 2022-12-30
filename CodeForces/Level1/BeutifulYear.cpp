#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);cin.tie(0);


int year; 
cin >> year; 
year++;
bool flag = true; 
vi list; 


for(int i = year; true; i++){
    int checkYear = i; 

    int lastDigit = checkYear % 10; 
    checkYear /= 10; 
    list.pb(lastDigit); 

    for(int j = 0; j < list.size(); j++){
        lastDigit = checkYear % 10;
        checkYear /= 10;
        list.pb(lastDigit);
        if (checkYear == 0){
            break; 
        }
    }

    sort(list.begin(), list.end()); 
    
    for(int j = 1; j < list.size(); j++){
        if(list[j-1] == list[j]){
            flag = false;
            break; 
        }
    }

    if(flag){
        cout << i << endl; 
        break; 
    }else{
        flag = true; 
        list.clear(); 
    }

}


   return  0; 
   
}