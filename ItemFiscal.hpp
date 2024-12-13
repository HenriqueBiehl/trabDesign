// ItemFiscal.hpp
#pragma once
#include <string>
#include <ctime>

class ItemFiscal {
private:
    std::time_t data;
    float valor;
    std::string tipo;

public:
    // Construtor com parâmetros
    ItemFiscal(const std::time_t& data, float valor, const std::string& tipo);

    // Getters
    std::time_t getData() const;
    float getValor() const;
    const std::string& getTipo() const;

    // Setters
    void setData(const std::time_t& novaData);
    void setValor(float novoValor);
    void setTipo(const std::string& novoTipo);

    // Métodos
    static ItemFiscal cadastrarItemFiscal(const std::string& tipoItemFiscal, const std::time_t& data, 
                                          float valor, int idProjeto);
};
