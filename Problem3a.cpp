#include <vector>
#include <iostream>
using namespace std;
void zigzagSort(vector<int> &nums) {
	int n = nums.size();
	int temp = nums[0];
	bool nextGreaterThanCurrent;
	bool nextShouldBeGreaterThanCurrent = true;
	for(int i = 0; i < n-1; i++){
		if (i%2 == 0) { nextShouldBeGreaterThanCurrent = false;
		} else nextShouldBeGreaterThanCurrent = true;
		if (nums[i+1] < nums[i] && nextShouldBeGreaterThanCurrent == false){
			temp = nums[i];
			nums[i] = nums[i+1];
			nums[i+1] = temp;
		}
		if (nums[i+1] > nums[i] && nextShouldBeGreaterThanCurrent == true){
			temp = nums[i];
			nums[i] = nums[i+1];
			nums[i+1] = temp;
		}
		//nextShouldBeGreaterThanCurrent = !nextShouldBeGreaterThanCurrent;
	}
	// your implementation goes here

}
/*
int main(void){
	vector<int> myVec;
	int myArr[7] = {3, 1, 4, 5, 3, 7, 2};
	for (int i = 0; i < sizeof(myArr)/sizeof(int); i++){
		myVec.push_back(myArr[i]);
	}
	zigzagSort(myVec);
	for(int i = 0; i < sizeof(myArr)/sizeof(int); i++){
		cout << myVec[i] <<" , ";
	}
	cout << endl;
	return 0;

}*/