// Atividade.cpp
#include "Atividade.hpp"

// Construtor com parâmetros
Atividade::Atividade(const std::string& duracao, const std::string& local, 
                     const std::string& objetivo, const std::string& resumoAtividade)
    : duracao(duracao), local(local), objetivo(objetivo), resumoAtividade(resumoAtividade) {
}

// Getters
const std::string& Atividade::getDuracao() const {
    return duracao;
}

const std::string& Atividade::getLocal() const {
    return local;
}

const std::string& Atividade::getObjetivo() const {
    return objetivo;
}

const std::string& Atividade::getResumoAtividade() const {
    return resumoAtividade;
}

// Setters
void Atividade::setDuracao(const std::string& novaDuracao) {
    duracao = novaDuracao;
}

void Atividade::setLocal(const std::string& novoLocal) {
    local = novoLocal;
}

void Atividade::setObjetivo(const std::string& novoObjetivo) {
    objetivo = novoObjetivo;
}

void Atividade::setResumoAtividade(const std::string& novoResumo) {
    resumoAtividade = novoResumo;
}

// Métodos
Atividade Atividade::cadastrarAtividade(const std::string& duracao, const std::string& local, 
                                        const std::string& objetivo, const std::string& resumoAtividade) {
    return Atividade(duracao, local, objetivo, resumoAtividade);
}

void Atividade::associarParticipante(Participante& p) {
    this->participantes.push_back(p);
}

