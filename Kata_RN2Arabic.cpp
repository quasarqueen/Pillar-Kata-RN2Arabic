//Roman Numerals Kata

#include <iostream>


using namespace std;

// Main function
int main()
{
    int go;
    do
    {
        cout << "This Program will convert Numbers between arabic and Roman Numerals. Please input 1 if you wish to convert from Roman Numerals to Arabic or 2 if you wish to convert from Arabic to Roman Numerals." << endl;
        int userchoice;
        cin >> userchoice;
        cout<<endl;
        //functions
        
        cout<<"\nwould you like to use convert another number? 1 for yes, 2 for no"<<endl;
        cin>>go;
        cout<<endl;
    }while (go < 2);
return 0;
}
