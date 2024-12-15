// Relatorio.hpp
#pragma once
#include <string>
#include <vector>
#include "Atividade.hpp"
#include "ItemFiscal.hpp"
#include "Projeto.hpp"

class Relatorio {
private:
    std::string tipo;
    std::vector<Atividade> atividades;
    std::vector<ItemFiscal> itensFiscais;
    std::vector<Projeto> projetos;

public:
    // Construtor
    Relatorio(const std::string& tipo);

    // Métodos
    void gerarRelatorioAtividade(std::vector<Atividade> atvs);
    void gerarRelatorioItensFiscais(std::vector<Projeto> proj);
    void adicionarAtividadeRelatorio(const Atividade& a);
    void adicionarItemFiscalRelatorio(const ItemFiscal& f);
    void gerarRelatorioPDF();
    void visualizarRelatorio();
    void visualizarRelatorioAtividades();
    void visualizarRelatorioItensFiscais();


    // Getters e Setters
    const std::string& getTipo() const;
    void setTipo(const std::string& novoTipo);
};
