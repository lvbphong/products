#include "Products.h"

Products::Products(){}
Products::Products(int ProductId,string ProductName, int SuppllierId, int CategoryId, string Unit, double Price){
    this->ProductId = ProductId;
    this->ProductName = ProductName;
    this->SuppllierId = SuppllierId;
    this->CategoryId = CategoryId;
    this->Unit = Unit;
    this->Price = Price;
}
