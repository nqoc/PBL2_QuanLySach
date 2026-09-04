#include "../../include/utils/FileManager.h"
#include <fstream>
using namespace std ;

bool FileManager::ensureExists(const string& filename) {
    ifstream infile(filename);
    if (infile.is_open()) return true;
    infile.close();

    ofstream create(filename, ios::app);
    if (!create.is_open()) return false;
    create.close();
    return create.good();
}

bool FileManager::readFile(const string& filename, vector<string>& outLines) {
    outLines.clear();

    ifstream infile(filename);
    if (!infile.is_open()) {
        // File chưa tồn tại, tạo mới; nếu tạo không được thì đó là lỗi thật
        return ensureExists(filename);
    }
    string line;
    while (getline(infile, line)) {
        outLines.push_back(line);
    }
    // eof là kết thúc bình thường; bad là lỗi đọc
    if (infile.bad()) return false;
    infile.close();
    return true;
}

bool FileManager::writeFile(const string& filename, const vector<string>& lines) {
    ofstream outfile(filename);
    if (!outfile.is_open()) return false;
    for (const auto& line : lines) {
        outfile << line << "\n";
    }
    outfile.close();
    return outfile.good();
}

bool FileManager::appendLine(const string& filename, const string& line) {
    ofstream outfile(filename, ios::app);
    if (!outfile.is_open()) return false;
    outfile << line << "\n";
    outfile.close();
    return outfile.good();
}
