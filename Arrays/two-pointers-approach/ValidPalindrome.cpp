class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int start =0;
        int end = s. size()-1;
        while(start<=end){
            if(s[start]!=s[end]) return false;
            else 
            start++;
            end--;
        }
        return true;
    }
};

// Given a string s, return true if the string is a palindrome. Otherwise, return false.

//A string is considered a palindrome if it reads the same forwards and backwards.

//Examples :

//Input: s = "abba"
//Output: true
//Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.
//Input: s = "abc" 
//Output: false
//Explanation: "abc" does not read the same forwards and backwards, so it is not a palindrome.
//Constraints:
//1 ≤ s.size() ≤ 106
//The string s contains only lowercase english letters (a-z).