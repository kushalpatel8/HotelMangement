#include <iostream>
using namespace std;

int main()
{
    int Quant, Choice;
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, QChicken = 0;
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, SChicken = 0;

    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_Chicken = 0;

    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available: ";
    cin >> Qrooms;

    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;

    cout << "\n Quantity of burger: ";
    cin >> Qburger;

    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;

    cout << "\n Quantity of shake: ";
    cin >> Qshake;

    cout << "\n Quantity of chicken: ";
    cin >> QChicken;

    
m:
    cout << "\n\t\t\t Please select given menu options ";

    cout << "\n\n1. Rooms";
    cout << "\n2. Pasta";
    cout << "\n3. Burger";
    cout << "\n4. Noodles";
    cout << "\n5. Shake";
    cout << "\n6. Chicken";
    cout << "\n7. Information regarding sales and collection";
    cout << "\n8. Exit";

    cout << "\n\n\tPlease enter choice : ";
    cin >> Choice;

    switch (Choice)
    {
        case 1:
            cout << "Enter the number of rooms you want: ";
            cin >> Quant;

            if (Qrooms - Srooms >= Quant) {
                Srooms += Quant;
                Total_rooms += Quant * 1200;
                cout << "\n\n\t\t" << Quant << " room(s) have been allotted to you!";
            } else {
                cout << "\n\tOnly " << Qrooms - Srooms << " room(s) remaining.";
            }
            break;
        case 2:
            cout << "Enter pasta quantity: ";
            cin >> Quant;

            if (Qpasta - Spasta >= Quant) {
                Spasta += Quant;
                Total_pasta += Quant * 250;
                cout << "\n\n\t\t" << Quant << " pasta(s) is the order!";
            } else {
                cout << "\n\tOnly " << Qpasta - Spasta << " pasta(s) remaining in hotel.";
            }
            break;
        case 3:
            cout << "Enter burger quantity: ";
            cin >> Quant;

            if (Qburger - Sburger >= Quant) {
                Sburger += Quant;
                Total_burger += Quant * 250;
                cout << "\n\n\t\t" << Quant << " burger(s) is the order!";
            } else {
                cout << "\n\tOnly " << Qburger - Sburger << " burger(s) remaining in hotel.";
            }
            break;
        case 4:
            cout << "Enter noodles quantity: ";
            cin >> Quant;

            if (Qnoodles - Snoodles >= Quant) {
                Snoodles += Quant;
                Total_noodles += Quant * 250;
                cout << "\n\n\t\t" << Quant << " noodle(s) is the order!";
            } else {
                cout << "\n\tOnly " << Qnoodles - Snoodles << " noodle(s) remaining in hotel.";
            }
            break;
        case 5:
            cout << "Enter shake quantity: ";
            cin >> Quant;

            if (Qshake - Sshake >= Quant) {
                Sshake += Quant;
                Total_shake += Quant * 250;
                cout << "\n\n\t\t" << Quant << " shake(s) is the order!";
            } else {
                cout << "\n\tOnly " << Qshake - Sshake << " shake(s) remaining in hotel.";
            }
            break;
        case 6:
            cout << "Enter chicken quantity: ";
            cin >> Quant;

            if (QChicken - SChicken >= Quant) {
                SChicken += Quant;
                Total_Chicken += Quant * 250;
                cout << "\n\n\t\t" << Quant << " chicken(s) is the order!";
            } else {
                cout << "\n\tOnly " << QChicken - SChicken << " chicken(s) remaining in hotel.";
            }
            break;
        case 7:
            cout << "\n\t\tDetails of sales and collections";

            cout << "\n\nRooms:";
            cout << "\nTotal rooms we had: " << Qrooms;
            cout << "\nRooms rented: " << Srooms;
            cout << "\nRemaining rooms: " << Qrooms - Srooms;
            cout << "\nTotal room collection for the day: " << Total_rooms;

            cout << "\n\nPasta:";
            cout << "\nTotal pasta we had: " << Qpasta;
            cout << "\nPasta sold: " << Spasta;
            cout << "\nRemaining pasta: " << Qpasta - Spasta;
            cout << "\nTotal collection from pasta: " << Total_pasta;

            cout << "\n\nBurger:";
            cout << "\nTotal burgers we had: " << Qburger;
            cout << "\nBurgers sold: " << Sburger;
            cout << "\nRemaining burgers: " << Qburger - Sburger;
            cout << "\nTotal collection from burgers: " << Total_burger;

            cout << "\n\nNoodles:";
            cout << "\nTotal noodles we had: " << Qnoodles;
            cout << "\nNoodles sold: " << Snoodles;
            cout << "\nRemaining noodles: " << Qnoodles - Snoodles;
            cout << "\nTotal collection from noodles: " << Total_noodles;

            cout << "\n\nShake:";
            cout << "\nTotal shakes we had: " << Qshake;
            cout << "\nShakes sold: " << Sshake;
            cout << "\nRemaining shakes: " << Qshake - Sshake;
            cout << "\nTotal collection from shakes: " << Total_shake;

            cout << "\n\nChicken:";
            cout << "\nTotal chickens we had: " << QChicken;
            cout << "\nChickens sold: " << SChicken;
            cout << "\nRemaining chickens: " << QChicken - SChicken;
            cout << "\nTotal collection from chickens: " << Total_Chicken;
            break;
        case 8:
            exit(0);
        default:
            cout << "\nPlease select a valid option!";
    }
    goto m;

    int Total_expense = 0;

    Total_expense = Total_expense + Total_rooms + Total_burger + Total_pasta + Total_noodles + Total_shake + Total_Chicken;
    cout << "Total Expense : " << Total_expense;
    return 0;
}

