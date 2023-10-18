#ifndef JOGODAMEMORIA_HPP_
#define JOGODAMEMORIA_HPP_

#include <imgui.h>

#include <array>
#include <glm/vec4.hpp>
#include <string>
#include <random>

#include "abcg.hpp"

class MemoryGame : public abcg::OpenGLWindow {
 protected:
  void initializeGL() override;
  void paintGL() override;
  void paintUI() override;
  void resizeGL(int width, int height) override;
  void terminateGL() override;

 private:
  GLuint m_program{};
  int m_viewportWidth{};
  int m_viewportHeight{};
 
  enum class GameState {Play, WinPlayer, Waiting, Starting}; // Estados do jogo
  enum class GameDificulty {Initial};
  int m_N{};  // Tamanho do tabuleiro do jogo

  // Definicao dos cartoes do jogo de memoria
  struct Card {
    int value;
    int showing;
    float colors[9];
    GLuint m_vao;
    GLuint m_vboPositions;
    GLuint m_vboColors;
  };
  typedef struct Card Card;

  GameState m_gameState{};
  
  Card cards[16]; // Total de cartoes no jogo
  int qntShowing {0}; // Numero de cartoes que estao sendo exibidos
  abcg::ElapsedTimer timer; // Total de tempo em que as cartas estao sendo exibidas no inicio do jogo
  abcg::ElapsedTimer universalTimer; // Tempo de jogo
  std::string elapsedTimeWin{}; // Tempo passado ate que jogador encerra vencendo o jogo

  void createTriangle(Card* cd, int pos); // Definicoes dos triangulos que sao exibidos nos cartoes
  void restart(GameDificulty dificulty); // Inicia novo jogo
  void checkWin(); // Verifica se o jogador ganhou
  void checkEquals(); // Verifica se os cartoes sao iguais
  void update(); // Funcao que controla o estado de escondido dos cartoes 
  std::string convertTimeSeconds(); // Converte os segundos para o formato horas, minutos, segundos
};

#endif
