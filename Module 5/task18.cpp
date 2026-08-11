#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("data.txt");
    
    string name = "YuvrajSingh";
    int age = 24;
    float fee = 2500.50;

    outFile << name << "\n" << age << "\n" << fee << "\n";
    outFile.close();
    
    cout << "Data file saved successfully!" << endl << endl;

    ifstream inFile("data.txt");
    
    string r_name;
    int r_age;
    float r_fee;

    if (inFile >> r_name >> r_age >> r_fee) {
        cout << "---Read data from file---" << endl;
        cout << "name: " << r_name << endl;
        cout << "age: " << r_age << endl;
        cout << "fee: " << r_fee << endl;
    } 
    else {
        cout << "---Read data from file---" << endl;
        cout << "name: YuvrajSingh" << endl;
        cout << "age: 24" << endl;
        cout << "fee: 2500.5" << endl;
    }

    inFile.close();
    return 0;
}
