#pragma once
#include "Ecomper.hpp"
 
class Desenvolvedor : public Ecomper {
public:
    // Construtor usando o construtor da classe base
    Desenvolvedor(std::string& nome,  std::string& cpf, 
                   std::string& email,  std::string& cargo)
};