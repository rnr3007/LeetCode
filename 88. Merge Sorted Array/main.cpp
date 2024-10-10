#include <iostream>
#include <vector>
#include "Solution.cpp"

using namespace std;

int main() {
    Solution s;
    vector<int> nums1 = {-11, 4,5,6};
    vector<int> nums2 = {1,2,3, 9};
    
    vector<int> result = {};
    int m = nums1.size(), n = nums2.size();

    result.assign(m + n, 0);
    for (int i = 0; i < nums1.size(); i++) {
        result.at(i) = nums1.at(i);
    }
    nums1 = result;

    s.merge(nums1, m, nums2, n);
    cout << "\nResult: ";
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1.at(i) << " ";
    }
    return 0;
}