#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	for (auto i = 1; i <= n; ++i) {
		cout << "Hello World, Judge " << i << "!\n";
		;
	}

	return 0;
}