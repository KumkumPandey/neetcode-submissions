class Solution {
public:

    bool check(int left, int right, string &s) {

        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) {
            left++;
        }

        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // All characters checked
        if (left >= right) {
            return true;
        }

        // Compare ignoring case
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        return check(left + 1, right - 1, s);
    }

    bool isPalindrome(string s) {
        return check(0, s.length() - 1, s);
    }
};