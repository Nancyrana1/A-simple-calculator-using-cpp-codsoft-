#include <iostream>
using namespace std;
int main(){

// for taking input of first no.

float number1;
cout<<"enter the first number: \n";
cin>>number1;

// for taking input of second no.

float number2;
cout<<"enter the second number: \n";
cin>>number2;

//for storing result

int result;

//for taking choice from teh user

char choice;
cout<<"Enter '+' for addition \n Enter '-' for subtraction \n Enter '*' for multiplication \n Enter '/' for divisio";
cin>>choice;

switch(choice){

    // for addition

    case '+':
    result=number1+number2;
    cout<<"The addition is: ";
    break;
    
    // for subtraction

     case '-':
    result=number1-number2;
    cout<<"The subtraction is: ";
    break;
    
    // for multiplication

     case '*':
    result=number1*number2;
    cout<<"The multiplication is: ";
    break;
    
    // for division

     case '/':
    result=number1/number2;
    cout<<"The division is: ";
    break;
    
}

// for printing result

cout<<result<<endl;

    return 0;
}