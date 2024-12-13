#include "Ecomper.hpp"

unsigned int Ecomper::id = 0;

// Construtor com parâmetros
Ecomper::Ecomper(std::string nome,  std::string cpf, std::string email,  std::string cargo)
    : nome(nome), cpf(cpf), email(email), cargo(cargo) 
{
    id++;
}

// Getters
unsigned int Ecomper::getId()  {
    return id;
}

std::string Ecomper::getNome()  {
    return nome;
}

std::string Ecomper::getCpf()  {
    return cpf;
}

std::string Ecomper::getEmail()  {
    return email;
}

std::string Ecomper::getCargo() {
    return cargo;
}

// Setters
void Ecomper::setId(unsigned int novoId) {
    id = novoId;
}

void Ecomper::setNome(const std::string& novoNome) {
    nome = novoNome;
}

void Ecomper::setCpf(const std::string& novoCpf) {
    cpf = novoCpf;
}

void Ecomper::setEmail(const std::string& novoEmail) {
    email = novoEmail;
}

void Ecomper::setCargo(const std::string& novoCargo) {
    cargo = novoCargo;
}
