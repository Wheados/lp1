#ifndef APP_H
#define APP_H

#include "Diario.hpp"

#include <string>

struct App{

    

    Diario diario;

    App(const std::string& filename);
    int run(int argc, char* argv[]);
    void showUsage();

    void add(const std::string mensagem);
    void add();
    
    void loadMsgs(const std::string& fileName);
    void loadMsgs();

    void listMensagens();
    void searchMsg(const std::string msg);

};


#endif