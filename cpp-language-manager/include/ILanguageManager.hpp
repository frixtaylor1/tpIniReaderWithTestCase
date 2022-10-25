#ifndef ILANGUAGEMANAGER_HPP
#define ILANGUAGEMANAGER_HPP

#include "./common.hpp"
#include <iostream>

interface ILanguageManager
{
    virtual ~ILanguageManager() {};
    virtual void setLanguage( std::string languageCode ) = 0;
    virtual std::string getTranslation( std::string id ) = 0;
};

#endif // ILANGUAGEMANAGER_HPP