#include <iostream>
#include <array>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nums;
    vector <int> a(nums);
    int target;
    int x=0;
    int y=0;
    int n = nums.size;
    for (int i=0;i < nums.size();i++)
    {
        for(int j=i+1;j<nums.size(); j++)
        { 

            if(nums[i] + nums[j] == target){
            x = i;
            y = j;
            }
        }   
    
    
 
    }  
    cout<<{x,y}<<endl;

    return 0;
}