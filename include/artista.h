#ifndef PROJ_SPOTIFY_ARTISTA_H
#define PROJ_SPOTIFY_ARTISTA_H

#include "Usuario.h"
#include <vector>
#include <string>

class Artista : public Usuario
{
public:
    // Construtor
    Artista(const std::string& nome, const std::string& datanasc, const std::string& nacionalidade, const std::string& email, const std::vector<std::string>& genero);

    // Função para obter os gêneros do artista
    std::vector<std::string> GetGeneros() const;

private:
    std::vector<std::string> genero;
};

#endif
