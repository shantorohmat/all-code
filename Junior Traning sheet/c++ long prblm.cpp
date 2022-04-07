#include <iostream>
using namespace std;

class base_Brand
{
public:
    string name;

    void ShowDetails_Brand()
    {
        cout << "Brand: " << name << endl;

    }
};

class base_lappon
{
public:
    string Model,processor;
    int RAM;
    void ShowDetails_lappon()
    {
        cout << "Model: " << Model << endl;
        cout << "Processor: " << processor << endl;
        cout << "RAM: " << RAM << " GB" << endl;


    }

};

class base_else
{
public:

    int sellPrice,buyPrice,quantity;

    void ShowDetails_else()
    {
        cout << endl << "Product Details------------------------" << endl;
        cout << "Selling Price: " << sellPrice << " TK" << endl;
        cout << "Buying Rate: " << buyPrice << " TK" << endl;
        cout << "In Stock: " << quantity << endl;


    }


};


class base_rent
{
public:
    string  borrowDate, returnDate;
    int rentingPricePerDay;

    void rent(string borDate, string retDate)
    {
        this -> borrowDate = borDate;
        this -> returnDate = retDate;
    }

    void ShowDetails_rent()
    {
        cout << "Rentable. Rent Per Day: " << rentingPricePerDay << " TK" << endl;
        cout << "Last Borrowed Date: " << borrowDate << endl;
        cout << "Return Date: " << returnDate << endl;

    }

};

class EarPhone : public base_else , public base_Brand
{
public:

    string interface, type;/// name;
    EarPhone( string type, string interface)    {
        this->type = type;
        this->interface = interface;

    }
    void showDetails()
    {
        cout << "Type: " << type << endl;
        cout << "Interface: " << interface << endl;
    }

};
class Laptop : public base_rent , public base_lappon , public base_else , public base_Brand
{
public:
    int hardDrive;
       string  webCamType, keyboardType;
    Laptop(int hardDrive, string webCamType, string keyboardType)
    {

        this->hardDrive = hardDrive;

        this->webCamType = webCamType;
        this->keyboardType = keyboardType;

    }
    void showDetails()
    {
        cout << "HardDrive: " << hardDrive << " GB" << endl;
        cout << "Web Cam: " << webCamType << endl;
        cout << "Keyboard: " << keyboardType << endl;

    }


};
class Mobile : public base_lappon , public base_else , public base_Brand
{
public:
    int  frontCameraMP, backCameraMP;
    string SIM;
    Mobile(int frontCameraMP, string SIM,int backCameraMP)
    {

        this->frontCameraMP = frontCameraMP;
        this->backCameraMP = backCameraMP;

        this -> SIM = SIM;
    }

    void showDetails()
    {

        cout << "SIM: " << SIM << endl;
        cout << "Front Camera: " << frontCameraMP << " Mega Pixel"<< endl;
        cout << "Back Camera: " << backCameraMP << " Mega Pixel"<< endl;
    }
};
class Book : public base_rent , public base_else
{

public:
     string title, author;/// borrowDate, returnDate;
    Book(string title, string author){
        this->title = title;
        this->author = author;


    }

    void showDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;

    }


};

int main()
{
    Book cpp("Teach Yourself C++", "Hertbert Schildt");/// 300, 350, 1, 5);

    cpp.sellPrice =350;
    cpp.buyPrice = 300;
    cpp.quantity = 10;
    cpp.rentingPricePerDay = 5;
    cpp.ShowDetails_else();
    cpp.ShowDetails_rent();
    cpp.showDetails();
    cpp.rent("06/04/2020", "10/04/2020");


    Laptop zen(500,"3D IR HD camera", "Full-size backlit");///(50000, 55000, 1, 500, 1024, 12, "ZenBook 14", "ASUS", "Intel Core i7",
                  /// "3D IR HD camera", "Full-size backlit");
    zen.name = "ASUS";
    zen.Model = "ZenBook 14";
    zen.processor = "Intel Core i7";
    zen.RAM = 1024;
    zen.sellPrice =55000;
    zen.buyPrice = 50000;
    zen.quantity = 1;
    zen.rent("10/05/2020", "20/05/2020");

    zen.ShowDetails_else();
    zen.ShowDetails_Brand();
    zen.ShowDetails_lappon();
    zen.ShowDetails_rent();
    zen.showDetails();


    Mobile goriberIPhone(4,"Dual",12);///(11500, 12000, 10, 4, 12, 3, "8A Dual", "Xiaomi", "Qualcomm Snapdragon 439", "Dual");

    goriberIPhone.name = "Xiaomi";
    goriberIPhone.Model = "8A Dual";
    goriberIPhone.processor = "Qualcomm Snapdragon 439";
    goriberIPhone.RAM = 3;
    goriberIPhone.sellPrice =11500;
    goriberIPhone.buyPrice = 12000;
    goriberIPhone.quantity = 10;

    goriberIPhone.ShowDetails_else();
    goriberIPhone.ShowDetails_Brand();
    goriberIPhone.ShowDetails_lappon();
    goriberIPhone.showDetails();


    EarPhone mi("In-Ear", "Bluetooth");///("Xiaomi YDLYEJ01LM", "In-Ear", "Bluetooth", 1500, 2000, 25);

    mi.sellPrice =2000;
    mi.buyPrice = 1500;
    mi.quantity = 10;
    mi.name = "Xiaomi YDLYEJ01LM";
    mi.ShowDetails_else();
    mi.ShowDetails_Brand();
    mi.showDetails();

    return 0;
}
