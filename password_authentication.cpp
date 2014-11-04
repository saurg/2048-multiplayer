#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

typedef unordered_map<string,string>  stringmap;

//This function takes string and return its hash value

size_t create_hash(string password)
{

        stringmap mymap;

        stringmap::hasher fn = mymap.hash_function();

        return  fn(password);
}


int main()
{


	string password,username;

	ofstream file;

	// Opening file in append mode
	// file name login.txt
	
	file.open("login.txt",ios::app);
	
	// User getline so that even spaces can be included while entering username and password
	// But there should not be any spaces in username

	cout << "Username:";
	getline(cin,username);
	cout << "Password:";
	getline(cin,password);

	// Writing USERNAME PASSWORD_HASH_VALUE in file login.txt
	
	file << username << " "<< create_hash(password) << endl;


	return 0;
}

