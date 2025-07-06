#include "produto.h"
#include <iostream>

Produto::Produto(std::string c, std::string n, int q) {
    codigo = c;
    nome = n;
    quantidade = q;
}

void Produto::exibir() const {
    std::cout << "Código: " << codigo
              << " | Nome: " << nome
              << " | Quantidade: " << quantidade << std::endl;
}

std::string Produto::getCodigo() const {
    return codigo;
}

std::string Produto::getNome() const {
    return nome;
}

int Produto::getQuantidade() const {
    return quantidade;
}

void Produto::setQuantidade(int novaQuantidade) {
    quantidade = novaQuantidade;
}
