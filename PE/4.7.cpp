/*
 * William Wingate runs a pizza-analysis service. For each pizza, he needs
 * to record the following information:
 * The name of the pizza company, which can consist of more than one word
 * The diameter of the pizza
 * The weight of the pizza
 * Devise a structure that can hold this information and write a program
 * that uses a structure variable of that type. The program should ask the
 * user to enter each of the preceding items of information, and then the
 * program should display that information. Use cin (or its methods) and
 * cout.
 */
#include <iostream>
struct Pizza
{
    char name[40];
    double diameter;
    double weight;
};
int main()
{
    using namespace std;
    Pizza pizza;
    cout << "Enter the name of the pizza company: ";
    cin.getline(pizza.name, 40);
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> pizza.weight;

    cout << "The information of the pizza:\n";
    cout << "Company name: " << pizza.name << endl;
    cout << "Diameter: " << pizza.diameter << endl;
    cout << "Weight: " << pizza.weight << endl;

    return 0;
}
