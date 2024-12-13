#include "Ecomp.hpp" 

Projeto Ecomp::cadastrarProjeto(Cliente& cliente, std::string dataInicio, std::string prazo, std::string descricao, std::string contrato){

    Projeto p(cliente, dataInicio, prazo, descricao, contrato); 

    associarProjeto(p);

    return p;
}

void Ecomp::associarProjeto(const Projeto& projeto){
    this->proj.push_back(projeto);
}

Projeto Ecomp::selecionarProjeto(unsigned int idProjeto){
    
    for (const auto& p : this->proj) {
        
        if(p.getId() == idProjeto)
            return p; 
    }

    // Retorna objeto vazio
    return Projeto();
}
