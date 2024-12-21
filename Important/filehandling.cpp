// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;


//to create and write data into a file  

// int main(){
//     ofstream fout("demo.txt");
//     string str_name="Welcome to ITM";
//     fout<<str_name;
//     fout.close();
//     return 0;
// }




// read file 


// int main(){
//     ifstream fin("demo.txt");
//     string str_name;
//     while(!fin.eof())
//     getline(fin,str_name);
//     cout<<str_name;
//     fin.close();
//     return 0;

// }


// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
    // int main()
    // {
    //     ifstream fin("demo1.txt");
    //     string myname="Aavani";
    //     while (!fin.eof()){
    //     getline(fin, myname);
    //     cout << myname;
    //     }     
    //     fin.close();
    //     return 0;
    // }



// create and write file 
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     fstream my_file("demo3.txt",ios::out);
//     if(!my_file){
//         cout<<"Failed to open file for append";
//         return 0;
//     }
//     my_file << "Line 4" <<endl;
//     my_file << "Line 5" <<endl;
//     my_file << "Line 6" <<endl;
//     my_file.close();
    
//     return 0;

// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;


// to read the file 

// int main()
// {
//     fstream my_file("demo3.txt",ios::in);
//     string line;
//     while (!my_file.eof())
//     {
//         getline(my_file, line);
//         cout << line << endl;
//     }
//     my_file.close();
//     return 0;
// }




// Append the file 
// int main(){
//     fstream my_file("demo3.txt",ios::app);
//     if (!my_file){
//         cout<<"Failed to open file for append";
//         return 0;

//     }
//     my_file << "Line 10" <<endl;
//     my_file.close();
//         return 0;

// }





// Append the file 
// int main(){
//     fstream my_file("demo3.txt",ios::app|ios::in|ios::out);
//     if (!my_file){
//         cout<<"Failed to open file for append";
//         return 0;

//     }
//     my_file << "Line 11" <<endl;
//     my_file.close();
//         return 0;
//         string line;

// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename="demo3.txt";
    fstream my_file(filename,ios::in | ios::out);
    if(!my_file){
        cout<<"Error";
        return 1;
    }
    my_file <<"This is a new line of text.\n";
    my_file.close();
    ifstream readFile(filename);
    if (!readFile.is_open()){
        cout<<"file is not found"<<endl;
        return 1;
    }
    string line;
    cout << "File contents:" <<std :: endl;
    while (getline(readFile,line)) {
        cout << line <<endl;
    }
    readFile.close();
    return 0;
}