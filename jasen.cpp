#include "jasen.h"
#include <algorithm>
#include <sstream>

 bool Asanat(const std::string& syotto, const std::string& Asana) {
    return syotto.find(Asana) != std::string::npos;
}


Kdata jasensyotto(const std::string& syotto) {
    Kdata tulos;

     std::string pienisyotto = syotto;
    std::transform(pienisyotto.begin(), pienisyotto.end(), pienisyotto.begin(), ::tolower);



     if (Asanat(pienisyotto, "buttoni")){
        tulos.type = "buttoni";
    }else if (Asanat(pienisyotto, "kortti")) {
        tulos.type = "card";

    } else if (Asanat(pienisyotto, "navbar")){

        tulos.type = "navbar";
    }




    std::vector<std::string> Asana = {
        
        "pallo", "hover", "sininen", "varjo", "responsiivinen", "keltainen", "vihreä", "liila", "musta", "punainen", "reunat", "gradientti", "pyöristetty", "iso-teksti", "hover-vaikutus", "keskitetty", "valkoinen-teksti", "läpinäkyvä", "kehys-varjolla"

    
    
    };

    for (const auto& Asana : Asana){
        if (Asanat(pienisyotto, Asana)){
            tulos.styles.push_back(Asana);
        }}

return tulos;
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