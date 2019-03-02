#include <iostream>
#include <ctime>

int level = 1;
void game();
void play() {
	srand( time(0) );
	int rnumber = 1 + rand() % 10 * level;
	for (int a=0; a<=10; a++) {
		unsigned short int number;
		std::cout<<"Enter your number:"<<std::endl;
		std::cin>>number;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
			std::cout<<"NaN"<<std::endl;
		}
		else if (rnumber == number) {
			std::cout<<"You win!"<<std::endl;
			game();
		}
		else if (rnumber < number) {
			std::cout<<"Less!"<<std::endl;
		}
		else if (rnumber > number) {
			std::cout<<"Greater!"<<std::endl;
		}
	}
	std::cout<<"You lost"<<std::endl;
	game();
}
void game() {
	char input[1];
	std::cout<<"[Level "<<level<< "] Woul'd like to play? [p] - play, [l] - select level, [q] - quit."<<std::endl;
	std::cin>>input;
	if (input[0] == 'p') {
		std::cout<<"Starting a game..."<<std::endl;
		play();
	}
	else if (input[0] == 'l') {
		std::cout<<"Select a level (1-10)"<<std::endl;
		std::cin>>level;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
		}
		game();
	}

	else if (input[0] == 'q') {
		std::cout<<"Quiting..."<<std::endl;
		exit(0);
	}
	else {
		std::cout<<"[Error] Unknown command!"<<std::endl;
		game();
	}
}

int main() {
	game();
}
