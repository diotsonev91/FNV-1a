#include <iostream>
#include <string>

// FNV-1a hash function
unsigned int fnv1aHash(const std::string& key) {
    const unsigned int fnvOffsetBasis = 2166136261u;
    const unsigned int fnvPrime = 16777619u;
    
    unsigned int hash = fnvOffsetBasis;
    
    for (char c : key) {
        hash ^= static_cast<unsigned int>(c);
        hash *= fnvPrime;
    }
    
    return hash;
}

int main() {
    std::string input = "Hello, World!";
    
    // Calculate the hash of the input string
    unsigned int hashValue = fnv1aHash(input);
    
    // Output the hash value
    std::cout << "Hash value: " << hashValue << std::endl;
    
    return 0;
}
