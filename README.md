## Jogo da Memória

Autores: Ananda de Oliveira Gonçalves Antenor- RA 11129411, Caio Cezar Veronezi Macedo - RA 11050916

Link do github: https://github.com/caiocvmacedo/atividade_1_computacao_grafica/tree/main
Link para uma página Web com a aplicação: https://caiocvmacedo.github.io/public/jogodamemoria.html

O projeto foi desenvolvido utilizando a biblioteca abcg. O código está baseado nas implementações dos jogos TicTacToe e Asteroids, estudados durante este primeiro período do quadrimestre. O jogo foi criado contedo um grid 4x4 (semelhante ao do TicTacToe), que representa o tabuleiro e compõem a base de interação do usuário com a janela criada. Além disso, os botões também são feedbacks visuais para informar quais posições do tabuleiro ainda são interativos.

A lógica do jogo se baseia em encontrar os pares de cartões (figuras), dois a dois, até que todas as figuras estejam visíveis. As figuras são triângulos renderizados através do pipeline do OpenGL, criando as primitivas a partir dos Vertex Shaders e diferenciando-os pela cor sólida de cada triângulo.

Ao vencer o jogo, o contador de tempo é interrompido e demonstra o tempo decorrido naquela partida. Para iniciar um novo jogo, basta reiniciar o jogo do menu novo jogo.


