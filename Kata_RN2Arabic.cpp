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
        cout << "This Program will convert numbers between Arabic and Roman Numerals. Please input 1 if you wish to convert from Roman Numerals to Arabic or 2 if you wish to convert from Arabic to Roman Numerals." << endl;
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
        cout<<"\nWould you like to use convert another number? 1 for yes, 2 for no"<<endl;
        cin>>go;
        cout<<endl;
    }while (go < 2);
return 0;
}

void numConvert::RN2Arab()
{
    int arabic=0;
    cout<< "Enter in a Roman Numeral"<<endl;
    string roman;
    cin>>roman;
    const int length = roman.length();
    int i;
    int l=(length);
    for (i=0; i<l; i++)
    {
        int j=(i-1);
        int k=(i+1);
        if(roman[i] == 'M' && roman[j] != 'C')  {arabic=(arabic+1000);}
        if(roman[i] == 'M' && roman[j] == 'C')  {arabic=(arabic+900);}
        if(roman[i] == 'D' && roman[j] != 'C')  {arabic=(arabic+500);}
        if(roman[i] == 'D' && roman[j] == 'C')  {arabic=(arabic+400);}
        if(roman[i] == 'C' && roman[j] != 'X'&& roman[k] != 'M' && roman[k] != 'D')  {arabic=(arabic+100);}
        if(roman[i] == 'C' && roman[j] == 'X')  {arabic=(arabic+90);}
        if(roman[i] == 'L' && roman[j] != 'X')  {arabic=(arabic+50);}
        if(roman[i] == 'L' && roman[j] == 'X')  {arabic=(arabic+40);}
        if(roman[i] == 'X' && roman[j] != 'I'&& roman[k] != 'L' && roman[k] != 'C')  {arabic=(arabic+10);}
        if(roman[i] == 'X' && roman[j] == 'I')  {arabic=(arabic+9);}
        if(roman[i] == 'V' && roman[j] != 'I')  {arabic=(arabic+5);}
        if(roman[i] == 'V' && roman[j] == 'I')  {arabic=(arabic+4);}
        if(roman[i] == 'I' && roman[k] != 'X' && roman[k] != 'V')  {arabic=(arabic+1);}
    }

    cout<< "Arabic Number is: " <<arabic <<endl;
}


void numConvert::Arab2RN()
{
    cout<< "Enter in an Arabic number between 1 and 1000"<<endl;
    int number;
    std::string roman;
    cin>>number;
    string numStr = to_string(number);
    const int length = numStr.length();
    
    int ones=length-1;
    int tens=length-2;
    int huns=length-3;
    
    if (length==1)
    {
        if (numStr[ones] == '1')  {roman.append("I");}
        if (numStr[ones] == '2')  {roman.append("II");}
        if (numStr[ones] == '3')  {roman.append("III");}
        if (numStr[ones] == '4')  {roman.append("IV");}
        if (numStr[ones] == '5')  {roman.append("V");}
        if (numStr[ones] == '6')  {roman.append("VI");}
        if (numStr[ones] == '7')  {roman.append("VII");}
        if (numStr[ones] == '8')  {roman.append("VIII");}
        if (numStr[ones] == '9')  {roman.append("IX");}
        
    }
    if (length==2)
    {
        if (numStr[tens] == '1')  {roman.append("X");}
        if (numStr[tens] == '2')  {roman.append("XX");}
        if (numStr[tens] == '3')  {roman.append("XXX");}
        if (numStr[tens] == '4')  {roman.append("XL");}
        if (numStr[tens] == '5')  {roman.append("L");}
        if (numStr[tens] == '6')  {roman.append("LX");}
        if (numStr[tens] == '7')  {roman.append("LXX");}
        if (numStr[tens] == '8')  {roman.append("LXXX");}
        if (numStr[tens] == '9')  {roman.append("XC");}
        if (numStr[ones] == '1')  {roman.append("I");}
        if (numStr[ones] == '2')  {roman.append("II");}
        if (numStr[ones] == '3')  {roman.append("III");}
        if (numStr[ones] == '4')  {roman.append("IV");}
        if (numStr[ones] == '5')  {roman.append("V");}
        if (numStr[ones] == '6')  {roman.append("VI");}
        if (numStr[ones] == '7')  {roman.append("VII");}
        if (numStr[ones] == '8')  {roman.append("VIII");}
        if (numStr[ones] == '9')  {roman.append("IX");}
    }
    if (length==3)
    {
        if (numStr[huns] == '1')  {roman.append("C");}
        if (numStr[huns] == '2')  {roman.append("CC");}
        if (numStr[huns] == '3')  {roman.append("CCC");}
        if (numStr[huns] == '4')  {roman.append("CD");}
        if (numStr[huns] == '5')  {roman.append("D");}
        if (numStr[huns] == '6')  {roman.append("DC");}
        if (numStr[huns] == '7')  {roman.append("DCC");}
        if (numStr[huns] == '8')  {roman.append("DCCC");}
        if (numStr[huns] == '9')  {roman.append("CM");}
        if (numStr[tens] == '1')  {roman.append("X");}
        if (numStr[tens] == '2')  {roman.append("XX");}
        if (numStr[tens] == '3')  {roman.append("XXX");}
        if (numStr[tens] == '4')  {roman.append("XL");}
        if (numStr[tens] == '5')  {roman.append("L");}
        if (numStr[tens] == '6')  {roman.append("LX");}
        if (numStr[tens] == '7')  {roman.append("LXX");}
        if (numStr[tens] == '8')  {roman.append("LXXX");}
        if (numStr[tens] == '9')  {roman.append("XC");}
        if (numStr[ones] == '1')  {roman.append("I");}
        if (numStr[ones] == '2')  {roman.append("II");}
        if (numStr[ones] == '3')  {roman.append("III");}
        if (numStr[ones] == '4')  {roman.append("IV");}
        if (numStr[ones] == '5')  {roman.append("V");}
        if (numStr[ones] == '6')  {roman.append("VI");}
        if (numStr[ones] == '7')  {roman.append("VII");}
        if (numStr[ones] == '8')  {roman.append("VIII");}
        if (numStr[ones] == '9')  {roman.append("IX");}
    }
    if (length==4)
    {
        roman.append("M");
    }
    
    cout<< "Roman Numeral is: " <<roman <<endl;
}
