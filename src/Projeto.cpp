#include "Projeto.hpp"

unsigned int Projeto::idCounter = 0;

Projeto::Projeto(Cliente cliente,  std::string dataInicio, std::string prazo,
                   std::string descricao,  std::string contrato)
    : id(idCounter++), cliente(cliente), dataInicio(dataInicio), prazo(prazo), descricao(descricao), contrato(contrato)
{   
    devs = {};
    itensFisc = {};
    etapasProjeto = {};
}

// Construtor vazio
Projeto::Projeto()
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

std::vector<ItemFiscal> Projeto::getItensFiscais(){
    return this->itensFisc;
}


void Projeto::setContrato(const std::string& novoContrato) {
    contrato = novoContrato;
}

int Projeto::cadastrarDesenvolvedor(Desenvolvedor& desenvolvedor){

    for (auto& d : this->devs) {
        
        if(desenvolvedor.getId() == d.getId())
            return 0; 

    }
    
    this->devs.push_back(desenvolvedor);

    return 1;
}

void Projeto::associarItemFiscal(const ItemFiscal& fisc){
    this->itensFisc.push_back(fisc);
}

Etapa Projeto::cadastrarEtapaDesenvolvimento(std::string cronograma, std::string statusProjeto){

    Etapa e = Etapa(cronograma, statusProjeto);

    this->associarEtapa(e); 

    return e;
}

void Projeto::associarEtapa(Etapa& etapa){
    this->etapasProjeto.push_back(etapa);
}

void Projeto::imprimirDados(){
    std::cout << std::endl << "--- Dados Projeto ---" << std::endl; 

    std::cout << "ID:" << id << std::endl; 
    std::cout << "Data Inicio:" << dataInicio << std::endl; 
    std::cout << "Prazo:" << prazo << std::endl; 
    std::cout << "Descrição:" << descricao << std::endl;
    std::cout << "Contrato:" << contrato << std::endl; 
    
    std::cout << std::endl; 

    std::cout << "Cliente:" << std::endl;
    cliente.imprimirDados();

    std::cout << std::endl; 

    std::cout << "Desenvolvedores:" << std::endl;
    for (auto& d : this->devs) {
        d.imprimirDados(); 
    }

    std::cout << std::endl; 

    std::cout << "Itens Fiscais:" << std::endl;
    for (auto& f : this->itensFisc) {
        f.imprimirDados(); 
    }

    std::cout << std::endl; 
    
    std::cout << "Etapas:" << std::endl;
    for (auto& e : this->etapasProjeto) {
        e.imprimirDados(); 
    }

    std::cout << std::endl; 

    std::cout << "---------------------" << std::endl; 

}