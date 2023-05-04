#include <iostream>
#include "Complex.h"
#include "ComplexService.h"
using namespace std;

int main() {

ComplexService cs;
int choice = 0;
Complex c3;
std::cout << "COMPLEX1:" << std::endl;
Complex c1;
c1.read();
std::cout << "COMPLEX2:" << std::endl;
Complex c2;
c2.read();

cs.read("data.txt");

while(choice != 9) {



    cout << "MENU:" << endl;
	cout << "1. C1 + C2" << endl;
	cout << "2. C1 - C2" << endl;
	cout << "3. C1 * C2" << endl;
	cout << "4. C1 / C2" << endl;
	cout << "5. ~C1" << endl;
	cout << "6. ~C2" << endl;
	cout << "7. SAVE RESULT:" << c3 << endl;
	cout << "8. PRINT COMPLEX:" << endl;
	cout << "9. EXIT" << endl;
	cout << "CHOSE OPTION: " << endl;
	cin >> choice;

		switch (choice)
		{
		case 1:
            c3 = c1 + c2;
			cout << "C1 + C2 = " << c3 << endl;
			break;
		case 2:
			c3 = c1 - c2;
			cout << "C1 - C2 = " << c3 << endl;
			break;
		case 3:
            c3 = c1 * c2;
			cout << "C1 * C2 = " << c3 << endl;
			break;
		case 4:
            c3 = c1 / c2;
			cout << "C1 / C2 = " << c3 << endl;
			break;
		case 5: 
            c3 = ~c1;
			cout << " ~C1 = " << c3 << endl;
			break;
		case 6: 
            c3 = ~c2;
			cout << " ~C2 = " << c3 << endl;
			break;
		case 7: 
			cout << "SAVE NUMBER: " << c3 << endl;
			cs.insert(c3);
   			cs.log("data.txt");
			break;
		case 8: 
			cout << "PRINT COMPLEX: " << endl;
			cs.display();
			break;
		case 9: 
			return 1;
		default:
			cout << "NO SUCH OPTION" << endl;
			break;
		}
	}
	


    return 0;
}