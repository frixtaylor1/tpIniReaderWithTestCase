#include "../include/LanguageManager.hpp" 

LanguageManager::LanguageManager()
{
    this->ir = new IniReader;
}
LanguageManager::~LanguageManager()
{
    delete ir;
}
void LanguageManager::setLanguage( std::string languageCode )
{
    ir->open( languageCode );
}
std::string LanguageManager::getTranslation( std::string id )
{
    return ir->selectSection( "GENERAL" )->getValue( id );
}
