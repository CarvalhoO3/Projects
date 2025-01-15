#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

void cadastrarPessoa() {
    ofstream arquivo("pessoas.txt", ios::app);  // Abre o arquivo no modo append para adicionar novas informa��es
    
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    string rg, nome, email, telefone, rua, numero, bairro, cidade, cep;

    cout << "Cadastro de Pessoa\n";
    cout << "RG: ";
    getline(cin, rg);
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Email: ";
    getline(cin, email);
    cout << "Telefone: ";
    getline(cin, telefone);
    cout << "Rua: ";
    getline(cin, rua);
    cout << "N�mero: ";
    getline(cin, numero);
    cout << "Bairro: ";
    getline(cin, bairro);
    cout << "Cidade: ";
    getline(cin, cidade);
    cout << "CEP: ";
    getline(cin, cep);

    arquivo << rg << "\n" << nome << "\n" << email << "\n" << telefone << "\n"
            << rua << "\n" << numero << "\n" << bairro << "\n" << cidade << "\n"
            << cep << "\n";
    
    arquivo.close();
    cout << "Pessoa cadastrada com sucesso!\n";
}

void listarPessoas() {
    ifstream arquivo("pessoas.txt");  // Abre o arquivo para leitura
    
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    string rg, nome, email, telefone, rua, numero, bairro, cidade, cep;

    cout << "Lista de Pessoas Cadastradas:\n";
    while (getline(arquivo, rg)) {
        getline(arquivo, nome);
        getline(arquivo, email);
        getline(arquivo, telefone);
        getline(arquivo, rua);
        getline(arquivo, numero);
        getline(arquivo, bairro);
        getline(arquivo, cidade);
        getline(arquivo, cep);
        
        cout << "\nRG: " << rg << "\nNome: " << nome << "\nEmail: " << email
             << "\nTelefone: " << telefone << "\nRua: " << rua << "\nN�mero: " << numero
             << "\nBairro: " << bairro << "\nCidade: " << cidade << "\nCEP: " << cep << "\n";
    }

    arquivo.close();
}

int main() {
	 setlocale(LC_ALL, "Portuguese");
     int opcao;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Cadastrar pessoa\n";
        cout << "2. Listar pessoas\n";
        cout << "3. Sair\n";
        cout << "Escolha uma op��o: ";
        cin >> opcao;
        cin.ignore();  // Ignora o '\n' deixado pelo cin
        
        switch (opcao) {
            case 1:
                cadastrarPessoa();
                break;
            case 2:
                listarPessoas();
                break;
            case 3:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Op��o inv�lida. Tente novamente.\n";
        }
    } while (opcao != 3);
    
    return 0;
}

