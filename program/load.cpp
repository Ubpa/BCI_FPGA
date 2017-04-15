#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	int line = 1;
	string progFileName, buff;
	cout << " program file name : ";
	cin >> progFileName;
	ifstream sysIFS( "sys.bin" );
	ifstream progIFS( progFileName.c_str() );
	ofstream initOFS( "MEMORY_INIT.v" );
	getline( sysIFS, buff );// skip the orig
	while( getline( sysIFS, buff ) ){
		initOFS << buff << endl;
		line++;
	}
	while( line <= 12288 ){
		initOFS << "0000000000000000\n";
		line++;
	}
	getline( progIFS, buff );// skip the orig
	while( getline( progIFS, buff ) ){
		initOFS << buff << endl;
		line++;
	}
	while( line <= 32768 ){
		initOFS << "0000000000000000\n";
		line++;
	}
	sysIFS.close();
	progIFS.close();
	initOFS.close();
	return 0;
}