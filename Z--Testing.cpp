int minSwaps(vector<int>&nums){


	int n = nums.size();
	vector<int> count(n, 0);
	for (int i = 0; i < n; i++) {
		count[i] = i;
	}
	for (int i = 0; i < n; i++) {
		if (nums[i] != i + 1) {
			int j = nums[i] - 1;
			swap(count[i], count[j]);
		}
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (count[i] != i) {
			res++;
		}
	}
	return res;

	//Find the minimum number of swaps required to sort the array in strictly increasing order.
	//If the array is already sorted, return 0.

	//Example 1:
	//Input: [3,1,2]

	//Output: 2

	//Explanation:
	//Swap the two elements with values 3 and 1.

	//Example 2:
	//Input: [2,3,4,1]


	//Output: 3

	//use binary search
	//swap first with most greater element
	//swap second with most greater element in the rest of the array

	// int n = nums.size();
	// int i = 0;
	// int j = n-1;
	// int count = 0;
	// while(i<j){
	// 	if(nums[i]<=nums[j]){
	// 		i++;
	// 	}
	// 	else{
	// 		count++;
	// 		j--;
	// 	}
	// }
	// return count;


}