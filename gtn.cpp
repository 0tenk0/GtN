#include <iostream>
#include <stdio.h>

int intro() {
	char input;
	std::cout<<"[Level 1] Woul'd like to play? [p] - play, [l]- select level, [q] - quit."<<std::endl;
	std::cin>>input;
	if (input == 'p') {
		std::cout<<"Starting a game..."<<std::endl;
	}
	else if (input == 'l') {
		std::cout<<"Selecting a level..."<<std::endl;
	}

	else if (input == 'q') {
		std::cout<<"Quiting..."<<std::endl;
	}

	else {
		std::cout<<"[Error] Unknown command!"<<std::endl;
	}
}
int main() {
	intro();
}
