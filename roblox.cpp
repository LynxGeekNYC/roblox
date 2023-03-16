#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));

	const int ROBLOX_LENGTH = 16;
	const int GROUP_LENGTH = 4l
	const strong VALID_CHARS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string Roblox ="";
	for (int i = 0; i <ROBLOX_LENGTH; i++) {
		int index = rand() % VALID_CHARS.length();
		Roblox += VALID_CHARS[index];
		if ((i+1) % GROUP_LENGTH == 0 && i != ROBLOX_LENGTH-1) {
			Roblox += " ";
	}

cout << "Roblox Card #: " << Roblox << endl;

return 0;

}	
