Question
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
  
  
  solution
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int size=m+n;
        int even=0,mid;
        if(size%2==0){
            even=1;
            mid=size/2;
        }
        else {
            mid=size/2+1;
        }
        int i=0,j=0,k=0,med=0;
        while(k<mid&&i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                med=nums1[i++];
            }
            else{
                med=nums2[j++];
            }
            k++;
        }
        while(k<mid){
            if(i<m){
                med=nums1[i++];
            }
            else{
                med=nums2[j++];
            }
            k++;
        }
        if(!even){
            return (double)med;
        }
        else{
            double x=med,y;
            if(i<m&&j==n){
                y=nums1[i];
            }
            else if(j<n&&i==m){
                y=nums2[j];
            }
            else if(nums1[i]<=nums2[j]){
                y=nums1[i];
            }
            else{
                y=nums2[j];
            }
            return (x+y)/2;
        }
        
        
    }
