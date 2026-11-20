/*
 * DATE: 11/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/convert-the-temperature/
 * PROBLEM STATEMENT: Convert the Temperature
 
You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.
You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].
Return the array ans. Answers within 10-5 of the actual answer will be accepted.

Note that:
Kelvin = Celsius + 273.15
Fahrenheit = Celsius * 1.80 + 32.00

 * INSIGHTS GAINED FROM THIS QUESTION:
* Learned temperature conversion formulas from Celsius to Kelvin and Fahrenheit.
* Understood the use of double for handling decimal values accurately.
* Practiced storing multiple results in a vector using push_back().
 */

#include <bits/stdc++.h>
using namespace std;
vector<double> convertTemperature(double celsius) {
    vector<double> ans;
    double Kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;
    ans.push_back(Kelvin);
    ans.push_back(fahrenheit);
    return ans;
        
}

int main() {
    double celsius;
    cin >> celsius; 
    cout << convertTemperature(celsius);
    return 0;
}