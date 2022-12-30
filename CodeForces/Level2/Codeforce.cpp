#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back
#define pf pop_front
#define ll long long int

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, a;
    cin >> n >> m;
    bool arr[n] = {false};

    queue<int> list;
    map<int, int> tracker;

    for (int i = 0; i < n; i++) {
        cin >> a;
        list.push(a);
    }

    int i = 0;
    while (list.size() != 1){
        if (arr[i] == true){
            continue;
        }
        if (list.front() <= m){
            list.pop();
            arr[i] = true;
        }
        else{
            int x = list.front() - m;
            list.pop();
            list.push(x);
        }
        if (i == n - 1){
            i = 0;
        }
        i++;
    }

    for (int j = 0; j < n; j++) {
        if (!arr[j]){
            cout << j + 1 << endl; 
        }
        
    }

    return 0;
}