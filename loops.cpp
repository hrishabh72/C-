#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> number{};
    char selection{};

    do
    {
        cout << "\n p-print number" << endl;
        cout << "\n A-add number" << endl;
        cout << "\n M-display mean of number" << endl;
        cout << "\n S-smallest number" << endl;
        cout << "\n L-largest number" << endl;
        cout << "\n Q-quit" << endl;

        cout << "enter your choice" << endl;
        cin >> selection;

        if (selection == 'p' || selection == 'P')
        {
            if (number.size() == 0)
            {
                cout << "[]-list is empty" << endl;
            }
            else
            {
                cout << "[";
                for (auto num : number)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        else if (selection == 'a' || selection == 'A')
        {
            int add_number{};
            cout << "enter the inter to add to the list" << endl;
            cin >> add_number;
            number.push_back(add_number);
            cout << add_number << "number" << endl;
        }

        else if (selection == 'm' || selection == 'M')
        {
            if (number.size() == 0)
                cout << "unable to calculate" << endl;
            else
            {
                int total_num{};
                for (auto num : number)
                    total_num = total_num + num;
                cout << "the mean is" << static_cast<double>(total_num) / number.size() << endl;
            }
        }
        else if (selection == 's' || selection == 'S')
        {
            if (number.size() == 0)
                cout << "unable to calculate" << endl;
            else
            {
                int smallest = number.at(0);
                for (auto num : number)
                    if (num < smallest)
                    {
                        smallest = num;
                    }
                cout << "the smallest number is : " << smallest << endl;
            }
        }
        else if (selection == 'l' || selection == 'L')
        {
            if (number.size() == 0)
                cout << "unable to calculate" << endl;
            else
            {
                int largest = number.at(0);
                for (auto num : number)
                    if (num > largest)
                    {
                        largest = num;
                    }
                cout << "the largest number is : " << largest << endl;
            }
        }
        else if (selection == 'q' || selection == 'Q')
        {
            cout << "goodbye" << endl;
        }

        else
        {
            cout << "unknown section ! pls try again" << endl;
        }

    } while (selection != 'q' || selection != 'Q');

    cout << endl;
    return 0;
}