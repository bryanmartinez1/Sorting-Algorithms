#include <iostream>

using namespace std;

int * selection_sort(int nums[], int size) {
    int temp;
    for(int i = 0; i < size; i++) {
        int temp = nums[i];
        int index = i - 1;

        while(nums[index] > temp && index >= 0) {
            nums[index+1] = nums[index];
            index -= 1;
        }
        nums[index+1] = temp;
    }
    return nums;
}

int main () {
    int nums[] = {41, 23, 72, 1};
    int *sorted = selection_sort(nums, 4);

    for(int i = 0; i < 4; i++) {
        cout << sorted[i] << endl;
    } 
    
    return 0;
}