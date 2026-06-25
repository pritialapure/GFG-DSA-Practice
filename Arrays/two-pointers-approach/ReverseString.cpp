// Problem: Reverse String
// GFG: https://www.geeksforgeeks.org/problems/reverse-a-string/1

class Solution {
public:
    string reverseString(string& s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }

        return s;
    }
};