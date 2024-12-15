// Relatorio.cpp
#include "Relatorio.hpp"
#include <iostream>

// Construtor
Relatorio::Relatorio(const std::string& tipo) : tipo(tipo) {
}

// Métodos

void Relatorio::gerarRelatorioAtividade(std::vector<Atividade> atvs){
    std::cout << "Gerando relatório de atividades...\n";
    for (auto& a : atvs) {
        adicionarAtividadeRelatorio(a);
    }
}

void Relatorio::gerarRelatorioItensFiscais(std::vector<Projeto> proj) {
    std::cout << "Gerando relatório de itens fiscais...\n";

    for (auto& proj : proj) {
        for(auto& fisc : proj.getItensFiscais()){
            adicionarItemFiscalRelatorio(fisc);
        }
     }
}

void Relatorio::adicionarAtividadeRelatorio(const Atividade& a) {
    this->atividades.push_back(a);
}

void Relatorio::adicionarItemFiscalRelatorio(const ItemFiscal& f) {
    this->itensFiscais.push_back(f);
}

void Relatorio::gerarRelatorioPDF() {
    std::cout << "Gerando relatório em PDF...\n";
    // Implementação fictícia de geração de PDF
}

void Relatorio::visualizarRelatorio() {
    std::cout << "Visualizando relatório...\n";
    std::cout << "Relatorio " << this->getTipo() << std::endl << std::endl;
    
    if(!atividades.empty())
        this->visualizarRelatorioAtividades();
    else if (!itensFiscais.empty())
        this->visualizarRelatorioItensFiscais();
    else 
        std::cout << "SEM DADOS A INFORMAR." << std::endl; 

    std::cout << "----------------" << std::endl;


}

void Relatorio::visualizarRelatorioAtividades() {
    for (auto& atv : atividades) {
        atv.imprimirDados();
        std::cout << std::endl;
    }
}

void Relatorio::visualizarRelatorioItensFiscais() {
    for (auto& item : itensFiscais) {
        item.imprimirDados();
        std::cout << std::endl;
    }
}

// Getters e Setters
const std::string& Relatorio::getTipo() const {
    return tipo;
}

void Relatorio::setTipo(const std::string& novoTipo) {
    tipo = novoTipo;
}
