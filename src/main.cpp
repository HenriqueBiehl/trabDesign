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
    Desenvolvedor dev2("Steven" , "77711133354", "stv@en.com", "Assessor de Qualidade");
    Desenvolvedor dev3("Naomi" , "7978654202", "naomi@guerrilla.com", "Gerente de Admnistrativo Financeiro");
    Desenvolvedor dev4("Laura" , "125603444", "lauRa@spymail.com", "Diretora de Comunicação");

    Ecomp.associarDesenvolvedor(dev1);
    Ecomp.associarDesenvolvedor(dev2);
    Ecomp.associarDesenvolvedor(dev3);
    Ecomp.associarDesenvolvedor(dev4);

    do {
        cout << "\nMenu de Opções:\n";
        cout << "0. Sair\n";
        cout << "1. Cadastrar Projeto\n";
        cout << "2. Cadastrar Ecompers\n";
        cout << "3. Cadastrar Atividades\n";
        cout << "4. Vincular Finanças ao Projeto\n";
        cout << "5. Vincular Ecomper ao Projeto\n";
        cout << "6. Gerar Relatório\n";
        cout << "7. Adicionar Etapa de Desenvolvimento\n";
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
                    char continuar;
                    do {
                        cout << "Escolhido a opção: Cadastrar Ecomper. Digite as informações a seguir:\n";

                        cout << "Nome: ";
                        getline(cin >> ws, nome);

                        cout << "CPF: ";
                        getline(cin >> ws, cpf);

                        cout << "Email: ";
                        getline(cin >> ws, email);

                        cout << "Cargo: ";
                        getline(cin >> ws, cargo);

                        Ecomper e = Ecomp.cadastrarMembro(nome, cpf, email, cargo);

                        cout << endl << "Ecomper:" << endl;
                        e.imprimirDados();
                        cout << endl << "Cadastrado com sucesso!" << endl;

                        cout << "Deseja cadastrar outro Ecomper? (s/n): ";
                        cin >> continuar;

                    } while (continuar == 's' || continuar == 'S');
                }
                break;

            case 3:
                {
                    string duracao, local, objetivo, resumoAtividade;
                    unsigned int idEcomper;
                    char continuar;
                    cout << "Escolhido a opção: Cadastrar Atividade. Digite as informações a seguir:\n";

                    cout << "Duracao: ";
                    getline (cin >> ws, duracao);

                    cout << "Local: ";
                    getline (cin >> ws, local);

                    cout << "Objetivo: ";
                    getline (cin >> ws, objetivo);

                    cout << "Resumo da Atividade:";
                    getline (cin >> ws, resumoAtividade);

                    Atividade a = Ecomp.cadastrarAtividade(duracao, local, objetivo, resumoAtividade);

                    cout << "Adicione participantes a atividade: " << endl << endl;
                    do{
                        Ecomp.imprimirMembros();

                        cout << "Escolha um membro pelo ID:";
                        cin >> idEcomper; 

                        if(Ecomp.adicionarParticipanteAtividade(a, idEcomper))
                            cout << "Ecomper Adicionado a Atividade com sucesso!" << endl;

                        cout << "Deseja adicionar outro participante a atividade? (s/n): ";
                        cin >> continuar;
                    }  while (continuar == 's' || continuar == 'S');

                    Ecomp.associarAtividade(a);

                    Ecomp.imprimirAtividades();

                }
                break; 
            case 4:
                {
                    unsigned int idProjeto;
                    string tipoItemFiscal, data;
                    float valor;

                    cout << "Escolhido a opção: Vincular Finanças ao Projeto.\n";

                    // Exibe os projetos disponíveis
                    Ecomp.imprimirProjetos();

                    // Seleciona o projeto pelo ID
                    cout << "Escolha um projeto pelo ID: ";
                    cin >> idProjeto;

                    // Busca o projeto
                    Projeto* p = Ecomp.selecionarProjeto(idProjeto);
                    if (p == nullptr) {
                        cout << "Projeto não encontrado!\n";
                        break;
                    }

                    // Captura os dados do Item Fiscal
                    cout << "Digite o tipo do Item Fiscal: ";
                    getline(cin >> ws, tipoItemFiscal);

                    cout << "Digite a data do Item Fiscal: ";
                    getline(cin >> ws, data);

                    cout << "Digite o valor do Item Fiscal: ";
                    cin >> valor;

                    // Cadastra o Item Fiscal no projeto
                    ItemFiscal item = Ecomp.cadastrarItemFiscal(tipoItemFiscal, data, valor, idProjeto);

                    cout << "\nItem Fiscal cadastrado com sucesso!\n";
                    item.imprimirDados(); // Exibe os dados do Item Fiscal

                }
                break;
            case 5:
                {
                    unsigned int idDesenvolvedor, idProjeto;
                    char continuar;

                    cout << "Escolhido a opção: Adicionar Desenvolvedor a Projeto.\n";

                    Ecomp.imprimirProjetos();

                    cout << "Escolha um projeto pelo ID: ";
                    cin >> idProjeto;

                    Projeto* p = Ecomp.selecionarProjeto(idProjeto);

                    if (p == nullptr) {
                        cout << "Projeto não encontrado!\n";
                        break;
                    }

                    do {
                        Ecomp.imprimirDesenvolvedores();

                        cout << "Escolha um desenvolvedor pelo ID: ";
                        cin >> idDesenvolvedor;

                        Ecomp.cadastrarDesenvolvedor(*p, idDesenvolvedor);

                        cout << endl << "Desenvolvedor Cadastrado com sucesso!" << endl;
                        p->imprimirDados();

                        cout << "Deseja adicionar outro desenvolvedor ao projeto? (s/n): ";
                        cin >> continuar;

                    } while (continuar == 's' || continuar == 'S');
                }
                break;
            case 6:
                    {
                        string tipoRelatorio;
                        string tipoExibicao;
                        cout << "Escolhido a opção: Gerar Relatório.\n"; 
                        cout << "Os tipos de Relatório são: Fiscal e Atividade\n";

                        cout << "Tipo Relatório: ";
                        getline (cin >> ws, tipoRelatorio);

                        Relatorio rel = Ecomp.gerarRelatorio(tipoRelatorio);
                        cout << endl << "Relatório gerado com sucesso!" << endl;

                        cout << "Escolha o modo de Exibição: PDF ou Visualizacao" << endl;
                        cout << "Opção de Exibição: ";
                        getline (cin >> ws, tipoExibicao);

                        Ecomp.exibirRelatorio(rel, tipoExibicao);

                        cout << endl << "Sucesso ao Exibir Relatório" << endl;
                    }
                    break;
            case 7: {
                        unsigned int idProjeto;
                        string cronograma, statusProjeto;

                        cout << "Escolhido a opção: Adicionar Etapa de Desenvolvimento.\n";

                        // Exibe os projetos disponíveis
                        Ecomp.imprimirProjetos();

                        // Seleciona o projeto pelo ID
                        cout << "Escolha um projeto pelo ID: ";
                        cin >> idProjeto;

                        // Busca o projeto
                        Projeto* p = Ecomp.selecionarProjeto(idProjeto);
                        if (p == nullptr) {
                            cout << "Projeto não encontrado!\n";
                            break;
                        }

                        // Captura os dados da nova etapa
                        cout << "Digite o cronograma da Etapa: ";
                        getline(cin >> ws, cronograma);

                        cout << "Digite o status da Etapa: ";
                        getline(cin >> ws, statusProjeto);

                        // Cadastra a nova etapa usando a função existente
                        Etapa novaEtapa = Ecomp.cadastrarEtapaDesenvolvimento(idProjeto, cronograma, statusProjeto);

                        cout << "Etapa adicionada com sucesso!\n";
                        novaEtapa.imprimirDados(); // Exibe os dados da nova etapa

                        break;
                    }

            default:
                    {
                        cout << "Opção inválida! Tente novamente.\n";
                        break;
                    }
        }

    } while (opcao != 0);



    return 0;
}
