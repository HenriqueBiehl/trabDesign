#include "Etapa.hpp"

unsigned int Etapa::idCounter = 0;

// Construtor com parâmetros
Etapa::Etapa(std::string& cronograma, std::string& status)
    : id(idCounter++), cronograma(cronograma), status(status)
{
}

// Getters
unsigned int Etapa::getId() const {
    return id;
}

const std::string& Etapa::getCronograma() const {
    return cronograma;
}

const std::string& Etapa::getStatus() const {
    return status;
}

// Setters
void Etapa::setId(unsigned int novoId) {
    id = novoId;
}

void Etapa::setCronograma(const std::string& novoCronograma) {
    cronograma = novoCronograma;
}

void Etapa::setStatus(const std::string& novoStatus) {
    status = novoStatus;
}


void Etapa::imprimirDados() {

    std::cout << "ID: " << id << std::endl;
    std::cout << "Cronograma: " << cronograma << std::endl;
    std::cout << "Status: " << status << std::endl;
}

