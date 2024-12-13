#include <iostream>

#include "Atividade.hpp"
#include "Cliente.hpp"
#include "Desenvolvedor.hpp"
#include "Ecomper.hpp"
#include "Ecomp.hpp"
#include "Etapa.hpp"
#include "ItemFiscal.hpp"
#include "Participante.hpp"
#include "Projeto.hpp"
#include "Relatorio.hpp"

using namespace std;

int main() {
    int opcao;
    Ecomp Ecomp;
    Cliente cliente_1;
    cliente_1.setNome("Winston Smith"); //Based
    cliente_1.setCpfCnpj("1234567890");
    cliente_1.setEmail("winston@bigbrothermail.com");
    cliente_1.setTelefone("(206) 342-8631");

    Desenvolvedor dev1("Marcos" , "123456789", "marc@os.com", "Assessor de Projetos");
    //Desenvolvedor dev2("Steven" , "77711133354", "stv@en.com", "Assessor de Qualidade");
    //Desenvolvedor dev3("Naomi" , "7978654202", "naomi@guerrilla.com", "Gerente de Admnistrativo Financeiro");
    //Desenvolvedor dev4("Laura" , "125603444", "lauRa@spymail.com", "Diretora de Comunicação");

    Ecomp.associarDesenvolvedor(dev1);
    //Ecomp.associarDesenvolvedor(dev2);
    //Ecomp.associarDesenvolvedor(dev3);
    //Ecomp.associarDesenvolvedor(dev4);

    do {
        cout << "\nMenu de Opções:\n";
        cout << "0. Sair\n";
        cout << "1. Cadastrar Projeto\n";
        cout << "2. Cadastrar Ecompers\n";
        cout << "3. Cadastrar Atividades\n";
        cout << "4. Cadastrar Finanças\n";
        cout << "5. Vincular Ecomper ao Projeto\n";
        cout << "6. Vincular Finanças ao Projeto\n";
        cout << "7. Gerar Relatório\n";
        cout << "8. Adicionar Etapa de Desenvolvimento\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 0:
                {
                    cout << "Saindo...\n";
                    break;
                }
            case 1:
                {
                    string dataInicio, prazo, descricao, contrato; 
                    cout << "Escolhido a opção: Cadastrar Projeto. Digite as informações a seguir:\n";

                    cout << "Data de inicio: ";
                    cin >> dataInicio;

                    cout << "Prazo: ";
                    cin >> prazo;

                    cout << "Descrição: ";
                    getline (cin >> ws, descricao);

                    cout << "Contrato:";
                    getline (cin >> ws, contrato);

                    Projeto p = Ecomp.cadastrarProjeto(cliente_1, dataInicio, prazo, descricao, contrato);

                    cout << endl << "Projeto cadastrado com sucesso!\n";

                    p.imprimirDados();

                    break;
                }

            case 2: 
                {

                    string nome, cpf, email, cargo; 
                    cout << "Escolhido a opção: Cadastrar Ecomper. Digite as informações a seguir:\n";

                    cout << "Nome: ";
                    getline (cin >> ws, nome);

                    cout << "CPF: ";
                    getline (cin >> ws, cpf);

                    cout << "Email: ";
                    getline (cin >> ws, email);

                    cout << "Cargo:";
                    getline (cin >> ws, cargo);

                    Ecomper e = Ecomp.cadastrarMembro(nome, cpf, email, cargo);

                    cout << endl << "Ecomper:" << endl <<endl; 
                    e.imprimirDados();
                    cout << endl << "Cadastrado com sucesso!" << endl;

                }
                break;
            case 5:  
                {

                    unsigned int idDesenvolvedor, idProjeto; 
                    cout << "Escolhido a opção: Adicionar Desenvolvedor a Projeto.\n";

                    Ecomp.imprimirProjetos(); 

                    cout << "Escolha um projeto pelo ID:" << endl;
                    cin >> idProjeto; 

                    Projeto *p = Ecomp.selecionarProjeto(idProjeto); 
                    
                    Ecomp.imprimirDesenvolvedores();

                    cout << "Escolha um desenvolvedor pelo ID:" << endl;
                    
                    cin >> idDesenvolvedor; 

                    Ecomp.cadastrarDesenvolvedor(*p, idDesenvolvedor);
                    
                    cout << endl << "Desenvolvedor Cadastrado com sucesso!" << endl;
                    
                    p->imprimirDados();
                }
                break;
            default:
                {
                    cout << "Opção inválida! Tente novamente.\n";
                    break;
                }
        }

    } while (opcao != 0);



    return 0;
}
