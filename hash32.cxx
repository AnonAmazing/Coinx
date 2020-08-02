// Cxx Program to generate random alphabets and numbers
#include <iostream>
#include <vector>
#include <random>
#include <string.h>
using namespace std; 
  
// Returns a string of random alphabets of 
// length n.
string createKey(int n)
{
	while(1)
	{
		char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
		
		string key = ""; 
    for (int i = 0; i < n; i++)  
        key = key + num[rand() % 20]; 
        
    return key;
	}
}
string createBlockHash(int n) 
{
    while(1)
    {
    char alphabet[60] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b','c', 'x', 'y', 'z', 'x', 'x', 'x', 'x'}; 
  
    string str = ""; 
    for (int i = 0; i < n; i++)  
        str = str + alphabet[rand() % 20]; 
        
    return str;
    }
} 

/* //string xRandomInt(int n)
{
	char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	string num = "";
	for (int i = 0; i < n; i++)
		num = num + numbers[rand() % 10];
	
	return num;
}// */
string createAccessKey(){
	string accessKey = createKey(16);
	
	return accessKey;
}
string createGenesisBlock()
{
		string a = createBlockHash(32);
   	string b = "<block at #x";
 	  string c = ">";
	   string genesisBlock = b + a + c;
   
   return genesisBlock;
}
string mineBlock()
{
   string a = createBlockHash(32);
   string b = "<block at #x";
   string c = ">";
   string block = b + a + c;
   
   return block;
}
string createBlock()
{
   string a = createBlockHash(32);
   string b = "<block at #x";
   string c = ">";
   string block = b + a + c;
   
   return block;
}
/* //int main()
{
	cout << X()
	 << '\n' << endl;
	 
	cout << X()
	 << '\n' << endl;
}// */
//ignore error: linker command failed with exit code 1
