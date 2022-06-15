// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>



int main()
{
    srand(time(0));
   
   


    int x = rand() % 4 +1;
    
    

    bool Menu = true;
 bool subMenu = false;
 while (Menu == true) {
   
     switch (x) {


     case 1:


         while (subMenu == false)
         { 

             std::cout << "What color is the sky?\n\n" <<
                 "1. Blue.\n2. Yellow.\n3.purlple.\n\n";
             std::cin >> x;
             switch (x)
             {
             case 1:
                 
                 std::cout << "Hooray you did it!!!\n\n";
                 
                 subMenu = true;

                 break;
             case 2:

                 std::cout << "Wrong answer. Try Again\n\n";
                

                 break;
             case 3:
                 std::cout << "Wrong answer. Try Again\n\n";



                 break;    
             }
            
          

             
         }

         Menu = false;




         break;


     case 2: 
       
         while (subMenu == false)
         {

             std::cout << "Which song is not by sung Michael Jackson?\n\n" <<
                 "1.Black or White \n2. Beat it.\n3.Purple Rain.\n4.Man in the mirror \n\n";
             std::cin >> x;
             switch (x)
             {
             case 1:

                    std::cout << "Wrong answer. Try Again\n\n";

                 break;
             case 2:

                 std::cout << "Wrong answer. Try Again\n\n";


                 break;
             case 3:
              
                std::cout << "Hooray you did it!!!\n\n ";

                 subMenu = true;


                 break;
             case 4:

                 std::cout << "Wrong answer. Try Again\n\n";



                 break;
             }




         }

         Menu = false;
         
         
         break;




     case 3:


         while (subMenu == false)
         {

             std::cout << "What color is a classic rubber duck?\n\n" <<
                 "1.Green \n2.Grey.\n3.Purple.\n4.Yellow \n\n";
             std::cin >> x;
             switch (x)
             {
             case 1:

                 std::cout << "Wrong answer. Try Again\n\n";

                 break;
             case 2:

                 std::cout << "Wrong answer. Try Again\n\n";


                 break;
             case 3:

                std::cout << "Wrong answer. Try Again\n\n";

                 break;
             case 4:

                 
                std::cout << "Hooray you did it!!!\n\n ";

                 subMenu = true;



                 break;
             }




         }

         Menu = false;




         break;


     case 4:

          while (subMenu == false)
         {

             std::cout << "What is choice is not a name of a spider?\n\n" <<
                 "1.Scorpion\ \n2.Huntsmen.\n3.Wolf.\n4.Orb Weavers \n\n";
             std::cin >> x;
             switch (x)
             {
             case 1:

                 std::cout << "Hooray you did it!!!\n\n ";

                 subMenu = true;


                 break;
             case 2:

                 std::cout << "Wrong answer. Try Again\n\n";


                 break;
             case 3:

                 std::cout << "Wrong answer. Try Again\n\n";

                 break;
             case 4:

                 std::cout << "Wrong answer. Try Again\n\n";



                 break;
             }




         }

         Menu = false;


         break; 



     }
 }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
