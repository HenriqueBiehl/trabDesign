#include "Ecomp.hpp" 

Ecomp::Ecomp()
{
}


int Ecomp::cadastrarMembro(std::string nome, std::string cpf, std::string email, std::string cargo){
    Ecomper mem = Ecomper(nome, cpf, email, cargo);
    
    associarMembro(mem);

    return 1;
} 


void Ecomp::associarMembro(const Ecomper& ecomper){
    this->membros.push_back(ecomper);
}


Projeto Ecomp::cadastrarProjeto(Cliente& cliente, std::string dataInicio, std::string prazo, std::string descricao, std::string contrato){

    Projeto p; 

    p = Projeto(cliente, dataInicio, prazo, descricao, contrato); 

    associarProjeto(p);

    return p;
}

void Ecomp::associarProjeto(const Projeto& projeto){
    this->proj.push_back(projeto);
}

Projeto* Ecomp::selecionarProjeto(unsigned int idProjeto){
    
    for (auto& p : this->proj) {
        
        if(p.getId() == idProjeto)
            return &p; 
    }

    return NULL;
}

int Ecomp::cadastrarDesenvolvedor(Projeto& p, unsigned int idDesenvolvedor){
    Desenvolvedor *dev = selecionarDesenvolvedor(idDesenvolvedor);

    if(dev == NULL)
        return 0; 

    return p.cadastrarDesenvolvedor(*dev);
}


void Ecomp::associarDesenvolvedor(const Desenvolvedor& desenvolvedor){
    this->devs.push_back(desenvolvedor);
}


Desenvolvedor* Ecomp::selecionarDesenvolvedor(unsigned int idDesenvolvedor){
    
    for (auto& d : this->devs) {
        
        if(d.getId() == idDesenvolvedor)
            return &d; 
    }

    return NULL;
}


Relatorio gerarRelatorio(std::string tipoRelatorio){

    Relatorio rel = Relatorio(tipoRelatorio);
    
    if(tipoRelatorio.compare("Atividade") == 0)
        rel.gerarRelatorioAtividade();
    
    else if(tipoRelatorio.compare("Fiscal") == 0)
        rel.gerarRelatorioItensFiscais();


    return rel;
}

Relatorio exibirRelatorio(Relatorio& rel, std::string tipoExibicao){

    if(tipoExibicao.compare("PDF") == 0)
        rel.gerarRelatorioPDF();
    
    else if(tipoExibicao.compare("Visualizacao")  == 0)
        rel.visualizarRelatorio();


    return rel;

}

ItemFiscal Ecomp::cadastrarItemFiscal(std::string tipoItemFiscal, std::string data, float valor, unsigned int idProjeto){

    Projeto *p = selecionarProjeto(idProjeto);

    ItemFiscal fisc(data, valor, tipoItemFiscal);

    p->associarItemFiscal(fisc);

    return fisc;
}
