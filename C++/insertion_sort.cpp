#include <iostream>

using namespace std;

int * insertion_sort(int nums[], int size) {
    int temp;
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(nums[i] > nums[j]) {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
            else continue;
        }
    }
    return nums;
}

int main () {
    int nums[] = {41, 23, 72, 1};
    int *sorted = insertion_sort(nums, 4);

    for(int i = 0; i < 4; i++) {
        cout << sorted[i] << endl;
    } 
    
    return 0;
}