
// print hello world using function

// 1. Hello world 
// #include<iostream>
// using namespace std;
// class HelloWorld {
// public:
//     void hw() {
//        cout << "Hello, World!"<<endl;
//     }
// };

// int main() { 
//     HelloWorld hello;    // helloworld-class hello-object
//     hello.hw(); 
//     return 0;
// }



// 2. Area of a circle
// #include<iostream>
// using namespace std;
// class area{
//     public : 
//     void area1(){
//     float r;
//     cout<<"Enter the radius of circle: ";
//     cin>>r;
//     float a=3.14*r*r;
//     cout<<"Area of circle is: "<<a;
//     }
// };
// int main(){
//     area a;
//     a.area1();
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
//     void inputNumbers() {
//         cout << "Enter the first number: ";
//         cin >> n;
//         cout << "Enter the second number: ";
//         cin >> m;
//     }
//     void swapNumbers() {
//         int temp = n; 
//         n = m;        
//         m = temp;   
//     }
//     void displayNumbers() {
//         cout << "First number after swap is: " << n << endl;
//         cout << "Second number after swap is: " << m << endl;
//     }
// };

// int main() {
//     NumberSwapper swapper; 
//     swapper.inputNumbers(); 
//     swapper.swapNumbers();  
//     swapper.displayNumbers(); 
//     return 0;
// }



// 4. Reverse of number 
// #include<iostream>
// using namespace std;
// class ReverseNumber {
//     public:
// void revnum(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int rev=0;
//     while(n!=0){
//         int r=n%10;
//         rev=rev*10+r;
//         n=n/10;
//         }
//         cout<<"Reverse of number is: "<<rev;
//         }
// };
//         int main() {
//             ReverseNumber r;
//             r.revnum();
//             return 0;
//             }



// 5. addition subratction 
// #include<iostream>
// using namespace std;
// class AddSub {
//     public:
// void addsub(){
//     int n,m,sum,diff;
//     cout<<"Enter the first number: ";
//     cin>>n;
//     cout<<"Enter the second number: ";
//     cin>>m;
//     sum=n+m;
//     diff=n-m;
//     cout<<"addition "<<sum<<endl;
//     cout<<"difference"<<diff<<endl;
//      }
// };
//     int main() {
//         AddSub a;
//         a.addsub();
//         return 0;
//         }


// 6. mult div
// #include<iostream>
// using namespace std;
// class md{
//     void multdiv(){
//         public:
//     int n,m,mult,div;
//     cout<<"Enter the first number: ";
//     cin>>n;
//     cout<<"Enter the second number: ";
//     cin>>m;
//     mult=n*m;
//     div=n/m;
//     cout<<"multiplication "<<mult<<endl;
//     cout<<"division"<<div;
//      }
// };
//     int main() {
//         md a;
//         a.multdiv();
//         return 0;
//         }


// 7.Simple calculator 
// #include<iostream>
// using namespace std;
// class calculator{
//     public:
//     void calc(){
//     int n,m,mult,div,add,sub;
//     cout<<"Enter the first number: ";
//     cin>>n;
//     cout<<"Enter the second number: ";
//     cin>>m;
//     add=n+m;
//     sub=n-m;
//     mult=n*m;
//     div=n/m;
//     cout<<"multiplication : "<<mult<<endl;
//     cout<<"division : "<<div<<endl;
//     cout<<"addition : "<<add<<endl;
//     cout<<"difference : "<<sub<<endl;
//          }

// };

//     int main() {
//         calculator a;
//         a.calc();
//         return 0;
//         }


