#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int iM = 0, iN = 0, temp = 0;
        if (m == 0) {
            nums1 = nums2;
        } else {
            while (iM < m || iN < n) {
                if (iM < m && iN < n) {
                    if (nums2.at(iN) <= nums1.at(iM + iN)) {
                        temp = nums1.at(iM + iN);
                        nums1.at(iM + iN) = nums2.at(iN);
                        for (int j = m + n - 1; j > iM + iN; j--) {
                            nums1.at(j) = j == iM + iN + 1 ? temp : nums1.at(j - 1);
                        }
                        iN++;
                    } else {
                        iM++;
                    }
                } else if (iM < m && iN == n) {
                    iM++;
                } else if (iM == m && iN < n) {
                    if (nums2.at(iN) <= nums1.at(iM + iN - 1)) {
                        temp = nums1.at(iM + iN - 1);
                        nums1.at(iM + iN - 1) = nums2.at(iN);
                        for (int j = m + n - 1; j > iM + iN - 1; j--) {
                            nums1.at(j) = j == iM + iN + 1 ? temp : nums1.at(j - 1);
                        }
                    } else {
                        nums1.at(iM + iN) = nums2.at(iN);
                    }
                    iN++;
                }
            }
        }
    }
};