#include <iostream>
#include <stack>
#include <vector>
#include <string>

int evalRPN(std::vector<std::string>& tokens) {
    std::stack<int> st;
    
    for (const std::string& token : tokens) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            // If the token is a number, push it onto the stack
            st.push(std::stoi(token));
        } else {
            // If the token is an operator, pop the top two values from the stack
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();
            
            // Perform the operation and push the result back onto the stack
            if (token == "+") {
                st.push(operand1 + operand2);
            } else if (token == "-") {
                st.push(operand1 - operand2);
            } else if (token == "*") {
                st.push(operand1 * operand2);
            } else if (token == "/") {
                // Handle division with truncation toward zero
                st.push(operand1 / operand2);
            }
        }
    }
    
    // The final result will be on top of the stack
    return st.top();
}

int main() {
    // Example usage:
    std::vector<std::string> tokens = {"2", "1", "+", "3", "*"};
    int result = evalRPN(tokens);
    std::cout << "Result: " << result << std::endl; // Output should be 9
    return 0;
}
