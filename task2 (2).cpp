//token categorization
#include<iostream>
#include<string>

using namespace std;

int main() {

string expression;
string operators;

     cout << "Enter an expression: ";
    cin >> expression;

for (char ch : expression) {
if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
            operators += ch;
        }
    }

    if (!operators.empty()) {

        cout << "Operators are: " << operators << endl;
    } else {
        cout << "No operators found" << endl;
}


    return 0;
}
