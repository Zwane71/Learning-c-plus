#include <iostream>
#include <string>

using namespace std;

int main()
{

    int choice;
    double balance = 0.00;
    double interest = 0.25;
    double deposit;
    double withdraw;
    bool is_running = true;
    string answer;




    cout<< "********************\n";
    cout<< "Banking Program\n";
    cout<< "********************\n";
    cout<< "1. Get balance\n";
    cout<< "2. Make a deposit\n";
    cout<< "3. Make a withdrawal\n";

    cout<< "********************\n";
    cout<< "4. Exit\n";
    cout<< "********************\n";

    cout<< "What do you wish to do : ";
    cin>> choice;


    while(is_running){

    switch (choice){
        case 1:

            cout<< "Your account balance is : M "<< balance <<"\n";
        goto back_screen;

        case 2:

            cout<< "Enter amount you wish to : M ";
            cin >> deposit;

        balance += deposit;
            cout << "Your new balance is : M " << balance <<"\n";
            goto back_screen;

        case 3:
            cout<< "NB: take note that withdrawal fees are 25% of what you withdraw\n";
            cout << "Enter amount you wish to withdraw : M ";
            cin >> withdraw;
        if(withdraw > balance){

            cout << " you have insufficient funds\n";
        return 0;
        }
        else if(withdraw < 0 ){
            cout << "Please enter an amount divisible by 10\n";
        return 0;
        }else{
            balance -= (withdraw * interest );
            balance -= withdraw;
            cout<< "Your new balance is : M "<< balance << "\n";
        }
        break;


        case 4:
        is_running = false;
        break;

        }

        back_screen:

            cout << "Are you finished or do you wish to go back to the main screen "<<"Yes or No\n";
            cin >> answer;

            if( answer == "Yes"){
            goto main_screen;
            }
            else if(answer == "No"){
            cout << "Thank you for using us !! \n";
            return 0;
            }

            else{
            cout << "Invalid Input\n";
            goto back_screen;
            }

            main_screen:

                cout<< "********************\n";
                cout<< "Banking Program\n";
                cout<< "********************\n";
                cout<< "1. Get balance\n";
                cout<< "2. Make a deposit\n";
                cout<< "3. Make a withdrawal\n";
                cout<< "********************\n";
                cout<< "4. Exit\n";
                cout<< "********************\n";

                cout<< "What do you wish to do : ";
                cin>> choice;






    }}

