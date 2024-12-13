#include "Desenvolvedor.hpp"

// Construtor que chama o construtor da classe base
Desenvolvedor::Desenvolvedor(unsigned int id,  std::string& nome,  std::string& cpf, 
                              std::string& email,  std::string& cargo)
    : Ecomper(id, nome, cpf, email, cargo) {}
