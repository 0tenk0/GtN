#include <iostream>
#include <stdio.h>

void game();
void play() {
	int a=0;
	int rnumber = rand() % 10+1;
	for (a=0; a<=10; a++) {
		unsigned short int number;
		std::cout<<"Enter your number:"<<std::endl;
		std::cin>>number;
		if (rnumber == number) {
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
	char input;
	std::cout<<"[Level 1] Woul'd like to play? [p] - play, [l]- select level, [q] - quit."<<std::endl;
	std::cin>>input;
	if (input == 'p') {
		std::cout<<"Starting a game..."<<std::endl;
		play();
	}
	else if (input == 'l') {
		std::cout<<"Selecting a level..."<<std::endl;
	}

	else if (input == 'q') {
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
