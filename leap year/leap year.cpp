#include <iostream>
#include <string>
//#include <vector>
using namespace std;




int readYear()
{
     int num;

    cout << "\nPlease Enter Number? ";
    cin>> num;

    return num;
}


bool isLeapYear(int year)
{
    /*if (year % 400 == 0)
        return 1;
    else if (year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    else
        return 0;*/

    return (year % 400 == 0 ||( (year % 4 == 0)&& (year % 100 != 0)));

}
    
void checkLeapYear(int year)
{
    if (isLeapYear(year))
        cout << "\nYes, Year [" << year << "] is a leap year.\n";
    else
        cout << "\nNo, Year [" << year << "] is not a leap year.\n";

}





int main()
{
    int year = readYear();
    checkLeapYear(year);


    cout << "\n";
    system("pause>0");
    
    return main();

}





//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//
//
//int readNumber()
//{
//    int num;
//
//    cout << "\nPlease Enter Number? ";
//    cin>> num;
//
//    return num;
//}
//
//string NameOfDigit(int digit)
//{
//    switch (digit)
//    {
//    case 0:
//       return "";
//    case 1:
//        return "One";
//    case 2:
//        return "Two";
//    case 3:
//        return "Three";
//    case 4:
//        return "Four";
//    case 5:
//        return "Five";
//    case 6:
//        return "Six";
//    case 7:
//        return "Seven";
//    case 8:
//        return "Eight";
//    case 9:
//        return "Nine";
//    }
//}
//
//string TenPlus(int digit)
//{
//    switch (digit)
//    {
//    case 0:
//        return "Ten";
//    case 1:
//       return "Eleven";
//    case 2:
//        return "Twelve";
//    case 3:
//        return "Thirteen";
//    case 4:
//        return "Fourteen";
//    case 5:
//        return "Fifteen";
//    case 6:
//        return "Sixteen";
//    case 7:
//        return "Seventeen";
//    case 8:
//        return "Eighteen";
//    case 9:
//        return "Nineteen";
//    }
//}
//
//string NameOfTens(int num)
//{
//    switch (num)
//    {
//    case 1:
//        return "Ten";
//    case 2:
//        return "Twinty";
//    case 3:
//        return "Therty";
//    case 4:
//        return "Fourty";
//    case 5:
//        return "Fifty";
//    case 6:
//        return "Sixty";
//    case 7:
//        return "Seventy";
//    case 8:
//        return "Eighty";
//    case 9:
//        return "Ninety";
//    }
//}
//
//vector<int>convertNumberToVectorOfDigits(int number)//5843  -> 3485
//{
//    vector<int>vDigits;
//    int remainder;
//    int digit = 0;
//
//    do
//    {
//        remainder = number % 10;
//
//        number = number / 10;
//
//        vDigits.push_back(remainder);
//    } while (number > 0);
//
//    return vDigits;
//}
//
//string numberToText(vector<int>vDigits, int number)//536 425
//{
//    string textOfNumber = "";
//    vector<int>vThouthandsDigits;
//
//
//    string uniuns = NameOfDigit(vDigits[0]);
//
//    for (int i = vDigits.size()-1; i >=0;  i--)//11
//    {
//        if (i==1)
//        {
//            if (vDigits[i] != 0)
//            {
//                if (vDigits[i] == 1)
//                {
//                    for (int x = 0; x <= 9; x++)
//                    {
//                        if(vDigits[0] == x)
//                        {
//                            textOfNumber += TenPlus(x);
//                            uniuns = "";
//                        }
//                    }
//                }
//                else
//                    textOfNumber += NameOfTens(vDigits[i]);
//            }
//        }
//        if (i == 2)
//        {
//            if (vDigits[i] == 0)
//                textOfNumber += NameOfDigit(vDigits[i]);
//            else if (vDigits[i] == 1)
//                textOfNumber += NameOfDigit(vDigits[i]) + " Hundred ";
//            else
//                textOfNumber += NameOfDigit(vDigits[i]) + " Hundreds ";
//        }
//    }
//    textOfNumber += " "+ uniuns;
//    return textOfNumber;
//}
//
//
//
//
//
//
//
//int main()
//{
//    string TextOfNumber = "";
//    string TextOfFirst3Digits = "";
//    string TextOfSecond3Digits = "";
//    string TextOfThird3Digits = "";
//    string TextOfFourth3Digits = "";
//
//    int number = readNumber();
//
//    vector<int>vDigits = convertNumberToVectorOfDigits(number);
//    TextOfFirst3Digits = numberToText(vDigits, number);
//
//    number = number / 1000;
//
//    vector<int>vThouthandsDigits = convertNumberToVectorOfDigits(number);
//    TextOfSecond3Digits = numberToText(vThouthandsDigits, number);
//
//    number = number / 1000;
//    vector<int>vMilionsDigits = convertNumberToVectorOfDigits(number);
//    TextOfThird3Digits = numberToText(vMilionsDigits, number);
//
//    number = number / 1000;
//    vector<int>vBillionsDigits = convertNumberToVectorOfDigits(number);
//    TextOfFourth3Digits = numberToText(vBillionsDigits, number);
//
//
//
//
//    TextOfNumber = (TextOfFourth3Digits == " " ? "" : ((TextOfFourth3Digits == " One") ? (TextOfFourth3Digits + " Bilion ") : (TextOfFourth3Digits + " Bilions ")))
//                    + (TextOfThird3Digits == " " ? "" : ((TextOfThird3Digits == " One") ? (TextOfThird3Digits + " Milion ") : (TextOfThird3Digits + " Milions ")))
//                    + (TextOfSecond3Digits == " " ? "" : ((TextOfSecond3Digits == " One") ? (TextOfSecond3Digits + " THouthand ") : (TextOfSecond3Digits + " THouthands ")))
//                    + TextOfFirst3Digits;
//
//
//
//    cout << endl << TextOfNumber;
//
//
//    cout << "\n";
//    system("pause>0");
//
//    return main();
//
//}