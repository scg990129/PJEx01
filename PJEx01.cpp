//CS116PJEx01
//20230411
//Shun Hoi Yeung
//900494756

#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    // Input weight and height from the user
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;

    // Calculate BMI
    bmi = (weight * 703) / (height * height);

    // Display BMI
    cout << "Your BMI is: " << bmi << endl;

    // Determine weight category based on BMI
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (bmi < 25) {
        cout << "Normal weight" << endl;
    }
    else if (bmi < 30) {
        cout << "Overweight" << endl;
    }
    else {
        cout << "Obese" << endl;
    }

    return 0;
}

