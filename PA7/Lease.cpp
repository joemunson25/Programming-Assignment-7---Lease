#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Lease {
    private:
        string name;
        int apartmentNum;
        double rent;
        int term;
    public:
        Lease()
        {
            name = "XXXX";
            apartmentNum = 0;
            rent = 1000;
            term = 12;
        }
        Lease(string n, int num, double r, int t)
        {
            name = n;
            apartmentNum = num;
            rent = r;
            term = t;
        }
        void setName(string n)
        {
            name = n;
        }
        void setApartmentNum(int num)
        {
            apartmentNum = num;
        }
        void setRent(double r)
        {
            rent = r;
        }
        void setTerm(int t)
        {
            term = t;
        }
        string getName()
        {
            return name;
        }
        int getApartmentNum()
        {
            return apartmentNum;
        }
        double getRent()
        {
            return rent;
        }
        int getTerm()
        {
            return term;
        }
    };


int main() {
    
    string name;
    int apartNum;
    double rent;
    int term;
    
    Lease t[4];
    
    //get info for two tenants
    
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter info for tenant " << (i + 1) << endl;
        cout << "Name of tenant: ";
        getline(cin, name);
        cout << "Apartment Number: ";
        cin >> apartNum;
        cout << "Rent amount: ";
        cin >> rent;
        cout << "Lease term: ";
        cin >> term;
        
        cin.ignore();
        
        t[i] = Lease(name, apartNum, rent, term);
        cout << endl;
    }
    
    //print the four tenants on the screen
    
    cout << "Here is a list of the four tenants:" << endl << endl;
    
    cout << left << setw(15) << "Name";
    cout << left << setw(15) << "Apartment #";
    cout << left << setw(15) << "Rent";
    cout << left << setw(15) << "Term" << endl;
    
    for (int j = 0; j < 4; j++)
    {
        
        cout << left << setw(15) << t[j].getName();
        cout << left << setw(15) << t[j].getApartmentNum();
        cout << left << setw(15) << fixed << setprecision(2) << t[j].getRent();
        cout << left << setw(15) << t[j].getTerm();
        cout << endl;
    }
    
    return 0;
}
