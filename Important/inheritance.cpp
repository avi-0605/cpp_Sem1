//  single inheritance 


// #include<iostream>
// using namespace std;
// class demo1 
// {
//     public:
//     int a ;
//     void getdata()
//     {
//         cout<<"Enter the number ";
//         cin>>a;

//     }
// };
// class demo2:public demo1
// {
//     public:
//     void display()
//     {
//     cout<<"Value of s "<<a;
//     }
// };

// int main (){
//     demo2 d;
//     d.getdata();
//     d.display();
//     return 0;

// }





//  multilevel inheritance 


// #include<iostream>
// using namespace std;
// class demo1 
// {
//     public:
//     int a ;
//     void getdata()
//     {
//         cout<<"Enter the value of a ";
//         cin>>a;

//     }
// };
// class demo2 :public demo1
// {
//     public:
//     int c ;
//     void square()
//     {
//         c=a*a;

//     }
// };
// class demo3:public demo2
// {
//     public:
//     void display()
//     {
//     cout<<"Squar of a is  "<<c;
//     }
// };

// int main (){
//     demo3 d;
//     d.getdata();
//     d.square();
//     d.display();
//     return 0;

// }



// multiple inheritance 

// #include<iostream>
// using namespace std;
// class demo1 
// {
//     public:
//     int a ;
//     void getdata()
//     {
//         cout<<"Enter first value  ";
//         cin>>a;

//     }
// };
// class demo2
// {
//     public:
//     int b;
//     void getdata1()
//     {
//         cout<<"Enter second value  ";
//         cin>>b;

//     }
// };
// class demo3 :public demo2,public demo1 
// {
//     public:
//     int c ;
//     void add()
//     {
//         c=a+b;
//     }
//         void display()
//     {
//     cout<<"Addition : "<<c;
//     }
// };
// int main (){
//     demo3 d;
//     d.getdata();
//     d.getdata1();
//     d.add();
//     d.display();
//     return 0;

// }


// hierarchical inheritance 
// #include<iostream>
// using namespace std;
// class demo1 
// {
//     public:
//     int a ;
//     void getdata1()
//     {
//         cout<<"Enter first value  ";
//         cin>>a;

//     }
// };
// class demo2: public demo1 
// {
//     public:
//     int b;
//     void getdata2()
//     {
//         cout<<"Enter second value  ";
//         cin>>b;

//     }
// };
// class Hbase:public demo1 
// {

// };
// int main (){
//     demo2 d;
//     Hbase h;
//     d.getdata1();
//     d.getdata2();
//     h.getdata1();


// }



// hybrid inheritance 

// #include <iostream>
// using namespace std;

// class base1 {
// public:
//     int a;
//     void getdata1() {
//         cout << "Enter number for a: ";
//         cin >> a;
//         cout << "Value for a: " << a << endl;
//     }
// };

// class base2 : public base1 {
// public:
//     int b;
//     void getdata2() {
//         cout << "Enter number for b: ";
//         cin >> b;
//         cout << "Value for b: " << b << endl;
//     }
// };

// class add: public base2 {
//     public:
//     int c;
//     void adddition(){
//     c=a+b;
//     cout<<"Addition:"<<c;
//     }
// };

// class hbase : public base2 {
// public:
//     int c;
//     void getdata3() {
//         cout << "Enter number for c: ";
//         cin >> c;
//         cout << "Value for c: " << c << endl;
//     }
// };

// int main() {
//     // hbase h;
//     add d;
//     d.getdata1();
//     d.getdata2();
//     d.adddition();

//     return 0;
// }


#include <iostream>
using namespace std;

class base1 {
public:
    int a;
    void getdata1() {
        cout << "Enter number for a: ";
        cin >> a;
        cout << "Value for a: " << a << endl;
    }
};

class base2 {
public:
    int b;
    void getdata2() {
        cout << "Enter number for b: ";
        cin >> b;
        cout << "Value for b: " << b << endl;
    }
};

class derived1 : public base1, public base2 {

};

class hbase : public derived1 {
public:
    int c;
    void getdata3() {
        cout << "Enter number for c: ";
        cin >> c;
        cout << "Value for c: " << c << endl;
    }
    void display() {
        cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    }
};

int main() {
    hbase h;
    h.getdata1();
    h.getdata2();
    h.getdata3();
    h.display();
    return 0;
}