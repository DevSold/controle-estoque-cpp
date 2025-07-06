#include <iostream>
#include <vector>
#include "produto.h"

using namespace std;

vector<Produto> estoque;

// Função auxiliar para validar se uma string é número
bool isNumero(const std::string& entrada) {
    for (char c : entrada) {
        if (!isdigit(c)) return false;
    }
    return !entrada.empty();
}

void adicionarProduto() {
    std::string codigo, nome, entrada;
    int quantidade;

    cout << "Digite o código do produto: ";
    getline(cin, codigo);

    cout << "Digite o nome do produto: ";
    getline(cin, nome);

    cout << "Digite a quantidade: ";
    while (true) {
        getline(cin, entrada);
        if (isNumero(entrada)) {
            quantidade = stoi(entrada);
            break;
        } else {
            cout << "Quantidade inválida. Digite um número inteiro: ";
        }
    }

    Produto novo(codigo, nome, quantidade);
    estoque.push_back(novo);
    cout << "Produto adicionado com sucesso!\n";
}

void listarProdutos() {
    if (estoque.empty()) {
        cout << "Estoque vazio.\n";
        return;
    }

    cout << "\n--- Produtos em Estoque ---\n";
    for (const auto& produto : estoque) {
        produto.exibir();
    }
}

int main() {
    int opcao;

    do {
        cout << "\n====== MENU ======\n";
        cout << "1. Adicionar produto\n";
        cout << "2. Listar produtos\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();  // Limpa o buffer

        switch (opcao) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida.\n";
        }
    } while (opcao != 0);

    return 0;
}
