#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        std::vector<int> nums3;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                nums3.push_back(nums1[i]);
                i++;
            }
            else {
                nums3.push_back(nums2[j]);
                j++;
            }
            k++;
        }

        while (i < m) {
            nums3.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            nums3.push_back(nums2[j]);
            j++;
        }

        nums1 = nums3;
    }
};

int main() {
    Solution solution;
    
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    std::vector<int> nums2 = {2, 5, 6};
    
    int m = 3;
    int n = 3; 
    
    solution.merge(nums1, m, nums2, n);

    std::cout << "Merged Array (nums1): ";
    for (int num : nums1) {
        std::cout << num << " ";
    }

    return 0;
}
