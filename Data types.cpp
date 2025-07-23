#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout<<"Enter any integer: ";
	cin>>a;
	cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;
    
	float b;
	cout<<"Enter any number with decimalL: ";
	cin>>b;
	cout<<"Float = "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;
    
	string c;
	cout<<"Enter any word: ";
	cin>>c;
	cout<<"String = "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;
    
	double d;
	cout<<"Enter any number with bigger decimal: ";
	cin>>d;
	cout<<"Double = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;
    
	char e;
	cout<<"Enter any letter: ";
	cin>>e;
	cout<<"Character = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;
    
	bool f;
	cout<<"Enter any boolean value: ";
	cin>>f;
	cout<<"Boolean = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;
	return 0;
}

/*
Output:
Enter any integer: 0
Integer = 0 and size is 4 bytes
Enter any number with decimalL: 5.6
Float = 5.6 and size is 4 bytes
Enter any word: Hello
String = Hello and size is 32 bytes
Enter any number with bigger decimal: 1.41472
Double = 1.41472 and size is 8 bytes
Enter any letter: a
Character = a and size is 1 bytes
Enter any boolean value: true
Boolean = 0 and size is 1 bytes
*/
