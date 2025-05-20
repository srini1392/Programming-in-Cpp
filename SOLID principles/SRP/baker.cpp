/* An example:

Imagine a baker who is responsible for baking bread. The baker's role is to focus on the task of baking bread, ensuring that the bread is of high quality, 
properly baked, and meets the bakery's standards.

However, if the baker is also responsible for managing the inventory, ordering supplies, serving customers, and cleaning the bakery, this would violate the SRP.
Each of these tasks represents a separate responsibility, and by combining them, the baker's focus and effectiveness in baking bread could be compromised.
To adhere to the SRP, the bakery could assign different roles to different individuals or teams. For example, there could be a separate person or team responsible
for managing the inventory, another for ordering supplies, another for serving customers, and another for cleaning the bakery. 
*/

#include <iostream>
#include  <string>

// class for bread maker
class BreadBaker {
    public:
        // method to bake bread
        void bakeBread() {
            std::cout << "Baking high quality bread." << std::endl;
        }
};

// class for inventory manager
class InventoryManager {
    public:
        // method to manage inventory
        void manageInventory() {
            std::cout << "Managing inventory." << std::endl;
        }   
};

// class for customer service
class CustomerService {
    public:
        // method to serve customers
        void serveCustomers() {
            std::cout << "Serving customers." << std::endl;
        }
};

// class for cleaning
class Cleaner {
    public:
        // method to clean the bakery
        void cleanBakery() {
            std::cout << "Cleaning the bakery." << std::endl;
        }
};

// main function
int main (){

    //create objects for each class
    BreadBaker baker;
    InventoryManager inventorymanager;
    CustomerService CustomerService;
    Cleaner cleaner;

    //call methods for each class
    baker.bakeBread();
    inventorymanager.manageInventory();
    CustomerService.serveCustomers();
    cleaner.cleanBakery();

    //output
    std::cout << "All tasks are performed by separate classes." << std::endl;
    std::cout << "This adheres to the Single Responsibility Principle (SRP)." << std::endl;

    return 0;


}