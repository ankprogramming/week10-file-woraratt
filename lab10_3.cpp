#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
        /* code */
        int cmd;
        string name;
        string line;
        ofstream writeFile("std.txt", fstream::app);
        ifstream readFile ("std.txt");

        do {
            cout << "Menu" << endl;
            cout << "1. add student." << endl;
            cout << "2. list student." << endl;
            cout << "3. quit." << endl;
            cout << "Please enter menu : ";
            cin >> cmd;

            if (cmd == 1){
                cout << "Enter Std name : ";
                cin >> name;

                if (writeFile.is_open()){
                    writeFile << name << endl;
                    writeFile.close();
                }else {
                cout << "Unable to open File";}
        } else if(cmd == 2) {
            readFile.open("std.txt");
            if (readFile.is_open()){
                while (getline(readFile, line))
                {
                    cout << line << endl;
                }
                readFile.close();
            }
        } else {
            break;
        }
    } while(1);

        return 0;
}
