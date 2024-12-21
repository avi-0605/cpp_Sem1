// // to check amstrong number 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     int sum=0;
//     int temp=n;
//     while(n>0)
//     {
//         int r=n%10;
//         sum=sum+r*r*r;  
//         n=n/10;
//         }
//         if(temp==sum)
//         {
//             cout<<"Number is amstrong"<<endl;
//             }
//             else
//             {
//                 cout<<"Number is not amstrong"<<endl;
//             }
//             return 0;
//             }



// CHECK FOR PRIME NUMBER USING loop and if else statement
#include<iostream>
using namespace std;
int main()
{
    int n;
        cout<<"Enter a number"<<endl;
        cin>>n;
    if(n<=1)
    {
        cout<<"Number is not prime"<<endl;
        return 0;
        }
        else
        {
            for(int i=2;i<=n;i++)
            {
                if(n%i==0)
                {
                    cout<<"Number is not prime"<<endl;
                    return 0;
                }
            }
        cout<<"Number is prime"<<endl;
        return 0;
    }
}





