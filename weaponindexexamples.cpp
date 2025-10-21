#include <iostream>

int main(){

    //Simple Exercise in switches using the names of the guns from the game I am developing


    int weaponindex;

    std::cout << "Pick Any Index 0-3 and see what weapon you get: ";
    std::cin >> weaponindex;

    switch (weaponindex){

    case 0:
        std::cout << "You Got The Axe";
        break;

    case 1:
        std::cout << "You Got The Iron Mane Pistol";
        break;

    case 2:
        std::cout << "You Got The Warden Semi Automatic Shotgun";
        break;

    case 3:
        std::cout << "You Got The Scythe Assault Rifle";
        break;    
    
    default:

    std::cout << "Only 0-3 is available";
        break;
        
    }
    



    return 0;
}