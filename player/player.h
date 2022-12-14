#include <iostream>
#include <string>

class Player{
private:
std::string _nome;
int _vida;
int _idade;

public:

//GETTERS//
std::string getNome()const{
  return _nome;
}
int getVida()const{
  return _vida;
}
int getIdade()const{
  return _idade;
}
//SETTERS//
void setNome(std::string nome ){
  _nome = nome;
}
void setVida(int vida ){
  _vida = vida;
}
void setIdade(int idade ){
  _idade = idade;
  }



}