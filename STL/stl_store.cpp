#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <list>
#include <set>
#include <deque>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/* 
struct Customer {
    int customerID;
    string customerName;
    string customerAddress;
};
*/

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main() {

    cout << "Product ID" << " | " << "Product Name" << " | " << "Product Category" << endl;
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"}, 
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"}
    };

    for (const auto &product : products) {
        cout << product.productID << "\t| " << product.name << "\t|\t" << product.category << endl;
    }

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_back("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;
    for(const auto &product : products) {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20}, 
        {103, 15}, 
        {104, 5}, 
        {105, 7},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Danny"},
        {"C004", "Max"},
        {"C005", "Harry"},
    };

    unordered_set<int> uniqueProductIDs;
    for(const auto &product : products) {
        uniqueProductIDs.insert(product.productID);
    }

    return 0;
}