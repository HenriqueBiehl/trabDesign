#pragma once 
#include <iostream>
#include <string> 
#include <vector>
#include "Projeto.hpp"
#include "Cliente.hpp"
#include "Desenvolvedor.hpp"
#include "Ecomper.hpp"
#include "Relatorio.hpp"
#include "ItemFiscal.hpp" 
#include "Etapa.hpp"
#include "Atividade.hpp"

class Ecomp{

private:

    std::vector<Projeto> proj;
    std::vector<Desenvolvedor> devs; 
    std::vector<Ecomper> membros;
    std::vector<Atividade> atividades;

public: 

    Ecomp();

    int cadastrarMembro(std::string nome, std::string cpf, std::string email, std::string cargo);

    void associarMembro(const Ecomper& ecomper);
    
    Projeto cadastrarProjeto(Cliente& cliente, std::string dataInicio, std::string prazo, std::string descricao, std::string contrato);

    void associarProjeto(const Projeto& projeto);

    Projeto* selecionarProjeto(unsigned int idProjeto);

    int cadastrarDesenvolvedor(Projeto& p, unsigned int idDesenvolvedor);

    void associarDesenvolvedor(const Desenvolvedor& desenvolvedor);

    Desenvolvedor* selecionarDesenvolvedor(unsigned int idDesenvolvedor);

    Relatorio gerarRelatorio(std::string tipoRelatorio);

    Relatorio exibirRelatorio(Relatorio& rel, std::string tipoExibicao);

    ItemFiscal cadastrarItemFiscal(std::string tipoItemFiscal, std::string data, float valor, unsigned int idProjeto);

    Etapa cadastrarEtapaDesenvolvimento(unsigned int idProjeto, std::string cronograma, std::string statusProjeto);

    Atividade cadastrarAtividade(const std::string& duracao, const std::string& local, const std::string& objetivo, const std::string& resumo);

    int adicionarParticipanteAtividade(Atividade a, unsigned int idEcomper);

    Ecomper* selecionarEcomper(unsigned int idEcomper);

};