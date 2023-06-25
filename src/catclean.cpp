#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

void catClean(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream input(inputFile);
    if (!input) {
        std::cout << "Error opening input file: " << inputFile << std::endl;
        return;
    }

    std::ostream* output = nullptr;
    std::ofstream outputFileStream;
    if (!outputFile.empty()) {
        outputFileStream.open(outputFile);
        if (!outputFileStream) {
            std::cout << "Error opening output file: " << outputFile << std::endl;
            return;
        }
        output = &outputFileStream;
    } else {
        output = &std::cout;
    }

    std::string line;
    while (std::getline(input, line)) {
        if (!line.empty() && line[0] != '#' && line[0] != '\n') {
            *output << line << std::endl;
        }
    }

    input.close();
    if (outputFile.empty()) {
        output->flush();
    } else {
        outputFileStream.close();
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Specify a TXT file." << std::endl;
        return 0;
    }

    std::string inputFile = "";
    std::string outputFile = "";

    // Check command line arguments
    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "-o") {
            if (i + 1 < argc) {
                outputFile = argv[i + 1];
                i++;  // Skip the next argument after the -o option
            }
        } else {
            inputFile = arg;
        }
    }

    if (inputFile.empty()) {
        std::cout << "Specify a TXT file." << std::endl;
        return 0;
    }

    catClean(inputFile, outputFile);

    return 0;
}
