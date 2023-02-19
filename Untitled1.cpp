#include <iostream>

int main(){

    int nums[10], i, j;

    for(i=0;i<=9;i++){
        std::cout << "Type number " << i+1 << ":";
        std::cin >> nums[i];
    }

    std::cout << std::endl << "Current state of the array you made:" << std::endl << std::endl;

    for(i=0;i<=9;i++){
        std::cout << "-NUMBER " << i+1 << ": " << nums[i] << std::endl;
    }

    std::cout << std::endl << "The state of the array you made after bubble sorting:" << std::endl << std::endl;

    for(j=0;j<9;j++){
        for(i=0;i<9-j;i++){
            if(nums[i]>nums[i+1]){
                nums[i] = nums[i] + nums[i+1];
                nums[i+1] = nums[i] - nums[i+1];
                nums[i] = nums[i] - nums[i+1];
            }
        }
    }

    for(i=0;i<=9;i++){
        std::cout << "-NUMBER " << i+1 << ": " << nums[i] << std::endl;
    }

    return 0;

}
