#include <iostream>
using namespace std;

class Shop{
    int id[100];
    int price[100];
    int counter;
    public:
        void initCounter(){
            counter=0;
        }
        void getItem(void);
        void DisplayItem(void);
};

void Shop:: getItem(){
    cout<<"Enter the id of the item: ";
    cin>>id[counter];
    cout<<"Enter price of item with id "<<id[counter]<<" :";
    cin>>price[counter];
    counter++;
}
void Shop:: DisplayItem(){
    for(int i=0;i<counter;i++){
        cout<<"The price of item with id "<<id[i]<<" is :"<<price[i]<<endl;
    }
}
int main(){
    Shop gift;
    gift.initCounter();
    gift.getItem();
    gift.getItem();
    gift.getItem();
    gift.DisplayItem();
}