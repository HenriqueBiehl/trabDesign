// Atividade.cpp
#include "Atividade.hpp"

// Construtor com parâmetros
Atividade::Atividade(const std::string& nome, const std::string& duracao, const std::string& local, 
                     const std::string& objetivo, const std::string& resumo)
    : nome(nome), duracao(duracao), local(local), objetivo(objetivo), resumo(resumo) {
}

// Getters
const std::string& Atividade::getNome() const {
    return nome;
}

const std::string& Atividade::getDuracao() const {
    return duracao;
}

const std::string& Atividade::getLocal() const {
    return local;
}

const std::string& Atividade::getObjetivo() const {
    return objetivo;
}

const std::string& Atividade::getResumo() const {
    return resumo;
}

// Setters
void Atividade::setNome(const std::string& novoNome) {
    nome = novoNome;
}

void Atividade::setDuracao(const std::string& novaDuracao) {
    duracao = novaDuracao;
}

void Atividade::setLocal(const std::string& novoLocal) {
    local = novoLocal;
}

void Atividade::setObjetivo(const std::string& novoObjetivo) {
    objetivo = novoObjetivo;
}

void Atividade::setResumo(const std::string& novoResumo) {
    resumo = novoResumo;
}

// Métodos
Atividade Atividade::cadastrarAtividade(const std::string& duracao, const std::string& local, 
                                        const std::string& objetivo, const std::string& resumoAtividade) {
    return Atividade(nome, duracao, local, objetivo, resumoAtividade);
}

void Atividade::associarParticipante(Participante& p) {
    // Implementação para associar um participante à atividade
    std::cout << "Associando participante: " << p.getNome() << " à atividade: " << nome << std::endl;
}
