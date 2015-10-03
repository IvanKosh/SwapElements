/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 1 Октябрь 2015 г., 20:56
 */

#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
using namespace std;

int main(int argc, char *argv[]) {
    freopen(argv[1], "r", stdin);
	int i, j, temp, scanresult, n, k;
	list<int> myList;
	char ch;
	string s;

S:
	myList.clear();
	i = 0;
	scanresult = scanf("%i", &temp);
	if (scanresult == 0) {
		goto E;
	}
	while(scanresult == 1) {
		++i;
		myList.push_back(temp);
		scanresult = scanf("%i", &temp);
	}
	
	for (list<int>::iterator it=myList.begin(); it != myList.end(); ++it) {
		cout << *it << ' ';
	}
	
	scanresult = scanf("%c", &ch);
	cout << ch;
	
M:
	scanresult = scanf("%i-%i", &n, &k);
	cout << '[' << scanresult << ']';
	if (scanresult == 2) {
		cout << ' ' << n << '-' << k;
	}
	
	scanresult = scanf(", %i-%i", &n, &k);
	cout << '[' << scanresult << ']';
	if (scanresult == 2) {
		cout << ' ' << n << '-' << k;
	}
	
	
	
	cout << endl;
	goto S;
E:
	return 0;
}