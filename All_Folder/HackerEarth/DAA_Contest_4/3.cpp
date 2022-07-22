



#include <iostream>
using namespace std;
int main() {
	string s1,s2;
	cin>>s1>>s2;

	int dp1[26]={0}, dp2[26]={0};

	int n1=s1.size(), n2=s2.size();

	for(int i=0;i<n1;i++)
	{




// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;

// 	// Sort both strings
// 	sort(str1.begin(), str1.end());
// 	sort(str2.begin(), str2.end());

// 	// Compare sorted strings
// 	for (int i = 0; i < n1; i++)
// 	if (str1[i] != str2[i])
// 		return false;

// 	return true;
// }


		dp1[s1[i]-'a']++;
	}

	for(int i=0;i<n2;i++)
	{
		dp2[s2[i]-'a']++;
	}

	bool bb=1;

    

// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;

// 	// Sort both strings
// 	sort(str1.begin(), str1.end());
// 	sort(str2.begin(), str2.end());

// 	// Compare sorted strings
// 	for (int i = 0; i < n1; i++)
// 	if (str1[i] != str2[i])
// 		return false;

// 	return true;
// }

	for(int i=0;i<26;i++)
	{
		if(dp1[i]>dp2[i])
			bb=0;
	}
	
	
	bb==1 ? cout<<"true" : cout<<"false";

	cout<<endl;

    

// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;

// 	// Sort both strings
// 	sort(str1.begin(), str1.end());
// 	sort(str2.begin(), str2.end());

// 	// Compare sorted strings
// 	for (int i = 0; i < n1; i++)
// 	if (str1[i] != str2[i])
// 		return false;

// 	return true;
// }

	return 0;
}



















































// // C++ program to check whether two strings are
// // Permutations of each other
// #include <bits/stdc++.h>
// using namespace std;

// /* function to check whether two strings are
// Permutation of each other */
// bool arePermutation(string str1, string str2)
// {
// 	// Get lengths of both strings
// 	int n1 = str1.length();
// 	int n2 = str2.length();

// 	// If length of both strings is not same,
// 	// then they cannot be Permutation
// 	if (n1 != n2)
// 	return false;

// 	// Sort both strings
// 	sort(str1.begin(), str1.end());
// 	sort(str2.begin(), str2.end());

// 	// Compare sorted strings
// 	for (int i = 0; i < n1; i++)
// 	if (str1[i] != str2[i])
// 		return false;

// 	return true;
// }

// /* Driver program to test to print printDups*/
// int main()
// {

//     int t;
//     cin>>t;
//     while(t--)
//     {
// string str1,str2;
// cin>>str1>>str2;


// 	if (arePermutation(str1, str2))
// 	cout<<"True"<<" "<<endl;
// 	else
// 		cout<<"False"<<" "<<endl;

    
//     }
	

// 	return 0;
// }















// // #include<bits/stdc++.h>
// // using namespace std;




















// //     bool checkInclusion(string s1, string s2) {
// //         unordered_map< char, int >mp;    //Use hashmap to store the frequencies of all the characters present in string s1.
// //         for(auto it : s1){
// //             mp[it]++;
// //         }
// //         int count = mp.size();         //Use the count variable to see if all of the characters in the map have the same frequency, indicating that an anagram has been found.
// //         int i = 0, j = 0;
// //         int k = s1.size();             //Window Size
// //         while(j < s2.size()){
// //             if(mp.find(s2[j]) != mp.end()){      //If a character is found that already exists in the map, reduce its frequency by one.
// //                 mp[s2[j]]--;
// //                 if(mp[s2[j]] == 0){     //If the frequency of a specific character on the map is 0, it means that all occurrences of that character is found inside the current window size.
// //                     count--;
// //                 }
// //             }
// //             if(j-i+1 < k){
// //                 j++;
// //             }
// //             else if(j-i+1 == k){
// // 				if(count == 0){    //Anagram found 
// // 					return true;  
// // 				}
// //                 if(mp.find(s2[i]) != mp.end()){  //Check if that character is present in the map while sliding the window, then increase its frequency by one, as we decreased its frequency when we first met it while crossing the window.
// //                     mp[s2[i]]++;
// //                     if(mp[s2[i]] == 1){
// //                         count++;
// //                     }
// //                 }
// //                 i++;
// //                 j++;
// //             }
// //         }
// //         return false;
// //     }





// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);
    
// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         string s1,s2;
// //         cin>>s1>>s2;
// //         cout<<checkInclusion(s1,s2)<<endl;
// //     }
// //     return 0;
// // }


