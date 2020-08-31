#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
using namespace std;

void convertFile() { //reads and converts file from hex to bin
    string filename;
    ifstream textfile;
    cout << "Enter file name: " << endl;
    getline (cin, filename);
    textfile.open("filename.txt");
    cout << "Opening file..." << endl;

    string hex;
    //int hex[512], bin[512];
    
    if(!textfile.is_open()) { //if file is not open or found
    cout << "FILE NOT OPEN OR FOUND" << endl;
    system ("PAUSE");
    exit;
    }
    
    getline (textfile, hex, 'x'); //remove x in line
    hex.erase(0, 1); //remove first 0 in line
    cout << hex;
    
    while (!textfile.eof()){
          hex.erase(0, 1);
          getline (textfile, hex, 'x');
          cout << endl << hex << endl;
          for (int i = 0; i < hex.length(); i++) {
          cout << bitset<4>(hex[i]);
          //bin.push_back(hex);
          ///store converted into new binary (string) array
          //split into parts and store into registers
          }
          ///break at non-hex
    }
    //char bin[hex.length()]; ///
    //hex.copy(bin,100,0); ///
    
    //for (int i = 0; i < bin.size(); i++) {
    //    cout << bitset<4>(bin[i]) << ' '; }
    
    string bin = hex; 
    cout << endl << "BINARY: " << bin << endl;
    
    textfile.close();
    cout << endl << "File converted." << endl;
}

int main() {
    convertFile(); //convert hex to binary
    //perform functions based on binary
system ("PAUSE");
return 0;

}
