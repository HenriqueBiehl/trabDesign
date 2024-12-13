#pragma once
#include "Ecomper.h"

class Desenvolvedor : public Ecomper {
public:
    // Construtor usando o construtor da classe base
    Desenvolvedor(unsigned int id,  std::string& nome,  std::string& cpf, 
                   std::string& email,  std::string& cargo)
};