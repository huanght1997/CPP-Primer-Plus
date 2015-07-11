/* 
 * Do Programming Exercise 7 but use new to allocate a structure instead of
 * declaring a structure varaible. Also have the program request the pizza
 * diameter before it requests the pizza company name.
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
    Pizza * ptr = new Pizza;
    cout << "Enter the diameter of the pizza: ";
    cin >> ptr->diameter;
    cin.get();
    cout << "Enter the name of the pizza company: ";
    cin.getline(ptr->name, 40);
    cout << "Enter the weight of the pizza: ";
    cin >> ptr->weight;

    cout << "The information of the pizza:\n";
    cout << "Company name: " << ptr->name << endl;
    cout << "Diameter: " << ptr->diameter << endl;
    cout << "Weight: " << ptr->weight << endl;
    delete ptr;
    
    return 0;
}
