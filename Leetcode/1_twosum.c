/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    * returnSize = 0;
    for(int i = 0; i < numsSize - 1; ++i){
        for(int ii = i + 1; ii < numsSize; ++ii){
            if(nums[i] + nums[ii] == target){
               int* ret = (int *)malloc(sizeof(int) * 2);
                ret[0] = i; ret[1] = ii;
               * returnSize = 2;
                return ret;
            } 
        }
    }
    return NULL;
}