#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int main(){
    //Writing to a file
    /*ofstream myfile("testing2.txt");
    if (myfile.is_open()) {
        myfile << "This is a line. \n";
        myfile << "This is another line \n";
        myfile.close();
    }
    else cout << "Unable to open file";
    */
    // Reading a file
    string line;
    string prevLine;
    string twoLinesPrior;

    ifstream infile("LDAPtest.txt");
    if (infile.is_open()) {
        while (getline(infile, line)) {
            switch (line) {

            }
            
            /*
            if (regex_match(twoLinesPrior, regex("(.*)(attributes: 7)(.*)"))) {
                cout << "NEW THING\n\n";
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(type: distinguishedName)(.*)"))) {
                line.replace(0, line.find_first_of(":") + 2, "");
                cout << line << '\n';
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(type: name)(.*)"))) {
                line.replace(0, line.find_first_of(":") + 2, "");
                cout << line << '\n';
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(type: objectGUID)(.*)"))) {
                line.replace(0, line.find_first_of(":") + 2, "");
                cout << line << '\n';
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(type: objectSid)(.*)"))) {
                line.replace(0, line.find_first_of(":") + 2, "");
                cout << line << '\n';
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(type: sAMAccountName)(.*)"))) {
                line.replace(0, line.find_first_of(":") + 2, "");
                cout << line << '\n';
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(type: operatingSystem)(.*)"))) {
                if (regex_match(line, regex("(.*)(57696e646f777)(.*)"))) {
                    cout << "Windows 7 Russian\n";
                }
                else {
                    line.replace(0, line.find_first_of(":") + 2, "");
                    cout << line << '\n';
                }
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(type: dNSHostName)(.*)"))) {
                line.replace(0, line.find_first_of(":") + 2, "");
                cout << line << '\n';
            }
            else if (regex_match(twoLinesPrior, regex("(.*)(Response To: )(.*)"))) {
                line.replace(0, line.find_first_of(":") + 2, "");
                cout << line << '\n';
            }
            */
            twoLinesPrior = prevLine;
            prevLine = line;            
        }
        return 0;
    }
}
