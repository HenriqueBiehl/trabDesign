// Participante.hpp
#pragma once
#include "Ecomper.hpp"

class Participante : public Ecomper {
public:
    // Método para criar um Participante a partir de um Ecomper
    static Participante criarParticipante(Ecomper& e);

    // Construtor com parâmetros
    Participante(unsigned int id,  std::string  nome,  std::string cpf,  std::string email, 
                  std::string cargo /*, const std::string& matricula, const std::string& curso*/);

/*
    // Getters
    const std::string& getMatricula() const;
    const std::string& getCurso() const;

    // Setters
    void setMatricula(const std::string& novaMatricula);
    void setCurso(const std::string& novoCurso);

//private:
//    std::string matricula;
//    std::string curso;
*/
};
