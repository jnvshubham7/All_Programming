#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "inputfile.mtx";
    std::ifstream file(filename);

    if (file.is_open()) {
        std::cout << "File is open and can be read." << std::endl;

        // Read and print the file contents
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }

        file.close(); // Close the file when done
    } else {
        std::cout << "File cannot be opened or read." << std::endl;
    }

    return 0;
}
