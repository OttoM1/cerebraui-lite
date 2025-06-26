#include <iostream>
#include <string>
#include "jasen.h"
#include "mylly.h"
int main(){

    std::string syotto;

    std::cout << "Kuvaile Komponentti:\n> ";
    std::getline(std::cin, syotto);

    


    Kdata jasennelty = jasensyotto(syotto);
    if (jasennelty.type.empty()) {
        std::cout << "EN OSAA!.\n";
        return 1;
    }
std::string tulos = "output/" + jasennelty.type + "_01";
     if (genKtiedostot(jasennelty, tulos)){

        std::cout << "Komponentti valmis: " << tulos << "\n";
} else{

        std::cout << "Komponentti epäonnistui :(\n";
}
    return 0;
}





//Ohjeet kokeiluun

// luo cerebraui-lite niminen kansio ja lisää tämän projektin kaikki tiedostot siihen
// lisää cerebraui-lite kansion sisään myös uusi kansio nimeltä output ja sen kansion sisään kansio nimeltä buttoni_01

// lisää buttoni_01 kansion sisään index.html ja styles.css tiedostot




//tämän jälkeen avaa cli ja anna alla olevat käskyt järjestyksessä:


//   g++ -std=c++17 main.cpp jasen.cpp mylly.cpp -o cerebraui

//   ./cerebraui



//Windows

//g++ -std=c++17 main.cpp jasen.cpp mylly.cpp -o cerebraui.exe

//cerebraui.exe



/* 
Tätä mallia voi hyödyntää vapaasti ja
 laajentaa niin paljon kuin mielikuvitusta riittää! 
 */