#include <iostream>
#include <string>
#include <unordered_map>

int lengthOfLongestSubstring(std::string s) {
    int n = s.length();
    std::unordered_map<char, int> charIndexMap;
    int maxLength = 0, startIndex = 0;

    for (int endIndex = 0; endIndex < n; ++endIndex) {
        // If the current character is in the map and its index is greater than or equal to the start index
        if (charIndexMap.find(s[endIndex]) != charIndexMap.end() && charIndexMap[s[endIndex]] >= startIndex) {
            startIndex = charIndexMap[s[endIndex]] + 1;
        }

        // Update the index of the current character in the map
        charIndexMap[s[endIndex]] = endIndex;

        // Calculate the length of the current substring and update maxLength if necessary
        int currentLength = endIndex - startIndex + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    std::string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    std::cout << result << std::endl;  // This will output 3, which is the length of "abc"
    return 0;
}
