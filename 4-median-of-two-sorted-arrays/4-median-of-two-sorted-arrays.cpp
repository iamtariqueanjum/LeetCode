class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> temp;
      int i = 0, j = 0;
      int sz1 = nums1.size();
      int sz2 = nums2.size();
      while(i < sz1 && j < sz2){
          if(nums1[i] <= nums2[j]){
              temp.push_back(nums1[i]);
              i++;
          }
          else{
              temp.push_back(nums2[j]);
              j++;
          }
      }
      while(i < sz1){
          temp.push_back(nums1[i]);
          i++;
      }
      while(j < sz2){
          temp.push_back(nums2[j]);
          j++;
      }
      int n = temp.size();
      double median;
      if(n%2!=0){
        median = temp[(n-1)/2];
      }
      else{
        median = ((double)temp[((n-1)/2)]+temp[((n-1)/2)+1])/2;
      }
      return median;
    }
};