#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

int main(){
    fileio;

    int n, m, k;
    cin >> n >> m >> k;

    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int b[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i][j] = a[i][j];
        }
    }

    // add two matrices
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] += b[i][j];
        }
    }

    // print the result
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    // add two numbers
    int c = 0;
    





    return 0;
}