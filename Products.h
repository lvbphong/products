#ifndef _Product_h
#define _Product_h
#include <string>
using namespace std;

class Products{
public:
    int ProductId, SuppllierId, CategoryId;
    double Price;
    string ProductName, Unit;
public:
    Products();
    Products(int ProductId,string ProductName, int SuppllierId, int CategoryId, string Unit, double Price);
};

#endif