#include <bits/stdc++.h>
using namespace std;
void calcFiboTerms(vector<int>& fiboTerms, int K)
{
	int i = 3, nextTerm;
	fiboTerms.push_back(0);
	fiboTerms.push_back(1);
	fiboTerms.push_back(1);
	while (1) {
		nextTerm = fiboTerms[i - 1] + fiboTerms[i - 2];
		if (nextTerm > K)
			return;

		fiboTerms.push_back(nextTerm);
		i++;
	}
}
int findMinTerms(int K)
{
	vector<int> fiboTerms;

	calcFiboTerms(fiboTerms, K);

	int count = 0, j = fiboTerms.size() - 1;
	while (K > 0) {

		count += (K / fiboTerms[j]);
		K %= (fiboTerms[j]);

		j--;
	}

	return count;
}
int main()
{
	int K = 17;

	cout <<"For the value:17\n"<<findMinTerms(K)<<" \n\n";

	K = 25;

	cout << "For the value:25\n"<<findMinTerms(K)<<" \n\n";

	return 0;
}