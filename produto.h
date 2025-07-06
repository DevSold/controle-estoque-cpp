#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto {
private:
    std::string codigo;
    std::string nome;
    int quantidade;

public:
    Produto(std::string c, std::string n, int q);
    void exibir() const;
    std::string getCodigo() const;
    std::string getNome() const;
    int getQuantidade() const;
    void setQuantidade(int novaQuantidade);
};

#endif
