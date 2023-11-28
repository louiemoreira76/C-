#include <iostream>
#include <string>

int main() {
    std::string email = "usuario@example.com";

    // Mostra o comprimento da string (número de caracteres)
    std::cout << "Comprimento do email: " << email.length() << '\n';

    // Verifica se a string está vazia
    std::cout << "O email esta vazio? " << (email.empty() ? "Sim" : "Nao") << '\n';

    // Limpa o conteúdo da string
    email.clear();
    std::cout << "Email apos limpar: " << email << '\n';

    // Adiciona novo conteúdo à string
    email.append("novo_usuario@example.com");
    std::cout << "Email apos adicionar: " << email << '\n';

    // Acessa um caractere específico na string usando at()
    std::cout << "O primeiro caractere do email: " << email.at(0) << '\n';

    // Insere uma substring no início da string
    email.insert(0, "prefixo_");
    std::cout << "Email apos insercao: " << email << '\n';

    // Procura a posição do caractere '@' na string
    size_t pos = email.find('@');
    std::cout << "Posicao do '@' no email: " << pos << '\n';

    // Remove um caractere na posição 0
    email.erase(0, 1);
    std::cout << "Email apos remocao do primeiro caractere: " << email << '\n';

    return 0;
}
