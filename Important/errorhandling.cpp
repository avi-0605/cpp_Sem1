// #include<iostream>
// using namespace std;
// int main(){
//     try{
//     int a,b;
//     cout<<"Enter value for a ";
//     cin>>a;
//     cout<<"Enter value for b ";
//     cin>>b;
//     if (b==0)
//     {
//         throw 404;
//     }
//     int c=a/b;
//     cout<<c;
//     }
//     catch(...)
//     {
//         cout<<"can not divide by 0"<<endl;
//         cout<<"error found";
//     }
//     return 0;
// }




//positive negative number 

// #include<iostream>
// using namespace std ;
// int main (){
//     try{
//         int n;
//         cout<<"Enter a number :";
//         cin>>n;
//         if (n>0)
//         {
//             cout<<"Number entered is Positive ";
//         }
//         else if(n==0)
//         {
//             throw 404;
//         }
//         else
//         {
//             cout<<"Number entered is Negative";
//         }
//         }
//     catch(int num)
//         {
//             cout<<"number entered is 0)"<<endl;
//             cout<<"error found"<<num;
//         }
//         return 0;
//     }




//even odd
// #include<iostream>
// using namespace std ;
// int main(){
//     try{
//         int n;
//         cout<<"Enter a number :";
//         cin>>n;
//         if (n%2==0 and n!=0)
//         {
//         cout<<"Number entered is even ";
//         }
//         else if(n==0)
//         {
//             throw 404;
//         }
//         else
//         {
//             cout<<"Number entered is odd ";
//         }
    
//         }

//     catch(int num)
//         {
//             cout<<"number entered is 0)"<<endl;
//             cout<<"error found"<<num;
//         }
//         return 0;
//     }


//swapping 2 numbers 
// #include <iostream>
// using namespace std;
// int main() {
//     int x,y;
//     cout<<"Enter value for x ";
//     cin>>x;
//     cout<<"Enter value for y ";
//     cin>>y;
//     try {
//         if (x == y) {
//             throw invalid_argument("Values are the same, cannot swap.");
//         }
//         int temp = x;
//         x = y;
//         y = temp;

//         if (x == y) {
//             throw runtime_error("Swap failed.");
//         }

//         cout << "Swapped values: " << x << ", " << y << endl;
//     } catch (const invalid_argument& e) {
//         cout << "Invalid argument: " << e.what() << endl;
//     } catch (const runtime_error& e) {
//        cout << "Runtime error: " << e.what() << endl;
//     } catch (const exception& e) {
//        cout << "An error occurred: " << e.what() << endl;
//     }

//     return 0;
// }

// Palindrome
// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;
//     try {
//         if (cin.fail()) {
//             throw "Invalid input!";
//         }
//         int n = s.length();
//         bool is_palindrome = true;
//         for (int i=0; i<n/2; i++) {
//             if (s[i] != s[n-i-1]) {
//                 is_palindrome = false;
//                 break;
//             }
//         }
//         if (is_palindrome) {
//             cout << "Palindrome" << endl;
//         }
//         else {
//             cout << "Not a palindrome" << endl;
//         }
//     }
//     catch (const char* msg) {
//         cerr << msg << endl;
//     }
//     return 0;
// }



//factorial 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     try {
//         if (cin.fail()) {
//             throw "Invalid input!";
//         }
//         int fact = 1;
//         for (int i=1; i<=n; i++) {
//             fact *= i;
//         }
//         cout << "Factorial = " << fact << endl;
//     }
//     catch (const char* msg) {
//         cerr << msg << endl;
//     }
//     return 0;
// }



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
    cout<<"Account number should be 10 digits .."
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
