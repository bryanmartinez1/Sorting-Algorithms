#include <iostream>

using namespace std;

int * insertion_sort(int nums[], int size) {
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
    cout << "Pre Sort:\n";
    for(int i = 0; i < 4; i++) {
        cout << nums[i] << endl;
    } 
    int *sorted = insertion_sort(nums, 4);
    cout << "\nPre Sort:\n";
    for(int i = 0; i < 4; i++) {
        cout << sorted[i] << endl;
    } 
    
    return 0;
}