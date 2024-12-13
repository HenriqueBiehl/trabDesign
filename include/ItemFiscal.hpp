// ItemFiscal.hpp
#pragma once
#include <string>
#include <ctime>

class ItemFiscal {
private:
    std::string data;
    float valor;
    std::string tipo;

public:
    // Construtor com parâmetros
    ItemFiscal(const std::string& data, float valor, const std::string& tipo);

    // Getters
    std::string getData() const;
    float getValor() const;
    const std::string& getTipo() const;

    // Setters
    void setData(const std::string& novaData);
    void setValor(float novoValor);
    void setTipo(const std::string& novoTipo);

    // Métodos
    static ItemFiscal cadastrarItemFiscal(const std::string& tipoItemFiscal, const std::string& data, 
                                          float valor, int idProjeto);
};
