#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string processMarkdown(const string& markdown) {
    string html;
    stringstream ss(markdown);
    string line;

    bool inPreformatted = false;
    vector<string> preformattedLines;