#include<iostream>
using namespace std;

int main(){
    char Op;
    float num1 , num2 , result;

    cout<<"Enter Operator: + , - , * , / : "<<endl;
    cin>>Op;

    cout<<"Enter two Operands: "<<endl;
    cin>>num1>>num2;

    switch(Op){

        case '+' :
        result = num1+num2;
        cout<<num1 << "+" << num2 << "=" <<result<<endl;
        break;

        case '-' :
        result = num1-num2;
        cout<<num1 << "-" << num2 << "=" <<result<<endl;
        break;

        case '*' :
        result = num1*num2;
        cout<<num1 << "*" << num2 << "=" <<result<<endl;
        break;

        case '/' :
        result = num1/num2;
        cout<<num1 << "/" << num2 << "=" <<result<<endl;
        break;

        default:
        cout<<"Error!! Operator is not Correct"<<endl;
        break;
        
    }

    return 0;

}