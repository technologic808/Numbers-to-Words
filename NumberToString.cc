#include<iostream>
#include<string>
#include<sstream>

using namespace std;


class NumberToString{
	private:
		string number;
		string numString;
		string twenty[20] = {"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ", "nineteen "};
		string tens[10] = {"","ten ","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninty "};
		string order[10] = {"hundred ","thousand ", "hundred thousand ", "million ","billion ", "trillion "};

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
			cout << "___________________________________  \n\n";
			cout << numString << "\n___________________________________\n";
		}

		// Converts number to string
		void convertNumber(){
			int l = number.length();
			string t1 = "", t2 = "", t3= "", t4 = "", t5 = "" ,t6 = "", t7 = "", t8 = "", t9 = "", t10 = "", t11 = "", t12 = "", t13 = "";
			// get last two digits of the string and pass it in the hundred convert function
			
			if(l >= 2) {
				string a(1, number.at(l-2));
				string b(1, number.at(l-1));
				string s = a + b;
				t1 = hundredConvert(s);
			} else if (l >=1){
				string a(1, number.at(l-1));
				t1 = hundredConvert(a);
			}

			if(l >= 3){
				
				string a(1, number.at(l-3));
				if (a != "0") 
					t2 = order[0];
				t3 = hundredConvert(a);			
			}

			if(l >= 5){
				string a(1, number.at(l-5));
				string b(1, number.at(l-4));
				string s = a + b;
				if (s != "00" && a != "0") 
					t4 = order[1];
				t5 = hundredConvert(s);
			} else if (l >= 4){
				string a(1, number.at(l-4));
				if (a != "0")
					t4 = order[1];
				t5 = hundredConvert(a);
				
			}

			if(l >= 6){
				string a(1, number.at(l-6));
				if(a != "0")
					t6 = order[0];
				t7 = hundredConvert(a);			
			}
			
			
			if(l >= 8){
				string a(1, number.at(l-8));
				string b(1, number.at(l-7));
				string s = a + b;
				if (s != "00" && a != "0") 
					t8 = order[2];
				t9 = hundredConvert(s);
			} else if (l >= 7){
				string a(1, number.at(l-7));
				if (a != "0")
					t8 = order[2];
				t9 = hundredConvert(a);
			}


			if(l >= 9){
				string a(1, number.at(l-9));
				if(a != "0")
					t10 = order[0];
				t11 = hundredConvert(a);			
			}
			
			
			if(l >= 11){
				string a(1, number.at(l-11));
				string b(1, number.at(l-10));
				string s = a + b;
				if (s != "00" && a != "0") 
					t12 = order[3];
				t13 = hundredConvert(s);
			} else if (l >= 10){
				string a(1, number.at(l-10));
				if (a != "0")
					t12 = order[3];
				t13 = hundredConvert(a);
			}




			numString = t13 + t12 + t11 + t10 + t9 + t8 + t7 + t6 + t5 + t4 + t3 + t2 + t1;
			
		}
			

		string hundredConvert(string s){
			int i = stoi(s), j, k;
			string a, b;
			if (i < 20) return twenty[i];
			else{
				a = (s.at(0));
				j = stoi(a);
				b = s.at(1);
				k = stoi(b);
				return tens[j] + twenty[k];
			}

		}

		// Welcomes user to the program
		void welcome(){
			cout << "\nWelcome to ACTS Number to String Converter\n";
		}
};




int main(){
	/*

	NumberToString dummy;
	
	string s = "10";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	s = "5";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	s = "15";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	s = "30";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	s = "72";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	s = "92";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	s = "17";
	cout << "\n" << dummy.hundredConvert(s) << endl;


	s = "78";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	s = "99";
	cout << "\n" << dummy.hundredConvert(s) << endl;

	*/

	while(1){
		NumberToString n;
		n.welcome();
		n.accept();
		n.convertNumber();
		n.display();
	}
}
