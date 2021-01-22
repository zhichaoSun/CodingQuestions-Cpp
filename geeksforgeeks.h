//
// Created by zhichao on 20 Jan 2021.
//

#ifndef C__PLAYGROUND_GEEKSFORGEEKS_H
#define C__PLAYGROUND_GEEKSFORGEEKS_H

#include <vector>
#include <string>

using namespace std;

class geeksforgeeks {
public:

    static int triplets(int arr[], int n);
    static vector<int> subArrayGivenSum(int arr[], int n, int s);
    static int maxSubarraySum(int arr[], int n);
    static int missingNumber(vector<int>& array, int n);

    static bool rotateString(string s1, string s2);
    static string reverseWords(string S);
    static vector<string> permutationsStrs(string s);
    static string longestPalindrome(string s);
    static string removeAdjacentDuplicates(string s);


};


#endif //C__PLAYGROUND_GEEKSFORGEEKS_H
