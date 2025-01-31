#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <YYYY-MM-DD>\n";
        return 1;
    }

    string target_date = argv[1];
    ifstream log_file("test_logs.log");
    if (!log_file) {
        cerr << "Error: Unable to open log file.\n";
        return 1;
    }

    string output_filename = "output/output_" + target_date + ".txt";
    ofstream output_file(output_filename);
    if (!output_file) {
        cerr << "Error: Unable to create output file.\n";
        return 1;
    }

    string line;
    while (getline(log_file, line)) {
        if (line.compare(0, target_date.size(), target_date) == 0) {
            output_file << line << '\n';
        }
    }

    log_file.close();
    output_file.close();
    cout << "Logs extracted to " << output_filename << '\n';
    return 0;
}
