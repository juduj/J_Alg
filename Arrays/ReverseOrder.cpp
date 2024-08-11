#include <iostream>
#include <vector>

//COMPILED ON C++ 20+

int main()
{
	std::vector<int> nums = { 1,2,3,4,5,6 };
	std::vector<int> numsReversed;

	//we'd get a out of bounds error
	//if we didnt resize it to the size of the num vector.
	numsReversed.resize(nums.size());

						
	for (int i = 0; i < nums.size(); i++) {
		//index 0(1) = 6 - 0 - 1 = 5. = 6
		//index 1(2) = 6 - 1 - 1 = 4. = 5
		//see the pattern?
		numsReversed[i] = nums[nums.size() - i - 1];
	}

	for (int i = 0; i < numsReversed.size(); i++) {
		std::cout << numsReversed[i];
	}

	
}
