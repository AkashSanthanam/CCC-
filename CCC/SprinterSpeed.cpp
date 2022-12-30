#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<double> vd; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 

int main(){
  
ios::sync_with_stdio(0);
cin.tie(0);

int n; 
cin >> n;
map <int, int> pt; 
int time[n];

for(int i = 0; i < n; i++){
   int a,b;
   cin >> a >> b;
   pt[a] = b; 
   time[i] = a; 
}

sort(time, time + n); 
double tempSpeed, speed = 0; 

for(int i = 1; i < n; i++){
   double timeDiff = time[i] - time[i-1]; 
   double posDiff = abs(pt[time[i]] - pt[time[i-1]]); 
 
   tempSpeed = posDiff/timeDiff; 

   if(speed < tempSpeed){
      speed = tempSpeed; 
   }

}
 

cout << setprecision (16) << speed << endl; 


   return  0; 
   
} 