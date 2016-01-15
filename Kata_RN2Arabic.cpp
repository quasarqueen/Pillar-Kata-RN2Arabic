//Roman Numerals Kata

#include <iostream>
#include <string>

using namespace std;

class numConvert
{
public:
    void RN2Arab();
    void Arab2RN();
};

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
        numConvert convert;
        switch (userchoice)
        {
            case 1:
                convert.RN2Arab();
                break;
            case 2:
                convert.Arab2RN();
                break;
            default:
                cout<<"please make a vaild choice.";
        }
        cout<<"\nwould you like to use convert another number? 1 for yes, 2 for no"<<endl;
        cin>>go;
        cout<<endl;
    }while (go < 2);
return 0;
}

void numConvert::RN2Arab()
{
    int arabic=0;
    cout<< "enter in a Roman Numeral"<<endl;
    string roman;
    cin>>roman;
    
    cout<< "Arabic Number is: " <<arabic <<endl;
}


void numConvert::Arab2RN()
{
    cout<< "enter in an Arabic number between 1 and 1000"<<endl;
    int number;
    std::string roman;
    cin>>number;
    string numStr = to_string(number);

    cout<< "Roman Numeral is: " <<roman <<endl;
}
