// Relatorio.hpp
#pragma once
#include <string>
#include <vector>
#include "Atividade.hpp"
#include "ItemFiscal.hpp"

class Relatorio {
private:
    std::string tipo;
    std::vector<Atividade> atividades;
    std::vector<ItemFiscal> itensFiscais;

public:
    // Construtor
    Relatorio(const std::string& tipo);

    // Métodos
    void gerarRelatorioAtividade() const;
    void gerarRelatorioItensFiscais() const;
    void adicionarAtividadeRelatorio(const Atividade& a);
    void adicionarItemFiscalRelatorio(const ItemFiscal& f);
    void gerarRelatorioPDF() const;
    void visualizarRelatorio() const;
    void visualizarRelatorioAtividades() const;
    void visualizarRelatorioItensFiscais() const;


    // Getters e Setters
    const std::string& getTipo() const;
    void setTipo(const std::string& novoTipo);
};
