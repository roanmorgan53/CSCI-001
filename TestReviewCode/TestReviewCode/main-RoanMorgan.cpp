//Roan Morgan
//CSCI 001 Test Review
#include<iostream>
#include<string>
#include<vector>  //stl
using namespace std;

class Computer {
private:
    string brand;
    int quantityInStock;
    double wholesalePrice;
public:
    Computer();
    Computer(string argBrand, int argQuant, double argWholesale);

    string getBrand(void);
    void setBrand(string arg);
    int getQuantity(void);
    void setQuantity(int arg);
    double getWholesalePrice(void);
    void setWholesalePrice(double arg);

    void printProperties(void);
    double retailPrice(double arg);

};

void printInventory(vector<Computer>& arg);

int main(void) {

    const int n = 300;
    string userResponse;
    string brands[5] = { "msi","hp","surface","lenovo","dell" };
    Computer temp;
    vector<Computer> inventory;

    for (int i = 0; i < n; i++) {
        temp.setBrand(brands[rand() % 5]);
        temp.setQuantity(1 + rand() % 10);
        temp.setWholesalePrice(200 + rand() % 1500);
        inventory.push_back(temp);
    }

    cout << inventory.size() << endl;
    printInventory(inventory);

    return(0);
}

void printInventory(vector<Computer>& arg) {
    for (int i = 0; i < arg.size(); i++) {
        arg[i].printProperties();
        cout << "Retail Price: $" << arg[i].retailPrice(35) << endl;
    }
}

//constructors
Computer::Computer() {
    setBrand("No Brand");
    setQuantity(0);
    setWholesalePrice(0.0);
}
Computer::Computer(string argBrand, int argQuant, double argWholesale) {
    setBrand(argBrand);
    setQuantity(argQuant);
    setWholesalePrice(argWholesale);
}
//accessors
string Computer::getBrand(void) {
    return(brand);
}
void Computer::setBrand(string arg) {
    brand = arg;
}
int Computer::getQuantity(void) {
    return(quantityInStock);
}
void Computer::setQuantity(int arg) {
    quantityInStock = arg;
}
double Computer::getWholesalePrice(void) {
    return(wholesalePrice);
}
void Computer::setWholesalePrice(double arg) {
    wholesalePrice = arg;
}
//utility methods
void Computer::printProperties(void) {
    cout << "Brand: " << getBrand() << endl;
    cout << "Quantity: " << getQuantity() << endl;
    cout << "Wholesale: $" << getWholesalePrice() << endl;
}
double Computer::retailPrice(double arg) {
    //arg percentage is coming in.
    return(getWholesalePrice() * (1 + arg / 100.0));

}