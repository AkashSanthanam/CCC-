#include <bits/stdc++.h>
using namespace std; 

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define pb push_back
#define pf pop_front 
#define ll long long int


int main(){

int n;
cin >> n; 
int p[n]; 
int w[n]; 
int d[n]; 
ll min = 1000000001, max = 0; 
for(int i = 0; i < n + 1; i++){
    cin >> p[i]; 
    cin >> w[i]; 
    cin >> d[i];

    if(p[i] > max){
        max = p[i]; 
    }

    if(p[i] < min){
        min == p[i]; 
    }
}

ll product[max - min]; 
for(int i = 0; i < (max - min); i++){
    product[i] = 0; 
}

for(int i = min; i <= (max - min); i++){
    for(int k = 0; k < n; k++){
        product[k-min] += (abs(abs(i-p[i-min] -d[i-min])))/ w[i-min]; 
    }
}

ll min2 = 1000000001; 

for(int i = 0; i < (max - min); i++){
    if(product[i] < min){
        min2 = product[i]; 
    }
}

cout << min2 << endl; 




    return 0;
}