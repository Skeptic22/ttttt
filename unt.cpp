#include<iostream>
using namespace std;

int main(){
	int MTH201,MTH203,STA201,CSC201,CSC203,CSC205,CSC213,GST201,GST203;
	
	int sum; 
	float average;
	
	sum = MTH201+MTH203+STA201+CSC201+CSC203+CSC205+CSC213+GST201+GST203;
	average = sum/9;
	
	cout << "Enter The Score For MTH201: \n";
	cin >> MTH201;
	
	cout << "Enter The Score For MTH203: \n";
	cin >> MTH203;
	
	cout << "Enter The Score For STA201: \n";
	cin >> STA201;
	
	cout << "Enter The Score For CSC201: \n";
	cin >> CSC201;
	
	cout << "Enter The Score For CSC203: \n";
	cin >> CSC203;
	
	cout << "Enter The Score For CSC205: \n";
	cin >> CSC205;
	
	cout << "Enter The Score For CSC213: \n";
	cin >> CSC213;
	
	cout << "Enter The Score For GST201: \n";
	cin >> GST201;
	
	cout << "Enter The Score For GST203: \n";
	cin >> GST203;
	
	cout << "The Sum is: " << sum << endl;
	
	cout << "The Average is: "<< average << endl;
	
	
	 
	
	return 0;
}
