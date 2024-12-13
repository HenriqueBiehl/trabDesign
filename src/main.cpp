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

int main() {
    int opcao;
    Ecomp ecomp();
    Cliente cliente_1();
    cliente_1.setNome("Winston Smith")
    cliente_1.setCpfCnpj("1234567890")
    cliente_1.setEmail("winston@bigbrothermail.com")
    cliente_1.setTelefone("(206) 342-8631")

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
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 0:
                cout << "Saindo...\n";
                break;

            case 1:
                String dataInicio, prazo, descricao, contrato; 
                cout << "Escolhido a opção: Cadastrar Projeto. Digite as informações a seguir:\n";

                cout << "Data de inicio: ";
                cin << dataInicio;

                cout << "Prazo: ";
                cin << prazo;

                cout << "Descrição: ";
                cin << descricao;

                cout << "Contrato";
                cin << contrato;

                ecomp.cadastrarProjeto(cliente_1, dataInicio, prazo, descricao, contrato);

                cout << "Projeto cadastrado com sucesso!\n"
                break;

            default:
                cout << "Opção inválida! Tente novamente.\n";
                break;
        }

    } while (opcao != 0);



    return 0;
}
