#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int cocoaPowder = 0, sugar = 0, iceCreamCones = 0, quantity = 0;
    int mainMenuChoice, storeMenuChoice, casinoMenuChoice, upgradeMenuChoice, locationMenuChoice;
    bool recipeOfTheGods = false, jackpotGrace = false, dailyInvestor = false, tasteBudEnhancer = false;
    double recipeOfTheGodsPrice = 100, jackpotGracePrice = 150, dailyInvestorPrice = 100, tasteBudEnhancerPrice = 100;
    int minCustomers = 2, maxCustomers;
    string location = "Outskirts";
    double outskirtsRent = 5, storeNearParkRent = 12, downtownRent = 18;
    double cocoaPowderPrice = 1.05, heavyCreamPrice = 0.75, sugarPrice = 0.08, milkPrice = 0.10, iceCreamConesPrice = 0.30, bundlePrice;
    double money = 45, price = 3.75, rent = 5, lotteryPrice = 10.00;
    int milkDay0 = 0, milkDay1 = 0, milkDay2 = 0, milkDay3 = 0;
    int day = 0;
    int creamDay0 = 0, creamDay1 = 0, creamDay2 = 0, creamDay3 = 0, creamDay4 = 0;
    cout << fixed << setprecision(2);

    do//Main Game Loop
    {
        system("cls");
        if(recipeOfTheGods == true)
            bundlePrice = (cocoaPowderPrice * 3) + (heavyCreamPrice * 7) + (sugarPrice * 2) + (milkPrice * 4) + (iceCreamConesPrice * 6);
        else
            bundlePrice = (cocoaPowderPrice * 4) + (heavyCreamPrice * 10) + (sugarPrice * 3) + (milkPrice * 5) + (iceCreamConesPrice * 6);

        if(money <= 0)
        {//Game lost
            system("cls");
            cout << "Money: $" << money << endl;
            cout << "Oh no! You have lost the Ice Cream Store Simulator game. Good Luck next time." << endl;
            system("pause");
            return 0;
        }//Game Lost

        cout << "==============================" << endl;
        cout << "Ice Cream Store Tycoon" << endl;
        cout << "==============================" << endl;
        cout << "***Current Rent of Your store is $" << rent << " per day. Please Maintain at least $" << rent << " dollars at all times.***" << endl;
        cout << "Day: " << day << endl << endl;

        cout << "Inventory:" << endl;
        cout << "==============================" << endl;
        cout << "Cocoa Powder: \t\t" << cocoaPowder << "\t\tCurrent Location: " << location << endl;

        if(recipeOfTheGods == false)
            cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << endl;
        else
            cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << "\t\tRecipe of the Gods" << endl;

        if(jackpotGrace == false)
            cout << "Sugar: \t\t\t" << sugar << endl;
        else
            cout << "Sugar: \t\t\t" << sugar << "\t\tJackpot's Grace" << endl;

        if(dailyInvestor == false)
            cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << endl;
        else
            cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << "\t\tDaily Investor" << endl;

        if(tasteBudEnhancer == false)
            cout << "Ice Cream Cones: \t" << iceCreamCones << endl;
        else
            cout << "Ice Cream Cones: \t" << iceCreamCones << "\t\tTaste Bud Enhancer" << endl;

        cout << "Money: \t\t\t$" << money << endl;

        cout << "==============================" << endl;
        cout << "Main Menu" << endl;
        cout << "==============================" << endl;
        cout << "0. Exit the Game" << endl;
        cout << "1. Enter the Store" << endl;
        cout << "2. Start the Day" << endl;
        cout << "3. Enter Casino" << endl;
        cout << "4. Purchase Upgrades" << endl;
        cout << "5. Change Location" << endl;
        cout << "6. Change Price" << endl;

        do
        {
            if(!cin.good())
            {
                cin.clear();
                string trash;
                cin >> trash;
            }
            cout << "Make a choice: ";
            cin >> mainMenuChoice;
        }while(mainMenuChoice < 0 || mainMenuChoice > 6 || !cin.good());

        if(mainMenuChoice == 1)//Beginning of Store
        {
            do
            {
                if(money <= 0)
                {//Game lost
                    system("cls");
                    cout << "Money: $" << money << endl;
                    cout << "Oh no! You have lost the Ice Cream Store Simulator game. Good Luck next time." << endl;
                    system("pause");
                    return 0;
                }//Game Lost

                system("cls");

                cout << "==============================" << endl;
                cout << "Ice Cream Store Tycoon" << endl;
                cout << "==============================" << endl;
                cout << "***Current Rent of Your store is $" << rent << " per day. Please Maintain at least $" << rent << " dollars at all times.***" << endl;
                cout << "Day: " << day << endl << endl;

                cout << "Inventory:" << endl;
                cout << "==============================" << endl;
                cout << "Cocoa Powder: \t\t" << cocoaPowder << "\t\tCurrent Location: " << location << endl;

                if(recipeOfTheGods == false)
                    cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << endl;
                else
                    cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << "\t\tRecipe of the Gods" << endl;

                if(jackpotGrace == false)
                    cout << "Sugar: \t\t\t" << sugar << endl;
                else
                    cout << "Sugar: \t\t\t" << sugar << "\t\tJackpot's Grace" << endl;

                if(dailyInvestor == false)
                    cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << endl;
                else
                    cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << "\t\tDaily Investor" << endl;

                if(tasteBudEnhancer == false)
                    cout << "Ice Cream Cones: \t" << iceCreamCones << endl;
                else
                    cout << "Ice Cream Cones: \t" << iceCreamCones << "\t\tTaste Bud Enhancer" << endl;

                cout << "Money: \t\t\t$" << money << endl;

                cout << "==============================" << endl;
                cout << "Mark's Grocery Store" << endl;
                cout << "==============================" << endl;
                cout << "0. Exit the Store" << endl;
                cout << "1. Buy Cocoa Powder ($" << cocoaPowderPrice << " per unit (50g))" << endl;
                cout << "2. Buy Heavy Cream ($" << heavyCreamPrice << " per unit (50g))" << endl;
                cout << "3. Buy Sugar ($" << sugarPrice << " per unit (50g))" << endl;
                cout << "4. Buy Milk ($" << milkPrice << " per unit (50g))" << endl;
                cout << "5. Buy Ice Cream Cones ($" << iceCreamConesPrice << " per unit)" << endl;
                cout << "6. Purchase Basic Bundle (Serves 6 customers) ($" << bundlePrice << " per bundle)" << endl;

                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    cout << "Make a choice: ";
                    cin >> storeMenuChoice;
                }while(storeMenuChoice < 0 || storeMenuChoice > 6 || !cin.good());

                //Message Prompt if Money is less than Price
                if(storeMenuChoice == 1 && money < cocoaPowderPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << cocoaPowderPrice - money << " to buy at least 1" << endl;
                    system("pause");
                }
                else if(storeMenuChoice == 2 && money < heavyCreamPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << heavyCreamPrice - money << " to buy at least 1" << endl;
                    system("pause");
                }
                else if(storeMenuChoice == 3 && money < sugarPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << sugarPrice - money << " to buy at least 1" << endl;
                    system("pause");
                }
                else if(storeMenuChoice == 4 && money < milkPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << milkPrice - money << " to buy at least 1" << endl;
                    system("pause");
                }
                else if(storeMenuChoice == 5 && money < iceCreamConesPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << iceCreamConesPrice - money << " to buy at least 1" << endl;
                    system("pause");
                }
                else if(storeMenuChoice == 6 && money < bundlePrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << bundlePrice - money << " to buy at least 1" << endl;
                    system("pause");
                }


                if(storeMenuChoice == 1 && money >= cocoaPowderPrice)//Start of Cocoa Powder Purchase
                {
                    do
                    {
                        cout << "How many Cocoa Powder would you like to purchase?";
                        cin >> quantity;
                    }while(quantity < 0 || quantity*cocoaPowderPrice > money);
                    money = money - (quantity * cocoaPowderPrice);
                    cocoaPowder = cocoaPowder + quantity;
                }//End of Cocoa Powder Purchase

                else if(storeMenuChoice == 2 && money >= heavyCreamPrice)//Start of Heavy Cream Purchase
                {
                    do
                    {
                        cout << "How many Heavy Cream would you like to purchase?" << endl;
                        cin >> quantity;
                    }while(quantity < 0 || quantity*heavyCreamPrice > money);
                    creamDay0 += quantity;
                    money -= quantity*heavyCreamPrice;
                }//Start of Heavy Cream Purchase

                else if(storeMenuChoice == 3 && money >= sugarPrice)//Start of Sugar Purchase
                {
                   do
                   {
                       cout << "How many Sugar would you like to purchase?" << endl;
                       cin >> quantity;
                   }while(quantity < 0 || quantity*sugarPrice > money);
                   sugar += quantity;
                   money -= quantity*sugarPrice;
                }//End of Sugar Purchase

                else if(storeMenuChoice == 4 && money >= milkPrice)//Start of Milk Purchase
                {
                   do
                   {
                       cout << "How many Milk would you like to purchase?" << endl;
                       cin >> quantity;
                   }while(quantity < 0 || quantity*milkPrice > money);
                   milkDay0 += quantity;
                   money -= quantity*milkPrice;
                }//End of Milk Purchase

                else if(storeMenuChoice == 5 >= iceCreamConesPrice)//Start of Ice Cream Cones Purchase
                {
                   do
                   {
                       cout << "How many Ice Cream Cones would you like to purchase?" << endl;
                       cin >> quantity;
                   }while(quantity < 0 || quantity*iceCreamConesPrice > money);
                   iceCreamCones += quantity;
                   money -= quantity*iceCreamConesPrice;
                }//End of Ice Cream Cones Purchase

                else if(storeMenuChoice == 6 && money >= bundlePrice)//Start of Bundle Purchase
                {
                   do
                   {
                       cout << "How many Bundles would you like to purchase?" << endl;
                       cin >> quantity;
                   }while(quantity < 0 || quantity*bundlePrice > money);

                   if(recipeOfTheGods == true)
                   {
                       cocoaPowder += 3 * quantity;
                       creamDay0 += 7 * quantity;
                       sugar += 2 * quantity;
                       milkDay0 += 4 * quantity;
                       iceCreamCones += 6 * quantity;
                   }
                   else
                   {
                       cocoaPowder += 4 * quantity;
                       creamDay0 += 10 * quantity;
                       sugar += 3 * quantity;
                       milkDay0 += 5 * quantity;
                       iceCreamCones += 6 * quantity;
                   }

                   money -= quantity*bundlePrice;
                }//End of Bundle Purchase

                else if(storeMenuChoice == 37)//Cheat Code
                {
                    creamDay0 += 50;
                    sugar += 50;
                    iceCreamCones += 50;
                    cocoaPowder += 50;
                    milkDay0 += 50;
                    money += 300;
                }


            }while(storeMenuChoice != 0);
        }//End of Store

        if(mainMenuChoice == 2)//Start the Day
        {
            money -= rent;

            if(money <= 0)
            {//Game lost
                system("cls");
                cout << "Money: $" << money << endl;
                cout << "Oh no! You have lost the Ice Cream Store Simulator game. Good Luck next time." << endl;
                system("pause");
                return 0;
            }//Game Lost

            int situation = rand()%(1000)+1;
            if(situation == 666)
            {
                cout << "A customer tipped you some money for your service!!!" << endl;
                money += 20;
            }
            else if(situation == 543)
            {
                cout << "A grocery store gifts you raw materials as a donation!" << endl;
                cocoaPowder += 10;
                creamDay0 += 15;
                sugar += 20;
                milkDay0 += 20;
                iceCreamCones += 15;
            }
            else if(situation == 444)
            {
                cout << "A lot of customers write excellent reviews about your store. You gained more customers!" << endl;
                minCustomers += 3;
            }
            else if(situation == 232)
            {
                cout << "Oh No! The Income Tax Department raided your store and found out you have not paid the full taxes! They fine you!" << endl;
                money = money * 0.85;
            }
            else if(situation == 171)
            {
                cout << "Oh No! A severe inflation hits your city. Prices of your raw materials increased!" << endl;
                cocoaPowderPrice = cocoaPowderPrice * 1.05;
                heavyCreamPrice = heavyCreamPrice * 1.05;
                sugarPrice = sugarPrice * 1.05;
                milkPrice = milkPrice * 1.05;
                iceCreamConesPrice = iceCreamConesPrice * 1.05;
            }
            else if(situation == 723)
            {
                cout << "Oh No! Rodents raided your store and spoiled some of your sugar bags!" << endl;
                sugar = sugar * 0.75;
            }


            if(location == "Outskirts")
                maxCustomers = 15;

            else if(location == "Beside Local Park")
                maxCustomers = 20;

            else if(location == "Downtown")
                maxCustomers = 28;

            int customers = rand()%(maxCustomers - minCustomers + 1)+minCustomers;

            if(price >= 7)
                customers = 0;

            else if(price >= 5)
                customers = customers * 0.5;

            else if(price >= 3.75)
                customers = customers * 1;

            else if(price < 3)
                customers = customers * 1.5;

            else if(price < 2)
                customers = customers * 10;

            if(tasteBudEnhancer == true)
            {
                cout << "The Taste Bud Enhancer is attracting more customers!!!" << endl;
                int demandIncrease = rand()%(3);
                customers += demandIncrease;

                if(rand()%(100) < 15)
                {
                    cout << "Oh No! Today, the Taste Bud Enhancer has lost power! To have its power, you can purchase it again from the Upgrade Store." << endl;
                    tasteBudEnhancer = false;
                }
            }

            if(dailyInvestor == true)
            {
                int investment = rand()%(15);
                money += investment;
                cout << "You earned $" << investment << " from your investor today!" << endl;

                if(rand()%(100) < 15)
                {
                    cout << "Oh no! All you investors escaped to another country. You lost your Daily Investor Upgrade. You can purchase it again from the Upgrade Store." << endl;
                    dailyInvestor = false;
                }
            }

            if(recipeOfTheGods == true)
            {
                if(rand()%(100) < 15)
                {
                    cout << "Oh no! Today, you forgot the Recipe of the Gods! To remember it, please purchase it again from the upgrade store!" << endl;
                    recipeOfTheGods = false;
                }
                else
                {
                    cout << "The power of the Recipe of the Gods is letting you use you resources efficiently!" << endl;
                }
            }
            cout << "Today, You had " << customers << " customers." << endl;

            int customersServed = 0;

            while(customers > 0)
            {
                int servings = 0;
                if(recipeOfTheGods == false && cocoaPowder >= 4 && (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) >= 10 && sugar >= 3 && (milkDay0 + milkDay1 + milkDay2 + milkDay3) >= 5 && iceCreamCones >= 6)
                {
                    cocoaPowder -= 4;

                    //Subtracting the Quantity of Heavy Cream
                    if(creamDay4 >= 10)
                    {
                        creamDay4 -= 10;
                    }
                    else if(creamDay4 < 10)
                    {
                        int counter = creamDay4;
                        creamDay4 -= counter;

                        if(creamDay3 >= (10 - counter))
                        {
                            int counter2 = 10 - counter;
                            creamDay3 -= counter2;
                        }

                        else if(creamDay3 < (10 - counter))
                        {
                            int counter2 = creamDay3;
                            creamDay3 -= counter2;

                            if(creamDay2 >= (10 - (counter + counter2)))
                            {
                                int counter3 = 10 - (counter + counter2);
                                creamDay2 -= counter3;
                            }

                            else if(creamDay2 < 10 - (counter + counter2))
                            {
                                int counter3 = creamDay2;
                                creamDay2 -= counter3;

                                if(creamDay1 >= 10 - (counter + counter2 + counter3))
                                {
                                    int counter4 = 10 - (counter + counter2 + counter3);
                                    creamDay1 -= counter4;
                                }

                                else if(creamDay1 < 10 - (counter + counter2 + counter3))
                                {
                                    int counter4 = creamDay1;
                                    creamDay1 -= counter4;

                                    if(creamDay0 == creamDay0)
                                    {
                                        int counter5 = 10 - (counter + counter2 + counter3 + counter4);
                                        creamDay0 -= counter5;
                                    }
                                }
                            }
                        }
                    }

                    sugar -= 3;

                    //Subtracting the Quantity of Milk
                    if(milkDay3 >= 5)
                    {
                        milkDay3 -= 5;
                    }
                    else if(milkDay3 < 5)
                    {
                        int counter = milkDay3;
                        milkDay3 -= counter;

                        if(milkDay2 >= (5 - counter))
                        {
                            int counter2 = 5 - counter;
                            milkDay2 -= counter2;
                        }

                        else if(milkDay2 < (5 - counter))
                        {
                            int counter2 = milkDay2;
                            milkDay2 -= counter2;

                            if(milkDay1 >= (5 - (counter + counter2)))
                            {
                                int counter3 = 5 - (counter + counter2);
                                milkDay1 -= counter3;
                            }

                            else if(milkDay1 < (5 - (counter + counter2)))
                            {
                                int counter3 = milkDay1;
                                milkDay1 -= counter3;

                                if(milkDay0 == milkDay0)
                                {
                                    int counter4 = 5 - (counter + counter2 + counter3);
                                    milkDay0 -= counter4;
                                }
                            }
                        }
                    }
                    iceCreamCones -= 6;
                    servings += 6;
                }
                else if(recipeOfTheGods == true && cocoaPowder >= 3 && (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) >= 7 && sugar >= 2 && (milkDay0 + milkDay1 + milkDay2 + milkDay3) >= 4 && iceCreamCones >= 6)
                {
                    cocoaPowder -= 3;

                    //Subtracting the Quantity of Heavy Cream
                    if(creamDay4 >= 7)
                    {
                        creamDay4 -= 7;
                    }
                    else if(creamDay4 < 7)
                    {
                        int counter = creamDay4;
                        creamDay4 -= counter;

                        if(creamDay3 >= (7 - counter))
                        {
                            int counter2 = 7 - counter;
                            creamDay3 -= counter2;
                        }

                        else if(creamDay3 < (7 - counter))
                        {
                            int counter2 = creamDay3;
                            creamDay3 -= counter2;

                            if(creamDay2 >= (7 - (counter + counter2)))
                            {
                                int counter3 = 7 - (counter + counter2);
                                creamDay2 -= counter3;
                            }

                            else if(creamDay2 < 7 - (counter + counter2))
                            {
                                int counter3 = creamDay2;
                                creamDay2 -= counter3;

                                if(creamDay1 >= 7 - (counter + counter2 + counter3))
                                {
                                    int counter4 = 7 - (counter + counter2 + counter3);
                                    creamDay1 -= counter4;
                                }

                                else if(creamDay1 < 7 - (counter + counter2 + counter3))
                                {
                                    int counter4 = creamDay1;
                                    creamDay1 -= counter4;

                                    if(creamDay0 == creamDay0)
                                    {
                                        int counter5 = 7 - (counter + counter2 + counter3 + counter4);
                                        creamDay0 -= counter5;
                                    }
                                }
                            }
                        }
                    }

                    sugar -= 2;

                    //Subtracting the Quantity of Heavy Cream
                    if(milkDay3 >= 4)
                    {
                        milkDay3 -= 4;
                    }
                    else if(milkDay3 < 4)
                    {
                        int counter = milkDay3;
                        milkDay3 -= counter;


                        if(milkDay2 >= (4 - counter))
                        {
                            int counter2 = 4 - counter;
                            milkDay2 -= counter2;
                        }


                        else if(milkDay2 < (4 - counter))
                        {
                            int counter2 = milkDay2;
                            milkDay2 -= counter2;


                            if(milkDay1 >= (4 - (counter + counter2)))
                            {
                                int counter3 = 4 - (counter + counter2);
                                milkDay1 -= counter3;
                            }


                            else if(milkDay1 < (4 - (counter + counter2)))
                            {
                                int counter3 = milkDay1;
                                milkDay1 -= counter3;


                                if(milkDay0 == milkDay0)
                                {
                                    int counter4 = 4 - (counter + counter2 + counter3);
                                    milkDay0 -= counter4;
                                }
                            }
                        }
                    }
                    iceCreamCones -= 6;
                    servings += 6;
                }
                else
                {
                    customers = 0;
                }

                while(servings > 0 && customers > 0)
                {
                    customers --;
                    servings --;
                    money += price;
                    customersServed++;
                }
            }
            cout << "You served " << customersServed << " of them." << endl;
            system("pause");

            //MILK DECAY SYSTEM
            if(milkDay3 > 0)
            {
                milkDay3 = 0;
            }
            if(milkDay2 > 0)
            {
                milkDay3 = milkDay3 + milkDay2;
                milkDay2 = 0;
            }
            if(milkDay1 > 0)
            {
                milkDay2 = milkDay2 + milkDay1;
                milkDay1 = 0;
            }
            if(milkDay0 > 0)
            {
                milkDay1 = milkDay1 + milkDay0;
                milkDay0 = 0;
            }

            //HEAVY CREAM DECAY SYSTEM
            if(creamDay4 > 0)
            {
                creamDay4 = 0;
            }
            if(creamDay3 > 0)
            {
                creamDay4 = creamDay4 + creamDay3;
                creamDay3 = 0;
            }
            if(creamDay2 > 0)
            {
                creamDay3 = creamDay3 + creamDay2;
                creamDay2 = 0;
            }
            if(creamDay1 > 0)
            {
                creamDay2 = creamDay2 + creamDay1;
                creamDay1 = 0;
            }
            if(creamDay0 > 0)
            {
                creamDay1 = creamDay1 + creamDay0;
                creamDay0 = 0;
            }

            day++;
        }//End of Start the Day


        if(mainMenuChoice == 3)//Start of Casino
        {
            do
            {
                if(money <= 0)
                {//Game lost
                    system("cls");
                    cout << "Money: $" << money << endl;
                    cout << "Oh no! You have lost the Ice Cream Store Simulator game. Good Luck next time." << endl;
                    system("pause");
                    return 0;
                }//Game Lost

                system("cls");

                cout << "==============================" << endl;
                cout << "Ice Cream Store Tycoon" << endl;
                cout << "==============================" << endl;
                cout << "***Current Rent of Your store is $" << rent << " per day. Please Maintain at least $" << rent << " dollars at all times.***" << endl;
                cout << "Day: " << day << endl << endl;

                cout << "Inventory:" << endl;
                cout << "==============================" << endl;
                cout << "Cocoa Powder: \t\t" << cocoaPowder << "\t\tCurrent Location: " << location << endl;

                if(recipeOfTheGods == false)
                    cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << endl;
                else
                    cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << "\t\tRecipe of the Gods" << endl;

                if(jackpotGrace == false)
                    cout << "Sugar: \t\t\t" << sugar << endl;
                else
                    cout << "Sugar: \t\t\t" << sugar << "\t\tJackpot's Grace" << endl;

                if(dailyInvestor == false)
                    cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << endl;
                else
                    cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << "\t\tDaily Investor" << endl;

                if(tasteBudEnhancer == false)
                    cout << "Ice Cream Cones: \t" << iceCreamCones << endl;
                else
                    cout << "Ice Cream Cones: \t" << iceCreamCones << "\t\tTaste Bud Enhancer" << endl;

                cout << "Money: \t\t\t$" << money << endl;

                cout << "==============================" << endl;
                cout << "Jake's Casino" << endl;
                cout << "==============================" << endl;
                cout << "0. Exit the Casino" << endl;
                cout << "1. Buy Lottery ($" << lotteryPrice << ")" << endl;
                cout << "2. Play Rock, Paper, Scissors" << endl;
                cout << "3. Play Money or Goods" << endl;

                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    cout << "Make a choice: ";
                    cin >> casinoMenuChoice;
                }while(casinoMenuChoice < 0 || casinoMenuChoice > 3 || !cin.good());

                //Message Prompt if Money is less than Price
                if(casinoMenuChoice == 1 && money < lotteryPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << lotteryPrice - money << " more to buy this." << endl;
                    system("pause");
                }

                if(casinoMenuChoice == 1 && money >= 10)
                {//Start of Lottery System
                    system("cls");
                    money -= 10;
                    int userChoice;
                    int jackpot = rand()%(10-1+1)+1;
                    if(jackpotGrace == true)
                    {
                        if(rand()%(100) < 15)
                        {
                            cout << "Oh No! Your Jackpot's Grace wears out. To obtain it, purchase it again from the upgrade store." << endl;
                            jackpotGrace = false;
                            system("pause");
                        }
                    }

                    do
                    {
                        system("cls");
                        if(!cin.good())
                        {
                            cin.clear();
                            string trash;
                            cin >> trash;
                        }
                        cout << "Welcome to Jake's Lottery!!!" << endl;
                        cout << "Pick a number from 1 to 10: ";
                        cin >> userChoice;
                    }while(userChoice <= 0 || userChoice > 10 || !cin.good());

                    if(jackpotGrace == true && rand()%(100) < 15)
                    {
                        cout << "The God of Jackpot Blesses you!" << endl;
                        jackpot = userChoice;
                    }
                    if(userChoice == jackpot)
                    {
                        cout << "CONGRATULATIONS!!! You won the Jackpot!" << endl;
                        money += 50;
                        system("pause");
                    }
                    else if(jackpot - userChoice == 1 || userChoice - jackpot == 1)
                    {
                        cout << "Oh no! You were just one number off. Take this one cent prize" << endl;
                        cout << "The jackpot number was " << jackpot << endl;
                        money += 0.01;
                        system("pause");
                    }
                    else
                    {
                        cout << "You did not win the lottery. Good luck next time!" << endl;
                        cout << "The jackpot number was " << jackpot << endl;
                        system("pause");
                    }
                }//End of Lottery System
                else if(casinoMenuChoice == 2)//Start of Rock, Paper, Scissor Minigame
                {
                    system("cls");
                    double userBet;
                    do
                    {
                        system("cls");
                        if(!cin.good())
                        {
                            cin.clear();
                            string trash;
                            cin >> trash;
                        }
                        cout << "Money: " << money << endl;
                        cout << "Welcome to Jake's Minigames!!!" << endl;
                        cout << "Enter the amount of money you would like to bet for a Rock, Paper, Scissors game: ";
                        cin >> userBet;

                        //Message Prompt if Money is less than Price
                        if(money < userBet)
                        {
                            cout << "You Do not have enough money to purchase this!" << endl;
                            cout << "You only have $" << money << "." << endl;
                            system("pause");
                        }
                    }while(userBet > money || userBet < 0 || !cin.good());
                    money -= userBet;

                    int userChoice;
                    int wins = 0;
                    int losses = 0;
                    int ties = 0;
                    int min = 1, max = 3;

                    do
                    {
                        int computerPlay = rand()%(max-min+1)+min;
                        system("cls");
                        cout << "Wins: " << wins << ", Losses: " << losses << ", Ties: "  << ties << endl;
                        cout << "1. Rock" << endl;
                        cout << "2. Paper" << endl;
                        cout << "3. Scissors" << endl;

                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            cout << "What is your choice: ";
                            cin >> userChoice;
                        }while(userChoice < 1 || userChoice > 3 || !cin.good());

                        if(jackpotGrace == true)
                        {
                            if(rand()%(100) < 15)
                            {
                                cout << "Oh No! Your Jackpot's Grace wears out. To obtain it, purchase it again from the upgrade store." << endl;
                                jackpotGrace = false;
                                system("pause");
                            }
                        }

                        if(jackpotGrace == true && rand()%(100) < 15)
                        {
                            cout << "The God of Jackpot Blesses you!" << endl;
                            if(userChoice == 1)
                                computerPlay = 3;
                            else if(userChoice == 2)
                                computerPlay = 1;
                            else if(userChoice == 3)
                                computerPlay = 2;
                        }

                        if(userChoice == 1)
                            cout << "You chose ROCK!" << endl;
                        else if(userChoice == 2)
                            cout << "You chose PAPER!" << endl;
                        else if(userChoice == 3)
                            cout << "You chose SCISSORS!" << endl;

                        if(computerPlay == 1)
                            cout << "The Computer chose ROCK!" << endl;
                        else if(computerPlay == 2)
                            cout << "The Computer chose PAPER!" << endl;
                        else if(computerPlay == 3)
                            cout << "The Computer chose SCISSORS!" << endl;

                        if(userChoice == computerPlay)
                        {
                            cout << "It's a tie." << endl;
                            ties++;
                            system("pause");
                        }
                        else if((userChoice == 1 && computerPlay == 2) || (userChoice == 2 && computerPlay == 3) || (userChoice == 3 && computerPlay == 1))
                        {
                            cout << "You Lost." << endl;
                            losses++;
                            system("pause");
                        }
                        else if((userChoice == 1 && computerPlay == 3) || (userChoice == 2 && computerPlay == 1) || (userChoice == 3 && computerPlay == 2))
                        {
                            cout << "You Won!" << endl;
                            wins++;
                            system("pause");
                        }
                    }while(wins < 3 && losses < 3);

                    if(wins == 3)
                    {
                        cout << "CONGRATS!!! You won the game!" << endl;
                        money += userBet * 2;
                        system("pause");
                    }
                    else
                    {
                        cout << "Oh! You lost the Rock, Paper, Scissor Minigame. Better luck next time." << endl;
                        system ("pause");
                    }
                }//End of Rock, Paper, Scissor Minigame
                else if(casinoMenuChoice == 3)
                {//Start of Money or Goods Game

                    system("cls");

                    int userGamePlay;
                    cout << "Welcome to the Money or Goods game!" << endl;
                    cout << "1. Enter Money Room" << endl;
                    cout << "2. Enter Goods Room" << endl;
                    do
                    {
                        if(!cin.good())
                        {
                            cin.clear();
                            string trash;
                            cin >> trash;
                        }
                        cout << "Make a Choice: " << endl;
                        cin >> userGamePlay;
                    }while(userGamePlay < 0 || userGamePlay > 2 || !cin.good());

                    if(userGamePlay == 1)
                    {//Start of Money Room
                        system("cls");
                        int userDoorChoice;
                        int jackpotDoor = rand()%(2-1+1)+1;
                        cout << "Welcome to the Money Room! There are two doors - Door 1 and Door 2" << endl;
                        cout << "One door has some money, and the other door will take a small portion of money from you!" << endl;

                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            cout << "Which Door would you like to open: ";
                            cin >> userDoorChoice;
                        }while(userDoorChoice < 0 || userDoorChoice > 2 || !cin.good());

                        if(userDoorChoice == jackpotDoor)
                        {
                            cout << "Congrats!!! You chose the correct door, you gained some money!" << endl;
                            money = money * 1.10;
                            system("pause");
                        }
                        else
                        {
                            cout << "Oh no! You chose the wrong door. You lost some money." << endl;
                            money = money * 0.90;
                            system("pause");
                        }

                    }//End of Money Room
                    else if(userGamePlay == 2)//Start of Goods Room
                    {
                        system("cls");
                        int userDoorChoice;
                        int jackpotDoor = rand()%(2-1+1)+1;
                        cout << "Welcome to the Goods Room! There are two doors - Door 1 and Door 2" << endl;
                        cout << "One door has some raw materials(goods), and the other door will take a small portion of your inventory!" << endl;
                        do
                        {
                            if(!cin.good())
                            {
                                cin.clear();
                                string trash;
                                cin >> trash;
                            }
                            cout << "Which Door would you like to open: ";
                            cin >> userDoorChoice;
                        }while(userDoorChoice < 0 || userDoorChoice > 2 || !cin.good());

                        if(userDoorChoice == jackpotDoor)
                        {
                            cout << "Congrats!!! You chose the correct door, you gained some resources!" << endl;
                            cocoaPowder = cocoaPowder * 1.10;
                            creamDay0 += (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) * 0.10;
                            milkDay0 += (milkDay0 + milkDay1 + milkDay2 + milkDay3) * 0.10;
                            sugar = sugar * 1.10;
                            iceCreamCones = iceCreamCones * 1.10;
                            system("pause");
                        }
                        else
                        {
                            cout << "Oh no! You chose the wrong door. You lost some resources." << endl;
                            cocoaPowder = cocoaPowder * 0.90;
                            creamDay0 = creamDay0 * 0.90;
                            milkDay0 = milkDay0 * 0.90;
                            sugar = sugar * 0.90;
                            iceCreamCones = iceCreamCones * 0.90;
                            system("pause");
                        }

                    }//End of Goods Room

                }


            }while(casinoMenuChoice != 0);

        }//End of Casino


        else if(mainMenuChoice == 4)//Start of Upgrades
        {
            do
            {
                if(money <= 0)
                {//Game lost
                    system("cls");
                    cout << "Money: $" << money << endl;
                    cout << "Oh no! You have lost the Ice Cream Store Simulator game. Good Luck next time." << endl;
                    system("pause");
                    return 0;
                }//Game Lost

                system("cls");

                cout << "==============================" << endl;
                cout << "Ice Cream Store Tycoon" << endl;
                cout << "==============================" << endl;
                cout << "***Current Rent of Your store is $" << rent << " per day. Please Maintain at least $" << rent << " dollars at all times.***" << endl;
                cout << "Day: " << day << endl << endl;

                cout << "Inventory:" << endl;
                cout << "==============================" << endl;
                cout << "Cocoa Powder: \t\t" << cocoaPowder << "\t\tCurrent Location: " << location << endl;

                if(recipeOfTheGods == false)
                    cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << endl;
                else
                    cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << "\t\tRecipe of the Gods" << endl;

                if(jackpotGrace == false)
                    cout << "Sugar: \t\t\t" << sugar << endl;
                else
                    cout << "Sugar: \t\t\t" << sugar << "\t\tJackpot's Grace" << endl;

                if(dailyInvestor == false)
                    cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << endl;
                else
                    cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << "\t\tDaily Investor" << endl;

                if(tasteBudEnhancer == false)
                    cout << "Ice Cream Cones: \t" << iceCreamCones << endl;
                else
                    cout << "Ice Cream Cones: \t" << iceCreamCones << "\t\tTaste Bud Enhancer" << endl;

                cout << "Money: \t\t\t$" << money << endl;

                cout << "==============================" << endl;
                cout << "Tory's Dark Web" << endl;
                cout << "==============================" << endl;
                cout << "0. Exit the Upgrades Store" << endl;
                if(recipeOfTheGods == false)
                cout << "1. Purchase Recipe of the Gods ($" << recipeOfTheGodsPrice << ")" << endl;
                if(jackpotGrace == false)
                cout << "2. Purchase Jackpot's Grace ($" << jackpotGracePrice << ")" << endl;
                if(dailyInvestor == false)
                cout << "3. Purchase Daily Investor ($" << dailyInvestorPrice << ")" << endl;
                if(tasteBudEnhancer == false)
                cout << "4. Purchase Taste Bud Enhancer ($" << tasteBudEnhancerPrice << ")" << endl;

                do
                {
                    if(!cin.good())
                    {
                        cin.clear();
                        string trash;
                        cin >> trash;
                    }
                    cin >> upgradeMenuChoice;
                    cout << "Make a choice: ";
                }while(upgradeMenuChoice > 4 || upgradeMenuChoice < 0 || !cin.good());

                //Message Prompt if Money is less than Price
                if(upgradeMenuChoice == 1 && money < recipeOfTheGodsPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << recipeOfTheGodsPrice - money << " more to buy this." << endl;
                    system("pause");
                }
                else if(upgradeMenuChoice == 2 && money < jackpotGracePrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << jackpotGracePrice - money << " more to buy this." << endl;
                    system("pause");
                }
                else if(upgradeMenuChoice == 3 && money < dailyInvestorPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << dailyInvestorPrice - money << " more to buy this." << endl;
                    system("pause");
                }
                else if(upgradeMenuChoice == 4 && money < tasteBudEnhancerPrice)
                {
                    cout << "You Do not have enough money to purchase this!" << endl;
                    cout << "You need $" << tasteBudEnhancerPrice - money << " more to buy this." << endl;
                    system("pause");
                }

                if(upgradeMenuChoice == 1 && money >= recipeOfTheGodsPrice)
                {
                    money -= recipeOfTheGodsPrice;
                    recipeOfTheGods = true;
                }
                else if(upgradeMenuChoice == 2 && money >= jackpotGracePrice)
                {
                    money -= jackpotGracePrice;
                    jackpotGrace = true;
                }
                else if(upgradeMenuChoice == 3 && money >= dailyInvestor)
                {
                    money -= dailyInvestorPrice;
                    dailyInvestor = true;
                }
                else if(upgradeMenuChoice == 4 && money >= tasteBudEnhancerPrice)
                {
                    money -= tasteBudEnhancerPrice;
                    tasteBudEnhancer = true;
                }

            }while(upgradeMenuChoice != 0);
        }//End of Upgrades

        else if(mainMenuChoice == 5)//Start of Change Location
        {
            system("cls");
            cout << "==============================" << endl;
            cout << "Ice Cream Store Tycoon" << endl;
            cout << "==============================" << endl;
            cout << "***Current Rent of Your store is $" << rent << " per day. Please Maintain at least $" << rent << " dollars at all times.***" << endl;
            cout << "Day: " << day << endl << endl;

            cout << "Inventory:" << endl;
            cout << "==============================" << endl;
            cout << "Cocoa Powder: \t\t" << cocoaPowder << "\t\tCurrent Location: " << location << endl;

            if(recipeOfTheGods == false)
                cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << endl;
            else
                cout << "Heavy Cream: \t\t" << (creamDay0 + creamDay1 + creamDay2 + creamDay3 + creamDay4) << "\t\tRecipe of the Gods" << endl;

            if(jackpotGrace == false)
                cout << "Sugar: \t\t\t" << sugar << endl;
            else
                cout << "Sugar: \t\t\t" << sugar << "\t\tJackpot's Grace" << endl;

            if(dailyInvestor == false)
                cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << endl;
            else
                cout << "Milk: \t\t\t" << (milkDay0 + milkDay1 + milkDay2 + milkDay3) << "\t\tDaily Investor" << endl;

            if(tasteBudEnhancer == false)
                cout << "Ice Cream Cones: \t" << iceCreamCones << endl;
            else
                cout << "Ice Cream Cones: \t" << iceCreamCones << "\t\tTaste Bud Enhancer" << endl;

            cout << "Money: \t\t\t$" << money << endl;
            cout << "Day: " << day << endl;

            cout << "==============================" << endl;
            cout << "Change Location" << endl;
            cout << "==============================" << endl;
            cout << "1. Outskirts (Rent: $" << outskirtsRent << ")" << endl;
            cout << "2. Store near Local Park (Rent: $" << storeNearParkRent << ")" << endl;
            cout << "3. Downtown (Rent: $" << downtownRent << ")" << endl;

            do
            {
                if(!cin.good())
                {
                    cin.clear();
                    string trash;
                    cin >> trash;
                }
                cout << "Make a choice: ";
                cin >> locationMenuChoice;
            }while(locationMenuChoice > 3 || locationMenuChoice < 0 || !cin.good());

            if(locationMenuChoice == 1)
            {
                location = "Outskirts";
                rent = outskirtsRent;
            }
            else if(locationMenuChoice == 2)
            {
                location = "Beside Local Park";
                rent = storeNearParkRent;
            }
            else if(locationMenuChoice == 3)
            {
                location = "Downtown";
                rent = downtownRent;
            }

        }//End of Change Location

        else if(mainMenuChoice == 6)//Start of Change Price
        {
            system("cls");
            cout << "Your currently sell the Ice Creams for a price of $" << price << "." << endl;
            cout << "Please enter the new price you want to sell your Ice Creams. Remember, the price will affect the number of customers you get!" << endl;
            do
            {
                if(!cin.good())
                {
                    cin.clear();
                    string trash;
                    cin >> trash;
                }
                cout << "Price: $";
                cin >> price;
            }while(price < 0 || !cin.good());
        }//End of Change Price

    }while(mainMenuChoice != 0);//End of Main Game Loop

    cout << "Thanks for playing! Have a great day!" << endl;

    return 0;
}



