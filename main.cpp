/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 1 Октябрь 2015 г., 20:56
 */

#include <iostream>
#include <fstream>
#include <vector>
//#include <iterator>
//#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
    freopen(argv[1], "r", stdin);
	int i, j, temp, scanresult, n, k;
	vector<int> myVector;
	char ch;
	string s;

S:
//	for (list<int>::iterator it=myList.begin(); it != myList.end(); ++it) {
//		cout << *it << ' ';
//	}
//	cout << endl;
	
	

	myVector.clear();
	i = 0;
	scanresult = scanf("%i", &temp);
	if (scanresult == 0) {
		goto E;
	}
	while(scanresult == 1) {
		++i;
		myVector.push_back(temp);
		scanresult = scanf("%i", &temp);
	}
	
//	for (list<int>::iterator it=myList.begin(); it != myList.end(); ++it) {
//		cout << *it << ' ';
//	}
	
//	for (j = 0; j < i; j++) {
//		cout << myVector[j] << ' ';
//	}
	
	scanresult = scanf("%c", &ch);
	//cout << ch << ' ';
	
M:
	scanresult = scanf("%i%c", &temp, &ch);
	if (scanresult == 2) {
		switch (ch) {
			case '-':
				n = temp;
				goto M;
			case ',':
				k = temp;
				//cout << n << '-' << k << ", ";
				iter_swap(myVector.begin() + n, myVector.begin() + k);
				goto M;
			case '\n':
				k = temp;
				//cout << n << '-' << k << '\n';
				iter_swap(myVector.begin() + n, myVector.begin() + k);
				for (j = 0; j < i; j++) {
					cout << myVector[j] << ' ';
				}
				cout << endl;
				goto S;
		}
	}
E:
	return 0;
}