#include <iostream>
using namespace std;

int main(){

	//set up different categories
	int Chunli = 0;
	int	Ken = 0;
	int Ryu = 0;
	int Zangief = 0;
		char input;
		cout << "Which Street Fighter character are you!?" << endl;

	//first question
		cout << "What's your favorite color? b for blue, r for red, w for white, and p for purple" << endl;
		cin >> input;
		if (input == 'b')
			Chunli = Chunli + +1;
		else if (input == 'r')
			Ken = Ken + 1;
		else if (input == 'w')
			Ryu = Ryu + +1;
		else if (input == 'p')
			Zangief = Zangief + 1;

	//second question
		cout << "How would you describe your character? (a) Determined, (b) Serious, (c) Carefree, (d) Crazy" << endl;
		cin >> input;
		if (input == 'a')
			Chunli = Chunli + 1;
		else if (input == 'c')
			Ken = Ken + 3;
		else if (input == 'b')
			Ryu = Ryu + 1;
		else if (input == 'd')
			Zangief = Zangief + 1;

	//third question
		cout << "what is your favorite thing in the world? (a) Family, (b) Competition, (c) Your car, (d) Your muscles" << endl;
		cin >> input;
		if (input == 'a')
			Chunli = Chunli + 1;
		else if (input == 'c')
			Ken = Ken + 1;
		else if (input == 'b')
			Ryu = Ryu + 3;
		else if (input == 'd')
			Zangief = Zangief + 1;
		
	//fourth question
		cout << "How would you describe your hair style? (a) Flashy, (b) Long and beautiful, (c) Morning hair, (d) Muscle is all that matters!" << endl;
		cin >> input;
		if (input == 'b')
			Chunli = Chunli + 3;
		else if (input == 'a')
			Ken = Ken + 1;
		else if (input == 'b')
			Ryu = Ryu + 1;
		else if (input == 'd')
			Zangief = Zangief + 1;

	//fifth question
		cout << "Favorite activity? (a) Helping people out, (b) Wander around and interact with different people, (c) Practice your skills, (d) Work on you muscles" << endl;
		cin >> input;
		if (input == 'a')
			Chunli = Chunli + 1;
		else if (input == 'c')
			Ken = Ken + 1;
		else if (input == 'b')
			Ryu = Ryu + 1;
		else if (input == 'd')
			Zangief = Zangief + 3; 

	//sixth question 
		cout << "How do you dress on special occasions? (a) With class, (b) Casual, (c) My friends usually pick what I should wear, (d) Doesn't matter, nothing fits" << endl;
		cin >> input;
		if (input == 'a')
			Chunli = Chunli + 2;
		else if (input == 'b')
			Ken = Ken + 2;
		else if (input == 'c')
			Ryu = Ryu + 2;
		else if (input == 'd')
			Zangief = Zangief + 2;

	//seventh question
		cout << "What do people say about you? (a) Mysterious, (b) Honest and reliable, (c) Cocky, (d) inspirational" << endl;
		cin >> input;
		if (input == 'b')
			Chunli = Chunli + 3;
		else if (input == 'c')
			Ken = Ken + 3;
		else if (input == 'a')
			Ryu = Ryu + 3;
		else if (input == 'd')
			Zangief = Zangief + 3;

		//eighth question
		cout << "What would your special move be? (a) Kikoken!, (b) Shoryuken!, (c) Hadouken!, (d) I'd rather just not use fireballs" << endl;
		cin >> input;
		if (input == 'a')
			Chunli = Chunli + 2;
		else if (input == 'b')
			Ken = Ken + 2;
		else if (input == 'c')
			Ryu = Ryu + 2;
		else if (input == 'd')
			Zangief = Zangief + 4;
		
		//ninth question
		cout << "How do people affect you? (a) They respect me, (b) They motivate me, (c) They guide me.., (d) They admire me!" << endl;
		cin >> input;
		if (input == 'a')
			Chunli = Chunli + 2;
		else if (input == 'b')
			Ken = Ken + 2;
		else if (input == 'c')
			Ryu = Ryu + 2;
		else if (input == 'd')
			Zangief = Zangief + 2;

		//tenth question
		cout << "How do you tackle big challenges in life? (a) 'I'll do my best!,' (b) 'Bring it on!, (c) 'I will learn from it' 'I'll use my muscles!'" << endl;
		cin >> input;
		if (input == 'a')
			Chunli = Chunli + 2;
		else if (input == 'b')
			Ken = Ken + 2;
		else if (input == 'c')
			Ryu = Ryu + 2;
		else if (input == 'd')
			Zangief = Zangief + 2;

		if ((Chunli > Ryu) && (Chunli > Ken) && (Chunli > Zangief))
			cout << "You are Chun Li! A strong and independent Individual who looks to just live in a peacefull world with no crime. You will stop at nothing to make sure that those you care for are safe and living well." << endl;
		else if ((Ken > Chunli) && (Ken > Ryu) && (Ken > Zangief))
			cout << "You're Ken! You just love to live life and show off how great you are, nothing wrong with that! You're confident and can back yourself up, keep it up kid." << endl;
		else if ((Ryu > Chunli) && (Ryu > Ken) && (Ryu > Zangief))
			cout << "'The answer lies in the heart of battle' You are Ryu! You don't care how you look, and you don't care about material things, all you want to do is improve on yourself. You walk the path of a courageous warrior and you are among the elite." << endl;
		else if ((Zangief > Chunli) && (Zangief > Ken) && (Zangief > Ryu))
			cout << "Muscle Powaah AHH! You are Zangief! You are in great shape and love to show it off. You are the master of the muscles when it comes to everything, keep it up and suplex your way to the top!" << endl;
}