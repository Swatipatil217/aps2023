// CPP program to find sum of bitwise AND
// of all subarrays

#include <iostream>
#include <vector>
using namespace std;

// Function to find the sum of
// bitwise AND of all subarrays
int findAndSum(int arr[], int n)
{
	// variable to store
	// the final sum
	int sum = 0;

	// multiplier
	int mul = 1;

	for (int i = 0; i < 30; i++) {
		// variable to check if
		// counting is on
		bool count_on = 0;

		// variable to store the
		// length of the subarrays
		int l = 0;

		// loop to find the contiguous
		// segments
		for (int j = 0; j < n; j++) {
			if ((arr[j] & (1 << i)) > 0)
				if (count_on)
					l++;
				else {
					count_on = 1;
					l++;
				}

			else if (count_on) {
				sum += ((mul * l * (l + 1)) / 2);
				count_on = 0;
				l = 0;
			}
		}

		if (count_on) {
			sum += ((mul * l * (l + 1)) / 2);
			count_on = 0;
			l = 0;
		}

		// updating the multiplier
		mul *= 2;
	}

	// returning the sum
	return sum;
}

// Driver Code
int main()
{

	int arr[] = { 7, 1, 1, 5 };

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << findAndSum(arr, n);

	return 0;
}
