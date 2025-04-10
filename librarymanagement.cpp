#include <iostream>
#include<string>

using namespace std;

class Library{
    int bid;
    string bname,author,csbn;
    public:
       void getInfo(void);
       void PrintInfo(void);
};

void Library:: getInfo(){
    cout<<"Enter Book Id: ";
    cin>>bid;
    cout<<"Enter Book name: ";
    cin.ignore();
    getline(cin,bname);
    cout<<"Enter Author: ";
    getline(cin,author);
    cout<<"Enter CSBN: ";
    cin>>csbn;
    cout<<"Book id: "<<bid<<" "<<bname<<" written by "<<author<<" "<<" of CSBN "<<csbn<<" has been added to our list\n\n";
}

void Library:: PrintInfo(){

    cout<<bid<<"\t"<<bname<<"\t\t"<<author<<"\t\t"<<csbn<<"\n";
}
int main(){
    int user,i=0;
    Library lib[100];
    cout<<"\t\t Welcome to Your Library\t\t\n"<<endl;
    do{
        cout<<endl<<"What do you want to do?\n1. Add a Book\n2. Remove a book\n3. Update Book\n4. Display books\n5. Exit\n";
        cin>>user;
        switch(user){
            case 1:
               lib[i].getInfo();
               i++;
               break;
            case 2:
                cout<<"Work on progress...\n";
                break;
            case 3:
                cout<<"Work on progress...\n";
                break;
            case 4:
                cout<<"Books in our list are: \n";
                cout<<"Id\tName\t\tAuthor\t\tCSBN\n"<<endl;
                for(int j=0;j<i;j++){
                    lib[j].PrintInfo();
                }
                break;
            case 5:
                cout<<"Exiting...\t\n";
                break;
        }
    }while(user!=5);
}