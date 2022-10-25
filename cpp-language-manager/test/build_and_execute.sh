#!/bin/bash

## Compilo código objeto
g++ -Wall -std=c++11 -c ../src/LanguageManager.cpp -o LanguageManager.o
g++ -Wall -std=c++11 -c ../src/IniReader.cpp -o IniReader.o 
g++ -Wall -std=c++11 -c ./IniLanguageManagerClassUnitTest.cpp -o IniLanguageManagerClassUnitTest.o 

## Compilo el Binario
g++ -Wall -std=c++11 LanguageManager.o IniLanguageManagerClassUnitTest.o IniReader.o -o IniReaderUnitTest.bin -I../include/vendors/catch

## Permisos de Ejecución para el binario

## Limpio los códigos objeto
rm ./*.o