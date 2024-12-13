// ItemFiscal.cpp
#include "ItemFiscal.hpp"

// Construtor com parâmetros
ItemFiscal::ItemFiscal(const std::time_t& data, float valor, const std::string& tipo)
    : data(data), valor(valor), tipo(tipo) {
}

// Getters
std::time_t ItemFiscal::getData() const {
    return data;
}

float ItemFiscal::getValor() const {
    return valor;
}

const std::string& ItemFiscal::getTipo() const {
    return tipo;
}

// Setters
void ItemFiscal::setData(const std::time_t& novaData) {
    data = novaData;
}

void ItemFiscal::setValor(float novoValor) {
    valor = novoValor;
}

void ItemFiscal::setTipo(const std::string& novoTipo) {
    tipo = novoTipo;
}

// Métodos
ItemFiscal ItemFiscal::cadastrarItemFiscal(const std::string& tipoItemFiscal, const std::time_t& data, 
                                           float valor, int idProjeto) {
    // Implementação fictícia: no mundo real, você incluiria lógica para validar ou associar o idProjeto
    return ItemFiscal(data, valor, tipoItemFiscal);
}
