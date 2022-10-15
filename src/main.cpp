#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	for (auto i = 0; i < n + 2; ++i) {
		cout << '@';
	}
	cout << '\n';

	for (auto i = 0; i < n; ++i) {
		cout << '@';
		for (auto j = 0; j < n; ++j) {
			cout << ' ';
		}
		cout << '@';
		cout << '\n';
	}

	for (auto i = 0; i < n + 2; ++i) {
		cout << '@';
	}

	return 0;
}