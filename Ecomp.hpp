#pragma once 
#include <iostream>
#include <string> 
#include <vector>
#include "Projeto.hpp"
#include "Cliente.hpp"

class Ecomp{

private:

    std::vector<Projeto> proj;

public: 

    void exibeTelaCadastro(); 
    
    Projeto cadastrarProjeto(Cliente& cliente, std::string dataInicio, std::prazo, std::descricao, std::contrato);

    void associarProjeto(const Projeto& projeto);

    Projeto selecionarProjeto(unsigned int idProjeto);

}