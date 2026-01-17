/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Example:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

To solve this problem first of all we will learn some concepts:

i) Vectors : A vector is a container that stores elements of same data type in contaginous memory ,just like an array but with dynamic resizing
   To use vector we must include 
    #include <vector>
   and to declare it
    vector<datatype> v;                                           
                                 v stands for variable name and datatype can be int,float,string etc;

ii) Unordered map: An unordered_map is a hash table based container from the standard template library (STL),that store date in key-value pair.
    it store value like:
     key -> value
    It's syntax is
     #include<unordered_map>
     unordered_map<keytype,valuetype> mp;
    for example:
     unordered_map<int, string> mp;
     mp[3] = "three";
     mp[1] = "one";
     mp[2] = "two";

    This means 3,2,1 are key values which are in integer datatype and "three","two","one" are value in string datatype

    so cout<<mp[2] will give output "two"
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution
{
    public:
    vector<int> twosums(vector <int>& nums,int target)
    {

        unordered_map<int ,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            //If num[i]+num[j]=target then, num[j]=target - num[i], we have represented num[j] as complement
            
            int complement = target - nums[i];

            //This checks if the complement value which is keyvalue in our case exists in the unordered map we created, if it exists it return the datavalue at that key value or else skip
            if(mp.find(complement) != mp.end())
            {
             return{mp[complement],i};

            }

            //here we assign the key (the data present in nums) to the value (ie value of index i)
            //in first iteration here mp[2]=0, because at index 0(our value), we have 2 in nums(our key)
            mp[nums[i]]=i;
    
        }
        return{};
    }

};

int main()
{
    Solution s;
    vector<int> nums ={2,7,11,15};
    int target =9;

    vector<int> result = s.twosums(nums,target);
    cout<<"Output: ";
    for(int x:result)
    {
        cout<<x<<" ";

    }
    return 0;

}




