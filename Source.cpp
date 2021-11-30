#include<iostream>
using namespace std;
int main() {
	int num,a,b,c=96,d;
	char ch;
	cout << "Enter height :";
	cin >> a;
	cout << "Enter Width :";
	cin >> b;
	for (int i = 0; i < a; i++)
	{
		for ( d = 1; d <= b; d++) {
			while(c<=117+1)
			{

					if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117) {
						ch = static_cast<char>(c);
						c = c + 1;
						cout << ch;
						break;
					}
					else {
						c = c + 1;
					}
					if (c> 117+1)
					{
						c = 97;

					}
					
			}

		}
		d = 1;
		cout << endl;
			
		}
	}

