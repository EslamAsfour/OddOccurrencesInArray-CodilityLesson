
// Finaal Answer 100%


#include <algorithm>
#include <vector>

int solution(std::vector<int> &A) {
	sort(A.begin(), A.end());
	int N = A.end() - A.begin();
	int i = 0;
	while (N >i)
	{
		if (A[i] == A[i + 1])
			i = i + 2;
		else
			return A[i];
	}
	return 0;
}