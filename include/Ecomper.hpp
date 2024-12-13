#pragma once
#include <iostream>
#include <string>


class Ecomper{

private:
    static unsigned int id;
    std::string nome;
    std::string cpf; 
    std::string email; 
    std::string cargo; 

public:
    Ecomper(std::string nome, std::string cpf, std::string email, std::string cargo);

    // Getters
    unsigned int getId() const;
    const std::string& getNome() const;
    const std::string& getCpf() const;
    const std::string& getEmail() const;
    const std::string& getCargo() const;

    // Setters
    void setId(unsigned int novoId);
    void setNome(const std::string& novoNome);
    void setCpf(const std::string& novoCpf);
    void setEmail(const std::string& novoEmail);
    void setCargo(const std::string& novoCargo);
};
