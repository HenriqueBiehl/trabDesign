#pragma once 
#include <iostream>
#include <string> 

class Etapa{

private:
    static unsigned int idCounter; 
    unsigned int id; 
    std::string cronograma;
    std::string status; 

public:
    
    // Construtor com parâmetros
    Etapa(std::string& cronograma, std::string& status);

    // Getters
    unsigned int getId() const;
    const std::string& getCronograma() const;
    const std::string& getStatus() const;
    const std::string& getStatusProjeto() const;

    // Setters
    void setId(unsigned int novoId);
    void setCronograma(const std::string& novoCronograma);
    void setStatus(const std::string& novoStatus);
    void setStatusProjeto(const std::string& novoStatusProjeto);
    void imprimirDados();
};
