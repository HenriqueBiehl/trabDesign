// Atividade.hpp
#pragma once
#include <iostream>
#include <string>
#include "Participante.hpp"

class Atividade {
private:
    std::string nome;
    std::string duracao;
    std::string local;
    std::string objetivo;
    std::string resumo;

public:
    // Construtor com parâmetros
    Atividade(const std::string& nome, const std::string& duracao, const std::string& local, 
              const std::string& objetivo, const std::string& resumo);

    // Getters
    const std::string& getNome() const;
    const std::string& getDuracao() const;
    const std::string& getLocal() const;
    const std::string& getObjetivo() const;
    const std::string& getResumo() const;

    // Setters
    void setNome(const std::string& novoNome);
    void setDuracao(const std::string& novaDuracao);
    void setLocal(const std::string& novoLocal);
    void setObjetivo(const std::string& novoObjetivo);
    void setResumo(const std::string& novoResumo);

    // Métodos
    Atividade cadastrarAtividade(const std::string& duracao, const std::string& local, 
                                 const std::string& objetivo, const std::string& resumoAtividade);
    void associarParticipante(Participante& p);
};
