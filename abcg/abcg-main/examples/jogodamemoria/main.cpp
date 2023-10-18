#include <fmt/core.h>

#include "abcg.hpp"
#include "jogodamemoria.hpp"

int main(int argc, char **argv) {
  try {

    // Cria instancia do app
    abcg::Application app(argc, argv);

    // Criacao da janela pelo openGL
    auto window{std::make_unique<MemoryGame>()};
    window->setWindowSettings(
        {.width = 800, .height = 600, .title = "Jogo da Memória"});

    // Comeca o app
    app.run(window);
  } catch (abcg::Exception &exception) {
    fmt::print(stderr, "{}\n", exception.what());
    return -1;
  }
  return 0;
}
