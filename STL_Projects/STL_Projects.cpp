// STL_Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Arrays&Hashing 


/*
* 
    Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
* 
* 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        unordered_map<int, int> set;
        sort(nums.begin(), nums.end());
        for (int num : nums)
        {
            if (set[num] >= 1)
            {
                return true;
            }
            set[num]++;
        }
        return false;
    }
};
*/