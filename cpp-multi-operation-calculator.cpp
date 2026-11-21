#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char alphabet;
	cout<<"a-addition"<<"\n";
	cout<<"s-subtraction"<<"\n";
	cout<<"m-multiplication"<<"\n";
	cout<<"d-division"<<"\n";
	cout<<"p-power"<<"\n";
	cout<<"What mathematical operation do you want to me to perform?"<<"\n"; 
	cin>>alphabet;
	double number;
	double result;
	cout << "Enter your first number: ";
    cin >> result; 
	cout<<"Enter numbers with spaces in between(enter -6769 to stop)= ";
	switch(alphabet)
	{
		case 'a':
	while(cin>>number&&number!=-6769) 
	{
		result+=number; //addition
	}
	break;
	
	case 's':
	while(cin>>number&&number!=-6769)
	{
		result-=number; //subtraction
	}
	break;
	
	case 'm':
	while(cin>>number&&number!=-6769)
	{
		result*=number; // multiplication
	
	}
	break;
	
	case'd':
	while(cin>>number&&number!=-6769)
	{
		 if(number == 0)
        {
            cout << "Not defined"; //when one of the value is 0 and is the divisor, gives output as not defined
            return 0;
        }

        result /= number; //division
	}
	break;
	
	case 'p':
	while(cin>>number&&number!=00)
	{
		result=pow(result,number); //power
	}
	break;
	
	default:
            cout << "Invalid operation";
            return 0;
	}
	cout<<"Answer= "<<result; //gives the final operator after compiling all cases
	
	
	
	return 0;
}
