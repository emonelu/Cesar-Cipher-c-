// Caesar Cipher c++.cpp
// Caesar Cipher is one of the oldest methods of cryptography 
// and it was used for encripting texts in public by swifting the letters 
// Instruction:
// Make a Caesar Cipher application to take the user message and enrypting accordingly
//



#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool  isRunning = true;
    while (isRunning)
    {
      

            int i, lenght, choise, swiftingKey;
            cout << "Enter the message: \n";
            char plainMessage[100], letter, decision; // get user message and store it into a variable type char
            cin.ignore();
            cin.getline(plainMessage,100);
            cout << "Enter your swifting key/number: \n";
            cin >> swiftingKey;
            lenght = strlen(plainMessage);//!!! iu I think it works like this :)))
            cout << "Enter your choise \n1. Encryption \n2. Decryption \n";
            cin >> choise;
            //let try with string instead of Char; it doesn't work string 

            //store the choise in the int choise 
            //This will allows the user to decrypt a text or encrypt.


            if (choise == 1)// for encryption 
            {


                for (int i = 0; plainMessage[i] != '\0'; ++i)
                {
                    letter = plainMessage[i];
                    // lower letter first 
                    if (letter >= 'a' && letter <= 'z')
                    {
                        letter = letter + swiftingKey;
                        if (letter > 'z')
                        {
                            letter = letter - 'z' + 'a' - 1;
                        }
                        plainMessage[i] = letter;
                    }
                    // uppercase letter
                    if (letter >= 'A' && letter <= 'Z')
                    {
                        letter = letter + swiftingKey;
                        if (letter > 'Z')
                        {
                            letter = letter - 'Z' + 'A' - 1;
                        }
                        plainMessage[i] = letter;
                    }
                }
                printf("Encrypted message is: %s\n", plainMessage);
                cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
                cin.get();

            }
            else if (choise == 2)
            {
                for (int i = 0; plainMessage[i] != '\0'; ++i)
                {
                    letter = plainMessage[i];
                    // lower letter first 
                    if (letter >= 'a' && letter <= 'z')
                    {
                        letter = letter - swiftingKey;
                        if (letter < 'a')
                        {
                            letter = letter + 'z' - 'a' + 1;
                        }
                        plainMessage[i] = letter;
                    }
                    // uppercase letter
                    if (letter >= 'A' && letter <= 'Z')
                    {
                        letter = letter - swiftingKey;
                        if (letter < 'A')
                        {
                            letter = letter + 'Z' - 'A' + 1;
                        }
                        plainMessage[i] = letter;
                    }
                }
                printf("Decypyed message is: %s\n", plainMessage);
                cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
          

            }
            cout << "\tWold you like to start again?   \n\t";
            cout << "\tPress y for Yes\n\tOr n for No\n\t";
            cin >> decision;
            for (i = 0; i < decision != '\0'; ++i)
            {
                if (decision == 'y' || decision == 'Y')
                {
                    
                    isRunning = true;

                  //    char plainMessage[100];
                  

                }

              
                if (decision == 'n' || decision == 'N')
                {

                    isRunning = false;
                }
            }

        }



        return 0;
}

