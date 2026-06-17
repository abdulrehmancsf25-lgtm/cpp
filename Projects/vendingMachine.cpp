#include <iostream>
using namespace std;
class Item{
           // Data members 
        private:
            string name ;
           int quantity ;
           float price ;
        public:
        // Added constructor to allow initialization
            Item(string itemName, int itemQty, float itemPrice) {
                name = itemName;
                quantity = itemQty;
                price = itemPrice;
            }
            string getName(){
                return name ;
            }
            int getQuantity(){
                return quantity ;
            }
            float getPrice(){
                return price ;
            }
            void setQuantity(int newQty){
                if(newQty >= 0)
                quantity = newQty ;
            }
};
class veding_Machine{
        private:
           float totalRevenue  = 0 ;
        public:
            float  getRevenue(){
              return totalRevenue ;
           }
           void purchase_Item(Item &item ,float moneyInserted){
            // check if item is in stock 
             if(item.getQuantity() == 0){
                cout << "Sorry! " << item.getName() << " is not in stock "<< endl ;
                return ;
             }
            // check if inserted money is sufficient to buy item or not 
            if(moneyInserted < item.getPrice()){
               cout << "Insufficient funds! " << item.getName() << "costs $:" << item.getPrice() << endl ;
               return ;
            }
            // if all ok (item purchased)
            item.setQuantity(item.getQuantity()-1) ;
             // increase revenue
              totalRevenue += item.getPrice() ;
            // returning extra money
               float extras = moneyInserted - item.getPrice() ;
               if(extras > 0)
                cout << "Returning $:" << extras << endl ;
           }
           
};
int main() {
           // creating items 
            Item chips("Lays",10,0.5);
            Item drinks("Cola",5,0.25);
          
          // creating vending machine
          veding_Machine machine ;
        cout << "Welcome to sweatners Vending Machine " << endl ;

           {
                cout << "Chips : " << chips.getName() ;
                cout << "  Price :" << chips.getPrice() ;
                cout << "  Quantity :" << chips.getQuantity() << endl ;
            }
              {
                cout << "Drink : " << drinks.getName() ;
                cout << "  Price :" << drinks.getPrice() ;
                cout << "  Quantity :" << drinks.getQuantity() << endl ;
            }
        cout << "Buying chips "<< chips.getName() << endl ;
        float money ;
        cout << "Enter the money to purchase " << endl ;
         cin >> money ;
        machine.purchase_Item(chips ,money) ;

        cout << "Buying drink " << drinks.getName()<< endl ;
        cout << "Enter the money "<< endl ;
        cin >> money ;
        machine.purchase_Item(drinks , money) ;

        // Total revenue ;
        cout << "Total revenue is $:"<< machine.getRevenue() ;
        
    return 0;
}