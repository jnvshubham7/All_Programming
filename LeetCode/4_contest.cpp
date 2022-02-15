int remAnagram(string str1, string str2)



{

    //both string will make anagram if they have same characters 
    //remove the characters from str1 and str2 and check if they are anagrams
    //count removals and return it
    int count=0;
    int len1=str1.length();
    int len2=str2.length();
    int len=len1+len2;
    int arr[26]={0};
    for(int i=0;i<len1;i++){
        arr[str1[i]-'a']++;
    }
    for(int i=0;i<len2;i++){
        arr[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        count+=abs(arr[i]);
    }
    return count;
    

//sort both with laxicographical order
// sort(str1.begin(),str1.end());
// sort(str2.begin(),str2.end());

// //return both string 
// return str1;





























//   int size1=str1.size();
//     int size2=str2.size();


    // Given two strings S1 and S2 in lowercase, the task is to make them anagram. 
    // The only allowed operation is to remove a character from any string. 
    // Find the minimum number of characters to be deleted to make both the strings anagram. 
    // Two strings are called anagram of each other if one of them can be converted into another by rearranging its letters.



    
   //find size of both

   //run loop a to z then check this char is present in both same '
    //if yes then remove this char from both string










  

    //sort both strings with laxicographic order
    // sort(str1.begin(),str1.end());
    // sort(str2.begin(),str2.end());
    // //which char is not same in both strings remove it count++
    // int count=0;
    // for(int i=0;i<size1;i++){
    //     if(str1[i]!=str2[i]){
    //         count++;
    //     }
    // }
    // return count;


    //return differnce
   // return size1-size2;
// Your code goes here
}