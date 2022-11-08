#include <bits/stdc++.h>
using namespace std;
int denomination[] = { 1, 2, 5, 10, 20,
			50, 100,200, 500, 2000 };
int n = sizeof(denomination) / sizeof(denomination[0]);

void findMin(int V)
{
	sort(denomination, denomination + n);
	vector<int> ans;
	for (int i = n - 1; i >= 0; i--) {

		while (V >= denomination[i]) {
			V -= denomination[i];
			ans.push_back(denomination[i]);
		}
	}
	int counter=0;
	cout<<"(";
	for (int i = 0; i < ans.size(); i++){
        counter+=1;
        cout << ans[i] << "  ";
	}
	cout<<")  ";
		cout << counter << " ";
}

int main()
{
	int n = 2651;
	cout << "Following is minimal"
		<< " number of change for " << n
		<< ": ";
	findMin(n);
	return 0;
}

