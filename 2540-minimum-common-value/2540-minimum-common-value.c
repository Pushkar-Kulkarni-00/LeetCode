int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int a=0;
    int b=0;
    while(a<nums1Size && b<nums2Size){
        if(nums1[a]==nums2[b]){
            return nums1[a];
        }
        else if(nums1[a]<nums2[b])a++;
        else b++;
    }
    return -1;
}