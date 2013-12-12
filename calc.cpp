#include <iostream>
#include <cstdlib> 
 
using namespace std; 

int main ()

{

    int n1, n2; int opc;
    cout << "                     ************************************* \n"

         << "                     * Calculadora basica para 2 numeros* \n"

         << "                     ************************************* \n"

         << endl
         << endl
         << endl
         << "Ingrese el primer numero: ";

     cin >> n1;
    cout << endl
         << endl

         << "Ingrese el segundo numero: ";

     cin >> n2;     

 system ("clear");     

     cout << "                     ************************************* \n"

         << "                     * Calculadora basica para 2 numeros cambio más cosas* \n"

         << "                     ************************************* \n"

         << endl

         << endl

         << endl

         << "                         Que operacion desea realizar? "

         << endl

         << endl

         << "   1) Suma.\n"

         << "   2) Resta.\n"

         << "   3) Multiplicacion.\n"

         << "   4) Division.\n"

         << "   *) presione cualquier otro numero para salir\n\n\n"

         << "   Ingrese el numero de la opcion que desea realizar: ";

     cin >> opc; 
         switch (opc)

         {
                case 1:                    

                       system ("clear");                      

                       cout << "\n\n       La suma de los numeros es: "

                            << n1+n2

                            << endl

                            << endl;                       

                       break;        

                case 2:                     

                       system ("clear");                       

                       cout << "\n\n       La resta de los numeros es: "

                            << n1-n2
                            << endl
                            << endl;                      

                       break;               

                case 3:                    

                       system ("clear");                       

                       cout << "\n\n       La multiplicacion de los numeros es: "

                            << n1*n2

                            << endl

                            << endl;                       

                       break;         

               case 4:                     

                       system ("clear");                       

                       cout << "\n\n       La division de los numeros es: "

                            << n1/n2

                            << endl

                            << endl;                       

                       default: break;         

          }

              
 return 0;


}
