
#include <vector>
#include <numeric>
using namespace std;

class Solution {
    
public:
    //C++20: int xorBeauty(span<const int> nums) const 
    int xorBeauty(const vector<int>& nums) const {

        //C++17: reduce(nums.begin(), nums.end(), 0, [](int x, int y) {return x ^ y;});
        return accumulate(nums.begin(), nums.end(), 0, [](int x, int y) {return x ^ y;});
    }
};
