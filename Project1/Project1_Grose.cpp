/*
 *   @author       Written By Bradley Grose
 *   @date           Completed On 8/31/2020 at 10:06PM
 *   @summary   This Program will allow the user to give their first and last 
 *                         name and then a command that will do an action this action will 
 *              either be Hello, Goodbye, or invalid
 *   @input     The input for the name can be any string, however the commands 
 *              must be "A" or "B" to run without invalid. The command is cap 
 *              sensitive
 *   @output    The output is either 'Hello <name>", a countdown from 10 then 
 *              goodbye, or an invalid message
 *   @other     None.
 */

#include<iostream>

using namespace std;

int main() {

   //Variables
   string firstName, lastName, command;

   //IO For Collection
   cout << "\nEnter your first name: ";
   cin >> firstName;
   cout << "Enter your last name: ";
   cin >> lastName;
   cout << "Enter your command: ";
   cin >> command;

   if (command == "A") 
   {
        cout << "Hello, " << firstName << " " << lastName << "." << endl;
   } 
   else if (command == "B") 
   {
        for (int i = 10; i > 0; i--) 
        {
            cout << i << endl;
        }
        cout << "Goodbye!" << endl;
   } 
   else 
   {
        cout << "Invalid Command!" << endl;
   }

   return 0;
   
}