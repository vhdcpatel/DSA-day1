#include <iostream>
#include <vector>

using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size() - 1) {
        result.push_back(nums);
        return;
    }
    
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); // Backtrack
    }
}

void permuteString(string& a, int l, int r) 
{ 
    // Base case 
    if (l == r)
        // print or push it to ans, which is passed as reference.  
        cout << a << endl; 
    else { 
        // Permutations made 
        for (int i = l; i <= r; i++) { 
  
            // Swapping done 
            swap(a[l], a[i]); 
  
            // Recursion called 
            permuteString(a, l + 1, r); 
  
            // backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 


int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result;

    // permute(nums, 0, result);

    // // Print all permutations for nums array.
    // for (const auto& permutation : result) {
    //     for (int num : permutation) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }

    string str = "ABC"; 
    int n = str.size(); 

    permuteString(str, 0, n - 1); 

    return 0;
}
