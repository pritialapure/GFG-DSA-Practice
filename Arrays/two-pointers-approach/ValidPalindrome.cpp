

// Problem: Palindrome String
// GFG: https://www.geeksforgeeks.org/problems/palindrome-string0817/1



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

