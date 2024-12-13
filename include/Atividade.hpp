// Atividade.hpp
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Participante.hpp"

class Atividade {
private:
    std::string duracao;
    std::string local;
    std::string objetivo;
    std::string resumoAtividade;
    std::vector<Participante> participantes;

public:
    // Construtor com parâmetros
    Atividade(const std::string& duracao, const std::string& local, 
              const std::string& objetivo, const std::string& resumoAtividade);

    // Getters
    const std::string& getDuracao() const;
    const std::string& getLocal() const;
    const std::string& getObjetivo() const;
    const std::string& getResumoAtividade() const;

    // Setters
    void setDuracao(const std::string& novaDuracao);
    void setLocal(const std::string& novoLocal);
    void setObjetivo(const std::string& novoObjetivo);
    void setResumoAtividade(const std::string& novoResumo);

    // Métodos
    Atividade cadastrarAtividade(const std::string& duracao, const std::string& local, 
                                 const std::string& objetivo, const std::string& resumoAtividade);
    
    void associarParticipante(Participante& p);
};
