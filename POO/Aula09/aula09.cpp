#include <iostream>
#include <string>

class Livro {
private:
    std::string titulo;
    std::string nomeAutor;
    int edicao;
    int volume;
    int numeroPaginas;
    int paginaAtual;

public:
    // Construtor padrão
    Livro()
        : titulo(""), nomeAutor(""), edicao(0), volume(0), numeroPaginas(0), paginaAtual(0) {}

    // Construtor com parâmetros
    Livro(const std::string& titulo, int numeroPaginas)
        : titulo(titulo), nomeAutor(""), edicao(0), volume(0), numeroPaginas(numeroPaginas), paginaAtual(0) {}

    // Métodos para definir atributos com validação
    void setTitulo(const std::string& titulo) {
        if (titulo.length() <= 30) {
            this->titulo = titulo;
        } else {
            std::cerr << "O título não pode ultrapassar 30 caracteres." << std::endl;
        }
    }

    void setNomeAutor(const std::string& nomeAutor) {
        if (nomeAutor.length() <= 20) {
            this->nomeAutor = nomeAutor;
        } else {
            std::cerr << "O nome do autor não pode ultrapassar 20 caracteres." << std::endl;
        }
    }

    void setNumeroPaginas(int numeroPaginas) {
        if (numeroPaginas > 0) {
            this->numeroPaginas = numeroPaginas;
        } else {
            std::cerr << "O número de páginas deve ser maior que zero." << std::endl;
        }
    }

    // Método para ir para uma página específica
    void irParaPagina(int pagina) {
        if (pagina >= 0 && pagina <= numeroPaginas) {
            paginaAtual = pagina;
        } else {
            std::cerr << "Número de página inválido." << std::endl;
        }
    }

    // Método para avançar uma página
    void proximaPagina() {
        if (paginaAtual < numeroPaginas) {
            paginaAtual++;
        } else {
            std::cerr << "Já está na última página." << std::endl;
        }
    }

    // Método para exibir informações do livro
    void exibirInformacoes() const {
        std::cout << "Título: " << titulo << std::endl;
        std::cout << "Nome do Autor: " << nomeAutor << std::endl;
        std::cout << "Número de Páginas: " << numeroPaginas << std::endl;
        std::cout << "Página Atual: " << paginaAtual << std::endl;
    }
};

int main() {
    // Livro criado de maneira estática
    Livro livro1("C++ Programming", 500);
    livro1.setNomeAutor("Bjarne Stroustrup");
    livro1.setNumeroPaginas(500);
    livro1.irParaPagina(100);
    livro1.proximaPagina();
    livro1.exibirInformacoes();

    std::cout << std::endl;

    // Livro criado de maneira dinâmica
    Livro* livro2 = new Livro("The C++ Standard Library", 800);
    livro2->setNomeAutor("Nicolai Josuttis");
    livro2->setNumeroPaginas(800);
    livro2->irParaPagina(400);
    livro2->proximaPagina();
    livro2->exibirInformacoes();

    // Limpeza de memória
    delete livro2;

    return 0;
}
