#include "mylly.h"
#include <fstream>
#include <filesystem>
#include <sstream>
#include <filesystem>
namespace fs = std::filesystem;

 std::string HTMLtemp(const Kdata& data) {
    if (data.type == "buttoni"){

     return R"(<!DOCTYPE html>
<html lang="fi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Generoitu Komponentti</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <button class="komponentti1">Paina</button>
</body>
</html>
)";
   
}
    //Lisää komponentteja
    return "<div>?</div>";
}



 std::string CSStemp(const Kdata& data){
      std::ostringstream css;
    if (data.type == "buttoni") {

        css << ".komponentti1 {\n";
        css << "  padding: 10px 20px;\n";
        css << "  border: none;\n";
        css << "  color: white;\n";
        css << "  cursor: pointer;\n";

     for (const auto& style : data.styles){

            if (style == "pallo") css << "  border-radius: 50%;\n";
            if (style == "sininen") css << "  background-color:rgb(0, 0, 221);\n";
            if (style == "varjo") css << "  box-shadow: 2px 2px 5px rgba(0,0,0,0.8);\n";
        



            if (style == "keltainen") css << "  background-color: rgb(244, 255, 31);\n";
            if (style == "vihreä") css << "  background-color: rgb(85, 230, 13);\n";
            if (style == "musta") css << "  background-color: rgb(0, 0, 0);\n";
            if (style == "liila") css << "  background-color: rgb(157, 20, 220);\n";






            if (style == "punainen") css << "  background-color: rgb(220, 20, 60);\n";
if (style == "reunat") css << "  border: 2px solid black;\n";
if (style == "gradientti") css << "  background: linear-gradient(to right, #4facfe, #00f2fe);\n";
if (style == "pyöristetty") css << "  border-radius: 12px;\n";
if (style == "iso-teksti") css << "  font-size: 2rem;\n";
if (style == "hover-vaikutus") css << "  transition: all 0.3s ease;\n";
if (style == "keskitetty") css << "  display: flex;\n  justify-content: center;\n  align-items: center;\n";
if (style == "valkoinen-teksti") css << "  color: white;\n";
if (style == "läpinäkyvä") css << "  opacity: 0.7;\n";
if (style == "kehys-varjolla") css << "  border: 1px solid #aaa;\n  box-shadow: 0 0 8px rgba(0,0,0,0.5);\n";
     }

        css << "  transition: 0.3s ease;\n";
        css << "}\n";

    if (std::find(data.styles.begin(), data.styles.end(), "hover") != data.styles.end()) {
            css << ".komponentti1:hover {\n";
            css << "  background-color:rgb(255, 109, 51);\n";
            css << "}\n";
        }}

    return css.str();
}

bool genKtiedostot(const Kdata& data, const std::string& tulosD){
     fs::create_directories(tulosD);

     std::ofstream htmlFile(tulosD + "/index.html");
      std::ofstream cssFile(tulosD + "/styles.css");

    if (!htmlFile || !cssFile) return false;

 htmlFile << HTMLtemp(data);
 cssFile << CSStemp(data);
  htmlFile.close();
  cssFile.close();

    return true;
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





