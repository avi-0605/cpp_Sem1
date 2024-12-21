//conver code using constructor 
// 1. Hello world 
// #include<iostream>
// using namespace std;
// class HelloWorld {
//     public:
//     HelloWorld() {
//         cout<<"Hello World"<<endl;
//         }
//         };
//         int main() {
//             HelloWorld obj;
//             return 0;
//             }


// 2. Area of a circle
// #include<iostream>
// using namespace std;
// class area{
//     public :
//     area(){
//             float r=2;
//     cout<<"Enter the radius of circle: ";
//     cin>>r;
//     float a=3.14*r*r;
//     cout<<"Area of circle is: "<<a;
//     }
// };
// int main(){
//     area a;
//     return 0;
//     }



// 3.swapping of two numbers
// #include<iostream>
// using namespace std;
// class NumberSwapper {
// private:
//     int n; 
//     int m; 
// public:
// NumberSwapper(int a, int b) {
//         cout << "Enter the first number: ";
//         cin >> n;
//         cout << "Enter the second number: ";
//         cin >> m;
//         int temp = n; 
//         n = m;        
//         m = temp;   
//         cout << "First number after swap is: " << n << endl;
//         cout << "Second number after swap is: " << m << endl;
//     }
// };
// int main(){
//     NumberSwapper obj(0, 0);
//     return 0;
//     }



// 4. Reverse of number 
#include<iostream>
using namespace std;
class ReverseNumber {
    public:
    ReverseNumber() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rev=0;
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
        }
        cout<<"Reverse of number is: "<<rev;
        }
};
        int main() {
            ReverseNumber r;
            return 0;
            }
