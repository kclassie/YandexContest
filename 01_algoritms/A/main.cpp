#include <iostream>
#include <vector>


int main() {
	std::vector<std::string> modes;
	modes.push_back("fan");
	modes.push_back("auto");
	modes.push_back("heat");
	modes.push_back("freeze");
	int tRoom, tCond;
	std::string mode;
	std::cin >> tRoom >> tCond >> mode;
	auto index = find(modes.begin(), modes.end(), mode);
	switch (index - modes.begin()) {
		case 0 : {
			std::cout << tRoom << std::endl;
			break;
		}
		case 1 : {
			std::cout << tCond << std::endl;
			break;
		}
		case 2 : {
			if (tCond > tRoom)
				std::cout << tCond << std::endl;
			else
				std::cout << tRoom << std::endl;
			break;
		}
		case 3 : {
			if (tCond < tRoom)
				std::cout << tCond << std::endl;
			else
				std::cout << tRoom << std::endl;
			break;
		}
		default : {
			std::cout << "Incorrect mode" << std::endl;
			break;
		}
	}
	return 0;
}