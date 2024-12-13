#include "Desenvolvedor.hpp"

// Construtor que chama o construtor da classe base
Desenvolvedor::Desenvolvedor(std::string& nome,  std::string& cpf, 
                              std::string& email,  std::string& cargo)
    : Ecomper(nome, cpf, email, cargo) {}
