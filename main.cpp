#include <iostream>
using namespace std;
	int main() {
		//Texts
		string mText = R"(
###~~~ Bank ~~~###
Your ATM Options:
[1] See Your Vallet
[2] See Your Debts
[3] Your Last Bank Feelings
[4] Pay Your Debts
[5] Producers
[6] Exit
Your Choice: )";
		string sText = "Your Debts Sum is ";
		string vText = "Your Money is ";
		string fText = " Your last feeling is ";
		string cantPayText = R"(You don't have enough money to 
pay this debt. Work more and come back to pay.
Have a good time!)";
		//Variables
		int debt1 = 453;
		int vallet = 370;
		string lastFeel = "Bored";
		//C İn Variables
		int mGir,pDebt;
		string payGir;
		//Start
		cout << mText;
		cin >> mGir;
		if (mGir == 1) {
			cout << "Your Vallet İs " << vallet;
			if (vallet <= 25) {
				cout << " Your money is so little. You must go to work." << endl;
			}
			else if (vallet <= 0) {
				cout << " You dont have money" << endl;
			}
			else {
				cout << " You Have a Great Money!" << endl;
			}
		}
		else if (mGir == 2) {
			cout << "Your Debts: " << debt1 << endl;
			cout << "Do you want to pay your debts? (yes/no): ";
			cin >> payGir;
			if (payGir == "yes") {
				if (vallet >= debt1) {
					vallet = vallet - debt1;
					cout << "Your Debt Was Payed! New Balance is " << vallet << endl;
				}
				else if(vallet < debt1) {
						cout << cantPayText << endl;
					}
				}
			else if(payGir == "no") {
				cout << "Have a great time sir!" << endl;
				}
				else {
					cout << "İnvalid Option! (yes/no)" << endl;
				}
			}

		else if (mGir == 3) {
			cout << fText << lastFeel << endl;
			if(lastFeel == "Bored") {
				cout << "How about listening to some music?" << endl;
			}
			else if(lastFeel == "Happy") {
				cout << "We look forward to your coming back to our bank!";
			}
			else {
				cout << "Unkown Choice. Please change it lastFeel variable.";
			}
		}
		else if(mGir == 4) {
			cout << "Your Debt is " << debt1 << "\nDo you want to pay? (yes/no): ";
			cin >> payGir;
			if(payGir == "yes") {
				if(vallet >= debt1) {
					vallet = vallet - debt1;
					cout << "Your debt has payed! New balance is" << vallet << endl;
				}
				else if (vallet < debt1) {
					cout << cantPayText << endl;
				}
			}
			else if(payGir == "no") {
				cout << "Have a great time sir!" << endl;
			}
			else {
				cout << "İnvalid Option! (yes/no)" << endl;
			}
			}
		else if(mGir == 5) {
			cout << "Producer:\nMade by 13 Years old Frixxions" << endl;
		}
		else if(mGir == 6) {
			return 0;
		}
		else {
			cout << "İnvalid Option!\nPlease enter (1-6 İnt)";
		}
return 0;
			}

