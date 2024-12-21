// W.A.P. for String using atleast 5 different operations of string class.
#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenate
    std::string concatenated = str1 + " " + str2;
    std::cout << "Concatenated String: " << concatenated << std::endl;

    //substring
    std::string substring = "World";
    size_t found = concatenated.find(substring);
    if (found != std::string::npos) {
        std::cout << "Substring '" << substring << "' found at position: " << found << std::endl;
    } else {
        std::cout << "Substring '" << substring << "' not found." << std::endl;
    }

    //Replace part of the string
    concatenated.replace(found, substring.length(), "C++");
    std::cout << "String after replacement: " << concatenated << std::endl;

    //Convert to uppercase
    std::string upperStr = concatenated;
    std::transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    std::cout << "Uppercase String: " << upperStr << std::endl;

    //Find the length of the string
    std::cout << "Length of the string: " << concatenated.length() << std::endl;

    return 0;
}


#include <iostream>
#include <string>


int main() {
    const int rows = 6;
    const int cols = 6;
    int matrix[rows][cols];

    // Initialize the matrix with some values
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j + 1; // Filling with values for demonstration
        }
    }

    // Display the matrix
    std::cout << "6x6 Matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << "\t"; // Tab space for better formatting
        }
        std::cout << std::endl; // New line after each row
    }

    return 0;
}