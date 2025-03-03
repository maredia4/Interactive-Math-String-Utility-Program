#include <iostream>
#include <string>

using namespace std;

void factorialCalculator() {
int n;
cout << "Enter a positive integer: ";
cin >> n;
if (n < 0) {
cout << "Factorial is not defined for negative numbers.\n";
return;
}

long long factorial = 1;
int i = 1;
while (i <= n) {
factorial *= i;
i++;
}
cout << "Factorial of " << n << " is: " << factorial << endl;
}

void numberPyramid() {
int rows;
cout << "Enter number of rows: ";
cin >> rows;

for (int i = 1; i <= rows; i++) {
for (int j = 1; j <= rows - i; j++) {
cout << " ";
}

for (int k = 1; k <= i; k++) {
cout << k << " ";
}
cout << endl;
}
}

void sumEvenOdd() {
int choice, n, sum = 0;

do {
cout << "Enter 1 for Sum of Even Numbers or 2 for Sum of Odd Numbers: ";
cin >> choice;
if (choice != 1 && choice != 2) {
cout << "Invalid choice. Please enter 1 or 2.\n";
}
} while (choice != 1 && choice != 2);

cout << "Enter the upper limit: ";
cin >> n;

if (choice == 1) {
for (int i = 2; i <= n; i += 2) {
sum += i;
}
cout << "Sum of even numbers up to " << n << ": " << sum << endl;
} else if (choice == 2) {
for (int i = 1; i <= n; i += 2) {
sum += i;
}
cout << "Sum of odd numbers up to " << n << ": " << sum << endl;
}
}

void reverseString() {
string input;
cout << "Enter a string: ";
cin >> input;

int start = 0;
int end = input.length() - 1;

while (start < end) {
swap(input[start], input[end]);
start++;
end--;
}

cout << "Reversed string: " << input << endl;
}

int main() {
int choice;

do {
cout << "\n========= Interactive Utility Program =========\n";
cout << "1. Factorial Calculator\n";
cout << "2. Number Pyramid\n";
cout << "3. Sum of Even or Odd Numbers\n";
cout << "4. Reverse a String\n";
cout << "5. Exit\n";
cout << "==============================================\n";
cout << "Enter your choice: ";
cin >> choice;

switch (choice) {
case 1:
factorialCalculator();
break;
case 2:
numberPyramid();
break;
case 3:
sumEvenOdd();
break;
case 4:
reverseString();
break;
case 5:
cout << "Goodbye! Exiting the program.\n";
break;
default:
cout << "Invalid choice. Please try again.\n";
}

} while (choice != 5);

return 0;
}