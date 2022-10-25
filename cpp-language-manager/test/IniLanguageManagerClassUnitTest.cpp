#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "../include/LanguageManager.hpp"
#include <catch.hpp>

#include <iostream>

using namespace std;

TEST_CASE( "Correct translation into default language", "[LanguageManager getTranslation]" )
{
    // Arrange
    LanguageManager lm1;
 
    // Act        
    lm1.setLanguage("./resources/configuration.ini");

    // Assert
    REQUIRE_NOTHROW( lm1.getTranslation("HELLO_WORLD") == "¡Hola_Mundo!" );
}

TEST_CASE( "Correct translation into Spanish", "[LanguageManager getTranslation]" )
{
    // Arrange
    LanguageManager lm2;
 
    // Act
    lm2.setLanguage("../lang/esAR.ini");
        
    // Assert
    REQUIRE( lm2.getTranslation("HELLO_WORLD") == "¡Hola Mundo!" );
}

TEST_CASE( "Correct translation into English", "[LanguageManager getTranslation]" )
{
    // Arrange
    LanguageManager lm3;
 
    // Act
    lm3.setLanguage("../lang/enUS.ini");
        
    // Assert
    REQUIRE( lm3.getTranslation("HELLO_WORLD") == "Hello_World!" );
}

TEST_CASE( "Correct translation into French", "[LanguageManager getTranslation]" )
{
    // Arrange
    LanguageManager lm4;
 
    // Act
    lm4.setLanguage("../lang/frFR.ini");
        
    // Assert
    REQUIRE( lm4.getTranslation("HELLO_WORLD") == "¡Salut_monde!" );
}
