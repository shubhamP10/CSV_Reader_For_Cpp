#include <iostream>
#include <vector>
#include "csv.h"
#include "person.h"

using namespace std;

int main() {
    CSV csv;
    vector<Person> personList;
    string fileName = "./data.csv";
    vector<vector<string>> csvData = csv.read_file(fileName);

    for(int row = 0; row < csvData.size(); row++) {
        Person person(csvData.at(row).at(1), csvData.at(row).at(2), csvData.at(row).at(3), csvData.at(row).at(4));
        personList.push_back(person);
    }

    personList[1].display();
}