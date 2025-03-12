class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> holder = nums1;

        holder.insert(holder.end(), nums2.begin(), nums2.end());
        sort(holder.begin(), holder.end());

        if (holder.size() % 2 != 0)
            return holder[(holder.size() - 1) / 2];
        else
            return (holder[holder.size() / 2] + holder[(holder.size() / 2) - 1]) / 2.0;
    }
};
