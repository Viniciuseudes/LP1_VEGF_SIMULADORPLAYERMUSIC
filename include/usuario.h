#ifndef PROJ_SPOTIFY_USUARIO_H
#define PROJ_SPOTIFY_USUARIO_H

#include <string>
#include <vector>


class Usuario
{

public:
    std::string Getnome() const;
    std::string GetDataNasc() const;
    std::string GetNacionalidade() const;
    std::string GetEmail() const;


private:
    std::string nome;
    std::string datanasc;
    std::string nacionalidade;
    std::string email;
};


#endif