#include <iostream>
using namespace std;

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main() {

	int num1 = 0; // intializing the first number we will be taking from the user
	int num2 = 0; // intializing the second number we will be taking from the user
	string operation; // intializing a string to take in what arthemitic operation to use

	cout << "Enter the first number: " << endl;  // Asking the user to enter first number
	cin >> num1;   // taking in the first number
	cout << endl;  // going onto the next line

	cout << "Enter the second number: " << endl;  // Asking the user to enter second number
	cin >> num2;   // taking in the second number
	cout << endl;  // going onto the next line


	cout << "What operation do you want to do? (add, multiply, divide, or subtract): " << endl;  // Asking the user what arthmetic operation they want to do
	cin >> operation;   // taking in the the answer to the question above
	cout << endl;  // going onto the next line

	if (operation == "add"){

		cout << "The answer is: " << add(num1, num2);

	}
	else if (operation == "subtract") {

		cout << "The answer is: " << subtract (num1, num2);

	 }
	else if (operation == "multiply") {

		cout << "The answer is: " << multiply(num1, num2);

	}
	else if (operation == "divide") {

		cout <<  "The answer is: " << divide(num1, num2);

	}
	else {

		cout << "This operation is not valid!";
	}

	
}

int add(int x, int y) {

	int answer = x + y;

	return answer;
}

int subtract(int x, int y) {

	int answer = x - y;

	return answer;
}

int multiply(int x, int y) {

	int answer = x * y;

	return answer;
}

int divide(int x, int y) {

	int answer = x / y;

	return answer;
}