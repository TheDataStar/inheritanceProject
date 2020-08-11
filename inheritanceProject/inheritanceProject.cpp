// FileName: Inheritance Project
// Project: CS288T Unit 2 Submission 1 - Inheritance in C++
// Author: Adam Greenwood (225799036)

#include <iostream>
#include <string>

using namespace std;

class vertebrates
{
    protected:
        string name;

    public:
        void setInfo()
        {
            cout << "Enter the animals Name: " << endl;
            cin >> name;
        }

        void getInfo()
        {
            cout << "The animal is an: " << name << endl;
        }
};

class Birds : public vertebrates
{
    private:
        string feathers;

    public:
        void getInfo()
        {
            vertebrates::getInfo();
            cout << "The " << name << " Has feathers which makes it a bird." << endl;
        }
};

class Reptiles : public vertebrates
{
    private:
        string shell;

    public:
    void getInfo()
    {
        vertebrates::getInfo();
        cout << "The " << name << " Has a shell which makes it a Reptile." << endl;
    }
};


class Fish : public vertebrates
{
    private:
        string gills;
    
    public:
    void getInfo()
    {
        vertebrates::getInfo();
        cout << "The " << name << " Has gills and breathes underwater which makes it a fish." << endl;
    }
};

int main()
{
    Birds one;
    one.setInfo();
    one.getInfo();

    Reptiles two;
    two.setInfo();
    two.getInfo();

    Fish three;
    three.setInfo();
    three.getInfo();

    return 0;
};