// Create Banking system.
#include<iostream>
#include<string>
using namespace std;
class base1{
    public :
    string name;
    int accountnumber,balance;
    void askinfo() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Account number : ";
    cin >> accountnumber ;
    cout << "Enter Balance : ";
    cin >> balance;
    cout << "Name : "<<name<<endl;
    cout << "Account Number : "<<accountnumber<<endl ;
    cout << "Balance : "<<balance<<endl;
    }
};
class base2:public base1{
    public:
    int amount;
    void credit() {
        cout << "Enter amount to be credit: "<<endl;
        cin >> amount;
        balance += amount;
            cout << "Amount credited successfully"<< endl;
            cout<<"Updated Balance: " << balance << endl;
}
};
class base3:public base2{
    public:
    void debit() {
        cout << "Enter amount to be debited: "<<endl;
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance"<< endl;
            }
            else {
                balance=balance-amount;
                cout << "Amount debited successfully"<< endl;
                cout<<"Updated Balance: " << balance << endl;
                }
    }
    };
int main(){
    base3 b;
    b.askinfo();
    b.credit();
    b.debit();
    return 0;

}


