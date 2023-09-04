#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}

int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}


int main()
{
    string a="11";
    string b="1";
    int c=stoi(a);
    int d=stoi(b);
    int e=binaryToDecimal(c);
    int f=binaryToDecimal(d);
    int g=e+f;
    bitset<sizeof(int) * 2> binaryNumber(g);
    cout << "Binary representation: " << binaryNumber << std::endl;
    // string nnu=to_string(binaryNumber);
    // cout<<nnu;
    int number = 42;
    
    std::string binaryString = "11010110"; // Replace with your binary string

    // Create a std::bitset from the binary string
    std::bitset<32> bitset(binaryString);

    // Convert the std::bitset to a string
    std::string convertedString = bitset.to_string();

    std::cout << "Binary string: " << binaryString << std::endl;
    std::cout << "Converted string: " << convertedString << std::endl;
    return 0;
}