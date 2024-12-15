#pragma once
#include <iostream>
#include <string>

class Ecomper{

private:
    static unsigned int idCounter;
    unsigned int id;
    std::string nome;
    std::string cpf; 
    std::string email; 
    std::string cargo; 

public:
    Ecomper(std::string nome, std::string cpf, std::string email, std::string cargo);

    // Getters
    unsigned int getId();
    std::string getNome();
    std::string getCpf() ;
    std::string getEmail() ;
    std::string getCargo() ;

    // Setters
    void setId(unsigned int novoId);
    void setNome(const std::string& novoNome);
    void setCpf(const std::string& novoCpf);
    void setEmail(const std::string& novoEmail);
    void setCargo(const std::string& novoCargo);

    void imprimirDados();
};
