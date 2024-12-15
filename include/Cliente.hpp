#pragma once
#include <iostream> 
#include <string> 

class Cliente {
    
protected:
    static unsigned int idCounter;
    unsigned int id;
    std::string nome;
    std::string cpfCnpj;
    std::string email;
    std::string telefone;
    std::string contato;

public:
    Cliente(std::string nome, std::string cpfCnpj, std::string email, std::string  telefone, std::string contato);
    
    Cliente();

    // Getter e Setter para 'nome'
    const std::string getNome() const;

    void setNome(const std::string& novoNome);

    // Getter e Setter para 'cpfCnpj'
    const std::string getCpfCnpj() const;

    void setCpfCnpj(const std::string& novoCpfCnpj);

    // Getter e Setter para 'email'
    const std::string getEmail() const;

    void setEmail(const std::string& novoEmail);

    // Getter e Setter para 'telefone'
    const std::string getTelefone() const;

    void setTelefone(const std::string& novoTelefone);
    
    void imprimirDados();

};
