// VirusTesting30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	bool virus = false;
	string username;
	cout << "What is your name? ";
	cin >> username;
	if (username == "John") {
		virus = true;
	}
	else if (username == "john") {
		virus = true;
	} else{
		virus = false;
		cout << " You are a lucky man ";
	}

	if (virus == true) {


		for (int i = 0; i <=10; i++) {
			string x = to_string(i);
			string name = "C:\\Users\\krama\\Desktop\\ retard alert "+username;
			string name2 = ".txt";
			name.append(x);
			cout << name << endl;
			string root = name + name2;

			ofstream fout(root);
			fout << "Retard alert! Retard alert You are a dipshit";
			fout.close();
		}
	}
    return 0;
}

