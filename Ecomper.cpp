#include "Ecomper.h"

// Construtor com parâmetros
Ecomper::Ecomper(unsigned int id,  std::string& nome,  std::string& cpf, std::string& email,  std::string& cargo)
    : id(id), nome(nome), cpf(cpf), email(email), cargo(cargo) {
}

// Getters
unsigned int Ecomper::getId() const {
    return id;
}

const std::string& Ecomper::getNome() const {
    return nome;
}

const std::string& Ecomper::getCpf() const {
    return cpf;
}

const std::string& Ecomper::getEmail() const {
    return email;
}

const std::string& Ecomper::getCargo() const {
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