#include<iostream>
#include<string>
#include<sstream>
#include<stdexcept>

using namespace std;

class NumberToString{
	private:
		string number;
		string numString;
		string twenty[20] = {"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ", "nineteen "};
		string tens[10] = {"","ten ","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninty "};
		string order[10] = {"hundred ","thousand ", "million ","billion ", "trillion ", "", "", ""};
	public:
		// Default Constructor
		NumberToString(){}

		// Accepts input from user
		void accept(){
			cout << "\nEnter number:  ";
			cin >> number;
			cout << endl;
		}

		// Outputs result to console
		void display(){
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "The numeric value is : " << number << "\n\n";
			cout << "The number converted to words is ... ";
			cout << "\n__________________________________________________________________________\n";
			cout << endl << ">>   " <<  numString;
			cout << "\n__________________________________________________________________________\n";
		}

		// Converts number to string
		void convertNumber(){
			int l = number.length();	// Store length of number
			int ts = 18;			// Maximum size of number to convert
			string t[ts];			// Create array of empty strings 

			// Iterates through the digits and convert the digits to words.
			// The words are then stored in the string array to be later joined and displayed
			
			for (int i = 1, j = 1; j < ts; i += 3, j += 4){
				if (l >= i + 1){	
					string a(1, number.at(l - (i + 1)));
					string b(1, number.at(l - i));
					if (j != 1 && a != "0") t[j - 1] = order[((j - 1) / 4)];
					t[j] = hundredConvert(a+b);
				} else if (l >= i){
					string a(1, number.at(l - i));
					if (j != 1 && a != "0")	t[j - 1] = order[((j - 1) / 4)];
					t[j] = hundredConvert(a);
				}
				if (l >= i + 2){
					string a(1, number.at(l - (i + 2)));
					if (j == 1){
						if(a != "0") t[j + 1] = order[0];
						t[j + 2] = hundredConvert(a);
					} else{
						if(a != "0") t[j + 1] = order[0];
						t[j + 2] = hundredConvert(a);
					}
				}
			}		

			// Builds the final number using the words created in the iterator loop
			
			for (int i = ts-1; i > 0; i--){
				numString.append(t[i]);
			}

		}

		// Converts a number less than 100 to words
		// The critical function which makes the program work
	
		string hundredConvert(string s){
			if (s == "") return ""; 
			if (stoi(s) < 20) return twenty[stoi(s)]; 
			string a, b; a = s.at(0); b = s.at(1);
			return tens[stoi(a)] + twenty[stoi(b)];
		}

		// Welcomes user to the program
		void welcome(){
			cout << "\nWelcome to ACTS Number to String Converter\n";
		}

		// Initializes the window for the program
		void initialize(){
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		}
};

// MAIN FUNCTION
int main(){
	NumberToString n;
	n.initialize();
	n.welcome();

	while(1){
		NumberToString num;
		try{
			num.accept();
			num.convertNumber();
			num.display();
		}
		catch (invalid_argument e){cout << "Please enter a valid number..." << endl;}
	}
}
