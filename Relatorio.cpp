// Relatorio.cpp
#include "Relatorio.hpp"
#include <iostream>

// Construtor
Relatorio::Relatorio(const std::string& tipo) : tipo(tipo) {
}

// Métodos
void Relatorio::gerarRelatorioAtividade() const {
    std::cout << "Gerando relatório de atividades...\n";
    for (const auto& atividade : atividades) {
        std::cout << "Atividade: " << atividade.getNome() << "\n";
    }
}

void Relatorio::gerarRelatorioItensFiscais() const {
    std::cout << "Gerando relatório de itens fiscais...\n";
    for (const auto& item : itensFiscais) {
        std::cout << "Item: " << item.getTipo() << " - Valor: " << item.getValor() << "\n";
    }
}

void Relatorio::adicionarAtividadeRelatorio(const Atividade& a) {
    atividades.push_back(a);
}

void Relatorio::adicionarItemFiscalRelatorio(const ItemFiscal& f) {
    itensFiscais.push_back(f);
}

void Relatorio::gerarRelatorioPDF() const {
    std::cout << "Gerando relatório em PDF...\n";
    // Implementação fictícia de geração de PDF
}

void Relatorio::visualizarRelatorio() const {
    std::cout << "Visualizando relatório...\n";
}

// Getters e Setters
const std::string& Relatorio::getTipo() const {
    return tipo;
}

void Relatorio::setTipo(const std::string& novoTipo) {
    tipo = novoTipo;
}
