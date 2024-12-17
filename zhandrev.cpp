#include <iostream>
using namespace std;

int main() 
	{
	int rows = 7;
	int cols = 7;
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				
				if (j  == 3 - i || j == rows -i - -2 ) {
					cout << "# ";
					} else {
						cout << "* ";
					}
				}
			cout << endl;
		}
			return 0;
	}		