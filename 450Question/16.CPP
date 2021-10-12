#include<bits/stdc++.h>
using namespace std;
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

void printRepeating(int arr[], int size)
{
    int i;
   
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }
}

int main(){
    fileio;
    

   printRepeating(arr, arr_size);

    return 0;
}