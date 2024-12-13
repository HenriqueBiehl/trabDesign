#include "Etapa.hpp"

// Construtor com parâmetros
Etapa::Etapa(unsigned int id, std::string& cronograma, std::string& status, 
             std::string& statusProjeto)
    : id(id), cronograma(cronograma), status(status), statusProjeto(statusProjeto) {
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

const std::string& Etapa::getStatusProjeto() const {
    return statusProjeto;
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

void Etapa::setStatusProjeto(const std::string& novoStatusProjeto) {
    statusProjeto = novoStatusProjeto;
}
