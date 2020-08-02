#include <iostream>
#include <map>
#include <string>
#include <stdio.h>

#include "hash32.cxx"
#include "amount.cxx"

using namespace std;

int main()
{
	string block;
	string mBlock;
	map<string, string> db;
	map<string, string> mined;
	cout << "Welcome to Coinx Core!" << endl;
	cout << "\nEnter name..." << endl;
	string user;
	getline(cin, user);
	cout << "\nType `go` to continue..." << endl;
	string go;
	double userBalanx = 0.0;
	double blockchainBalanx = 0.0;
	double firstamount = generateAmount();
	getline(cin, go);
	if (go == "go"){
		string data = createGenesisBlock();
		blockchainBalanx = blockchainBalanx + firstamount;
		string key = "genesisBlock";
				db[key] = data;
		cout << "Genesis Block Created!";
		cout << blockchainBalanx;
		cout << endl;
		while (1){
			cout << "Inputs$" << endl;
			cout << "$ createBlock\n";
			cout << "$ mineBlocks\n";
			cout << "$ listBlocks\n";
			cout << "$ withdraw\n";
			cout << "$ info\n";
			cout << endl;
			string action;
			getline(cin, action);
			double i;
			if (action == "mineBlocks")
			{
				int j = 0;
				while (1){
					mBlock = mineBlock();
					cout << mBlock;
					cout << '\n';
					cout << endl;
					string testxyz = "<block at #x36xzxz6c9127ax3606cxb8792a237z92>0.113528";
					db[testxyz] = testxyz;
					if (db.find(mBlock) != db.end()){
				 	   double amount = generateAmount();
				 	   blockchainBalanx = blockchainBalanx + amount;
						mined[mBlock] = amount;
						cout << mined[mBlock];
						cout << "Block Mined!";
						cout << mined[mBlock];
						cout << endl;
						break;
					}
					j += 1;
				}
				
			}
			/* if (action == "createPublicBlock")
			{
				string block = createBlock();
				string accessKey = createAccessKey();
				db[accessKey] = block;
				cout << "New Block Created!" << endl;
				double amount = generateAmount();
				cout << db[accessKey] << endl;
				cout << "amount: " << amount << " " << endl;
			}*/
			if (action == "listBlocks")
			{
				cout << "Blockchain list: " << endl;
				for (auto it = mined.begin(); it != mined.end(); it++)
			{
				cout << it->first << ": " << it->second << endl;
			}
				cout << "Blockchain Balance: ";
				cout << blockchainBalanx;
				cout << endl;
			}
			if (action == "withdraw")
			{
				double withdrawAmount;
				cout << "Enter Amount: ";
				cin >> withdrawAmount;
				if (withdrawAmount > blockchainBalanx)
				{
					cout << "Error";
					cout << endl;
				}else if (withdrawAmount <= blockchainBalanx)
				{
				userBalanx = userBalanx + withdrawAmount;
				blockchainBalanx = blockchainBalanx - withdrawAmount;
				cout << "Withdrawal Successful!\n";
				cout << "Balance: " << userBalanx;
				cout << "Blockchain resource: " << blockchainBalanx;
				cout << endl;
				}
			}
			if (action == "info")
			{
				cout << user << '\n';
				cout << userBalanx << '\n';
				cout << endl;
			}
			if (action == "createBlock")
			{
				int i = 0;
				while (i < 1000000){
				block = createBlock();
				string data = "0";
				db[block] = data;
				i += 1;
				}
			}
		}
	}
}
