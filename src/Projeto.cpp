#include "Projeto.hpp"

unsigned int Projeto::id = 0;

Projeto::Projeto(Cliente& cliente,  std::string& dataInicio, std::string prazo,
                   std::string& descricao,  std::string& contrato)
    : cliente(cliente), dataInicio(dataInicio), prazo(prazo), descricao(descricao), contrato(contrato)
{
}

// Construtor vazio
Projeto::Projeto()
    : cliente(Cliente("", "", "", "", "")), // Atribuindo um cliente padrão
      dataInicio(""),
      prazo(""),
      descricao(""),
      contrato("")
{
}


unsigned int Projeto::getId() const {
    return id;
}

void Projeto::setId(unsigned int novoId) {
    id = novoId;
}

// Getter e Setter para 'cliente'
const Cliente& Projeto::getCliente() const {
    return cliente;
}

void Projeto::setCliente(const Cliente& novoCliente) {
    cliente = novoCliente;
}

// Getter e Setter para 'dataInicio'
const std::string& Projeto::getDataInicio() const {
    return dataInicio;
}

void Projeto::setDataInicio(const std::string& novaDataInicio) {
    dataInicio = novaDataInicio;
}

// Getter e Setter para 'descricao'
const std::string& Projeto::getDescricao() const {
    return descricao;
}

void Projeto::setDescricao(const std::string& novaDescricao) {
    descricao = novaDescricao;
}

// Getter e Setter para 'contrato'
const std::string& Projeto::getContrato() const {
    return contrato;
}

void Projeto::setContrato(const std::string& novoContrato) {
    contrato = novoContrato;
}

int cadastrarDesenvolvedor(const Desenvolvedor& desenvolvedor){

    for (const auto& dev : this->desenv) {
        
        if(dev.getId() == desenvolvedor.getId())
            break; 

    }

    if(dev == NULL){
        vector.push_back(desenvolvedor);
        return 1; 
    }

    return 0;
}
