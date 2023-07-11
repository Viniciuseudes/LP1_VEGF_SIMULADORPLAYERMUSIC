#ifndef PROJ_SPOTIFY_MUSICA_H
#define PROJ_SPOTIFY_MUSICA_H

#include <string>


class Musica
{

public:
    std::string GetTitulo() const;
    std::string GetArtista() const;
    std::string GetGenero() const;
    double GetDuracao() const;


private:
    std::string titulo;
    std::string artista;
    std::string genero;
    double duracao;
};


#endif