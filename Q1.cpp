#include <iostream>
using namespace std;
struct item {
    int id;      
    float cost;  
};
int main() {
    item items[6] =
    {
        {1, 50.02},  
        {2, 25.00},  
        {3, 50.00}, 
        {4, 100.59}, 
        {5, 89.05},  
        {6, 89.99}   
    };
    for (int i = 0; i < 6; i++) {

        if (items[i].cost > 50.00) 
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost<<endl;
    }
return 0;
}
