#include <iostream>

using namespace std;

int main() {
    cout << "Asslamualikum, welcome to Rahman's IT service" << endl;
    
    cout <<  "\nHow many cpu  would you like to repair ?";
    
    int number_of_cpu {0};
    cin >> number_of_cpu;
    
    cout << "\nEstimate for cpu service " << endl;
    cout << "Number of cpu:" << number_of_cpu << endl;
    cout << "Price per cpu:$" << 200 << endl;
    cout << "cost: $" << 200 * number_of_cpu << endl;
    cout << "Tax: $" << 200 * number_of_cpu * 0.06 << endl;
    cout << "===========================" << endl;
    
    cout << "Total estimate: $" << (200 * number_of_cpu) + (200 * number_of_cpu *0.06) << endl;
    cout << "This estimate is valid for " << 200 << "days" << endl;
    
       
    
    
    cout << endl;
    return 0;
}