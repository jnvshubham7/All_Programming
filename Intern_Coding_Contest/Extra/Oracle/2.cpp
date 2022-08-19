//https://leetcode.com/discuss/interview-question/2386496/Oracle-or-OA-or-Complementary-Pairs
// Question 1
// Given a list of unique words, return the number of complementary pais in the given list, so that the concatenation of the two words words[i] + words[j] is a palindrome.

// Example 1:
// Input: words = ["abcd","dcba","lls","s","sssll"]
// Output: 4
// Explanation: The 4 palindromes are ["dcbaabcd","abcddcba","slls","llssssll"]
// Example 2:
// Input: words = ["bat","tab","cat"]
// Output: 2
// Explanation: The 2 palindromes are ["battab","tabbat"]
// Function Description
// Complete the function
// countComplementaiyPairs in the editor below.

// countComplementaiyPairs has the following parameters:
// string stringData[n],the strings to pair

// Returns
// longint: the number of complementary pairs that can be formed

// Constraints
// • 1 <= n <10^5
// • 1<=length(stringData[i])<=3x10^5
// • 1<=sum of the length of strings in stringData<=3x10^5
// • All strings consist of lowercase English characters only.

// ✅✅This Questions is Same as Question on leetcode 336. Palindrome Pairs
// Approach 1 : Brute Force
// Approach 2 : Trie
// Approach 3 : Bit Masking