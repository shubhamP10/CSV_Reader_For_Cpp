#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class CSV {
    public:
        vector<vector<string>> read_file(string file_name);
};

vector<string> split(const string& line, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(line);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

vector<vector<string>> CSV::read_file(string file_name) {
    fstream file_handler;
    file_handler.open(file_name, ios::in);
    vector<string> details;
    string line, word;
    vector<vector<string>> csv_data;

    getline(file_handler, line);

    while(!file_handler.eof()) {
        details.clear();
        getline(file_handler, line);
        stringstream ss(line);
        while(getline(ss, word)) {
            details = split(word, ',');
            csv_data.push_back(details);
        }
    }
    file_handler.close();
    return csv_data;
}