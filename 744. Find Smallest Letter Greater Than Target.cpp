// Binary Search
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (target >= letters.back()) return letters[0];
        int n = letters.size(), left = 0, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (letters[mid] <= target) left = mid + 1;
            else right = mid;
        }
        return letters[right];
    }
};

//STL
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto it = upper_bound(letters.begin(), letters.end(), target);
        return it == letters.end() ? *letters.begin() : *it;
    }
};

// https://www.cnblogs.com/grandyang/p/8284940.html
