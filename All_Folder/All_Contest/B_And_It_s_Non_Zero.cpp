#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[] = {1, 3, 4, 7, 8, 9};
    // Create a vector from array
    vector<int> numbers(arr, arr + sizeof(arr) / sizeof(int));
     vector<int>::iterator it;
    // Print all elements of vector on console
    for(const auto & elem: numbers) {
        if(elem == 7)
            it = find(numbers.begin(), numbers.end(), elem);
            numbers.erase(it);
           
        cout<<elem<< ", ";
    }
    
    return 0;
}



//  vector<int> myvector{ 1, 2, 3, 4, 5 };
//     vector<int>::iterator it;
 
//     it = myvector.begin();
//     myvector.erase(it);
 
//     // Printing the Vector
//     for (auto it = myvector.begin(); it != myvector.end(); ++it)
//         cout << ' ' << *it;