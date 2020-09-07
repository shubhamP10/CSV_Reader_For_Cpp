#include <iostream>
#include <vector>
#include "csv.h"

using namespace std;

int main() {
    CSV csv;
    string fileName = "./empData.csv";
    vector<vector<string>> csvData = csv.read_file(fileName);

    for(int i = 0; i < csvData.size(); i++) {
        for(int j = 0; j < csvData.at(i).size(); j++){
            cout << csvData.at(i)[j];
        }
     cout << endl;   
    }
}