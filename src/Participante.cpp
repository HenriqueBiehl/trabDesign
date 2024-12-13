// Participante.cpp
#include "Participante.hpp"

// Método para criar um Participante a partir de um Ecomper
Participante Participante::criarParticipante(Ecomper& e) {
    return Participante(e.getId(), e.getNome(), e.getCpf(), e.getEmail(), e.getCargo() /*, "", ""*/);
}

// Construtor com parâmetros
Participante::Participante(unsigned int id,  std::string nome,  std::string cpf,  std::string email, 
                            std::string cargo /*, const std::string& matricula, const std::string& curso*/)
    : Ecomper(nome, cpf, email, cargo) /*, matricula(matricula), cargo(cargo)*/ {
}

/*
// Getters
const std::string& Participante::getMatricula() const {
    return matricula;
}

const std::string& Participante::getCurso() const {
    return curso;
}

// Setters
void Participante::setMatricula(const std::string& novaMatricula) {
    matricula = novaMatricula;
}

void Participante::setCurso(const std::string& novoCurso) {
    curso = novoCurso;
}
*/
