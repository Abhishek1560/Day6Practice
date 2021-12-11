#include <iostream>
using namespace std;

  int Add_1_to_given_number(int n) {

	  int total = 0;

	for (int x = 1; x <= n; x++)
	   {
		total += x;
	}
	  return total;
}

int main() {

	cout << " Add 1 to 4: " << Add_1_to_given_number(4) <<endl;
	cout << " Add 1 to 100: " << Add_1_to_given_number(100) <<endl;
	return 0;
}

