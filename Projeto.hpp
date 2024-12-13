#pragma once 
#include <iostream>
#include <string> 
#include <vector>
#include "Cliente.hpp"
#include "Desenvolvedor.hpp"

class Projeto{
private: 
    unsigned int id; 
    Cliente cliente; 
    std::string dataInicio; 
    std::string prazo;
    std::string descricao; 
    std::string contrato; 
    std::vector<Desenvolvedor> desenv;

public: 
    Projeto(Cliente cliente, std::string dataInicio, std::string prazo, std::string descricao, std::string contrato); 

    // Getter e Setter para 'id'
    unsigned int getId() const;
    void setId(unsigned int novoId);

    // Getter e Setter para 'cliente'
    const Cliente& getCliente() const;
    void setCliente(const Cliente& novoCliente);

    // Getter e Setter para 'dataInicio'
    const std::string& getDataInicio() const;
    void setDataInicio(const std::string& novaDataInicio);

    // Getter e Setter para 'descricao'
    const std::string& getDescricao() const;
    void setDescricao(const std::string& novaDescricao);

    // Getter e Setter para 'contrato'
    const std::string& getContrato() const;
    void setContrato(const std::string& novoContrato);

    // Avalia se desenvolvedor esta cadastrado no projeto (no vector desenv). 
    // Se não estiver, adiciona ao vector e retorna 1. Retorna 0 caso contrário. 
    int cadastrarDesenvolvedor(const Desenvolvedor& desenvolvedor); 

}