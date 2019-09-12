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
			cout << "The numeric value is : " << number << endl << endl;
			
			
			cout << "The number converted to words is ... ";
			cout << "\n__________________________________________________________________________\n";
			cout << endl << numString;
			cout << "\n__________________________________________________________________________\n";
		}

		// Converts number to string
		void convertNumber(){
			int l = number.length();
			//string t1 = "", t2 = "", t3= "", t4 = "", t5 = "" ,t6 = "", t7 = "", t8 = "", t9 = "", t10 = "", t11 = "", t12 = "", t13 = "";
			
			int ts = 18;
			string t[ts];
			
			// get last two digits of the string and pass it in the hundred convert function
			







for (int i = 1, j = 1; j < 10; i += 3, j += 4){
	cout << "\nEntered for loop\n";
	// "i =  1   j = 1
	// "i =  4" "j = 5" 
	// "i =  7   j = 9"  13
	//       10      13 
	if (l >= i + 1){	
		string a(1, number.at(l - (i + 1)));
		string b(1, number.at(l - i));
		string s = a + b;
		if (j != 1 && a != "0"){ 
			t[j - 1] = order[((j - 1) / 4)];
			int qwe = ((j - 1) / 4);
			cout << " qwe = " << qwe << " and order[((j - 1) / 4)] is " <<  order[((j - 1) / 4)] << endl;
		}
		t[j] = hundredConvert(s);
		cout << "s is "<<s<<" and t["<<j<<"] is "<<t[j]<< endl;
	} else if (l >= i){
		string a(1, number.at(l - i));
		if (j != 1 && a != "0"){
			t[j - 1] = order[((j - 1) / 4)];
		}
		t[j] = hundredConvert(a);
		cout << "a is "<<a<<" and t["<<j<<"+1] is "<<t[j+1]<< endl;
	}
	if (l >= i + 2){
		string a(1, number.at(l - (i + 2)));
		if (j == 1){
			if(a != "0"){
				t[j + 1] = order[0];
			}
			t[j + 2] = hundredConvert(a);
		} else{
			if(a != "0"){
				t[j + 1] = order[0];
			}
			t[j + 2] = hundredConvert(a);
		}
		cout << "a is "<<a<<" and t["<<j<<"+2] is "<<t[j+2]<< endl;
	}
	cout << endl << "i is " << i << " and j is " << j << endl;
	cout << endl << "t[j] is " << t[j] ;
	cout  << " t[j+1] is " << t[j+1] ;
	cout  << " t[j+2] is " << t[j+2] ;
	cout  << " t[j+3] is " << t[j+3] << endl;
}		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			









			
			
			/*
			
			if(l >= 2) {
				
				// extract the units and tens digits from the number
				string a(1, number.at(l-2));
				string b(1, number.at(l-1));
				string s = a + b;

				// add the units and tens place to the number builder
				t1 = hundredConvert(s);
			} else if (l >=1){

				// extract the units place digit from the number
				string a(1, number.at(l-1));

				// Assign the units place
				t1 = hundredConvert(a);
			}
			
			if(l >= 3){

				// Extract the hundreds place from the number
				string a(1, number.at(l-3));
				
				// If hundreds place is not zero, add the "hundred" order to the number builder
				if (a != "0") 
					t2 = order[0];

				// Add the hundreds place to the number builder
				t3 = hundredConvert(a);			
			}


			if(l >= 5){

				// Extract the thousands place from the number
				string a(1, number.at(l-5));
				string b(1, number.at(l-4));
				string s = a + b;

				// If the thousands place is not zero , add the "thousand" order to the number builder
				if (a != "0") 
					t4 = order[1];

				// Add the thousands place to the number builder
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
				if (a != "0") 
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
*/
			 //numString 
			for (int i = ts; i > 0; i--){
				numString.append(t[ts]);
			}
			
		}
			

		string hundredConvert(string s){
			if (s == "") return "";
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

		// Initializes the window for the program
		void initialize(){
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
	NumberToString n;
	n.initialize();
	n.welcome();

	while(1){
		n.accept();
		n.convertNumber();
		n.display();
	}
}
