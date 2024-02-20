#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int gender = 0;
    int age = 0;
    double weight = 0;
    double height = 0;
    
    
    cout << "If your a Male type 1 if your a Female type 2: ";
    cin >> gender;
    cout << "Input your age: ";
    cin >> age;
    cout << "Input your weight in pounds: ";
    cin >> weight;
    cout << "Input your height in feet: ";
    cin >> height;
    
    double weightKg = weight / 2.2;
    double heightCm = (height * 12) * 2.54;
    
    
    if (gender == 1)
    {
        double bmr = (10 * weightKg) + (6.25 * heightCm) - (5 * age) + 5;
        cout << fixed << setprecision(0) << "Your Basal Matabolic Rate (BMR) is : " << bmr; 
    }
    else
    {
        double bmr = (10 * weightKg) + (6.25 * heightCm) - (5 * age) - 161;
        cout << fixed << setprecision(0) << "Your Basal Matabolic Rate (BMR) is : " << bmr;  
    }
    return 0;
}