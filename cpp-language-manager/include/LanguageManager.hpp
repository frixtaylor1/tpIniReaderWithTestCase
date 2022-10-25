#ifndef LANGUAGEMANAGER_HPP
#define LANGUAGEMANAGER_HPP

#include "./ILanguageManager.hpp"
#include "./IniReader.hpp"

class LanguageManager : implements ILanguageManager
{
private:
    IniReader* ir;
    std::string code;
public:
    LanguageManager();
    ~LanguageManager();
    void setLanguage( std::string languageCode );
    std::string getTranslation( std::string id );
};

#endif // LANGUAGEMANAGER_HPP