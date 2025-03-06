class Solution {
public:
    void sortColors(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        int index = 0;
        while(index<=right){
            if(arr[index] == 0){
                swap(arr[index],arr[left]);
                index++,left++;
            }
            else if(arr[index] == 2){
                swap(arr[index],arr[right]);
                right--;
            }
            else{
                // means we are on el with value 1
                index++;
            }
        }
    }
};