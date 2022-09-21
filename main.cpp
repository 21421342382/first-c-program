#include <iostream>
using namespace std;

int fist_val, second_val;
string output;

int main(){
    cout<<"Hi This is a C++ Program That Helps you to find out the output of two numbers "<<endl;
    cout<<""<<endl;
    cout<<"Enter First Value "<<endl;
    cin>>fist_val;
    cout<<"You Entered "<<fist_val<<endl;
    cout<<""<<endl;
    cout<<"Enter Second Value "<<endl;
    cin>>second_val;
    cout<<"The Second value is = "<<second_val;
    cout<<""<<endl;
    cout<<"Chosse 1 for addition 2 for substraction and 3 for multiplication"<<endl;
    cin>>output;
    if(output == "1"){
        cout<<"The Addition of "<<fist_val <<" and "<<second_val<<" is "<< fist_val + second_val<<endl;
    }else if(output == "2"){
        cout<<"The Substraction of "<<fist_val <<" and "<<second_val<<" is "<< fist_val - second_val<<endl;
    }if(output == "3"){
        cout<<"The Multiplication of "<<fist_val <<" and "<<second_val<<" is "<< fist_val * second_val<<endl;
    }

}