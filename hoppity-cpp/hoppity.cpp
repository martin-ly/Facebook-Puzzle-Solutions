#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
	std::ifstream input(argv[1]);
	int n;
	input >> n;
	for(int i = 1; i <= n; ++i) {
		if(i % 3 == 0 && i % 5 == 0) std::cout << "Hop\n";
		else if(i % 3 == 0) std::cout << "Hoppity\n";
		else if(i % 5 == 0) std::cout << "Hophop\n";
	}
	return 0;
}
