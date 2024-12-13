#include "Cliente.hpp"

unsigned int Cliente::id=0; 

Cliente::Cliente()
{
}


Cliente::Cliente(std::string nome, std::string cpfCnpj, std::string email, std::string  telefone, std::string contato):
nome(nome), cpfCnpj(cpfCnpj), email(email), telefone(telefone), contato(contato)
{
    id++;
}

// Getter e Setter para 'nome'
const std::string Cliente::getNome() const {
    return nome;
}

void Cliente::setNome(const std::string& novoNome) {
   nome = novoNome;
}

// Getter e Setter para 'cpfCnpj'
const std::string Cliente::getCpfCnpj() const {
    return cpfCnpj;
}

void Cliente::setCpfCnpj(const std::string& novoCpfCnpj) {
    cpfCnpj = novoCpfCnpj;
}

// Getter e Setter para 'email'
const std::string Cliente::getEmail() const {
    return email;
}

void Cliente::setEmail(const std::string& novoEmail) {
    email = novoEmail;
}

// Getter e Setter para 'telefone'
const std::string Cliente::getTelefone() const {
    return telefone;
}

void Cliente::setTelefone(const std::string& novoTelefone) {
    telefone = novoTelefone;
}
