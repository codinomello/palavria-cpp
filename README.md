# Palavria

Um roguelike estratégico em que o aprendizado de idiomas impulsiona exploração, diplomacia e conquista territorial em um mundo procedural.

## 🎮 Conceito

Em **Palavria**, a linguagem é o principal sistema de poder.

Cada partida gera um mundo formado por territórios, povos e contextos linguísticos. Para avançar, o jogador precisa desenvolver conhecimentos reais de idiomas — vocabulário, gramática, compreensão, leitura, registro e nuance.

### Loop principal

1. Iniciar uma expedição
2. Explorar o mapa
3. Encontrar um território
4. Enfrentar um desafio linguístico
5. Negociar, compreender ou conquistar
6. Expandir sua influência
7. Enfrentar desafios cada vez mais difíceis
8. Perder a expedição
9. Manter conhecimentos e desbloqueios
10. Iniciar uma nova partida

## 🧠 Idiomas iniciais

- 🇪🇸 Espanhol
- 🇬🇧 Inglês
- 🇫🇷 Francês
- 🇯🇵 Japonês
- 🇷🇺 Russo

## 🛠️ Tecnologias

- C++20
- raylib
- CMake
- Ninja
- nlohmann/json
- Catch2
- Git

## 📁 Estrutura

```text
palavria/
├── assets/
│   ├── audio/
│   ├── data/
│   │   ├── encounters/
│   │   ├── languages/
│   │   ├── territories/
│   │   └── events/
│   ├── fonts/
│   └── textures/
├── include/
├── src/
│   ├── core/
│   ├── encounters/
│   ├── language/
│   ├── map/
│   ├── progression/
│   ├── rendering/
│   └── ui/
├── tests/
├── CMakeLists.txt
└── README.md
```

## 🚀 Instalação

### Arch Linux / WSL2

```bash
sudo pacman -Syu
sudo pacman -S base-devel cmake ninja git raylib
```

Verifique:

```bash
cmake --version
ninja --version
g++ --version
pkg-config --modversion raylib
```

### Compilação

```bash
git clone <repository-url>
cd palavria

cmake -S . -B build -G Ninja
cmake --build build
```

### Execução

```bash
./build/palavria
```

## 🗺️ Roadmap

### Milestone 0 — Fundação
- [x] CMake
- [x] raylib
- [x] Janela
- [x] Game loop
- [ ] Sistema de estados
- [ ] Input
- [ ] Menu principal

### Milestone 1 — Primeiro protótipo
- [ ] Mapa
- [ ] Territórios
- [ ] Movimento
- [ ] Primeiro encontro linguístico
- [ ] Resultado do encontro

### Milestone 2 — Sistema linguístico
- [ ] Vocabulário
- [ ] Gramática
- [ ] Compreensão
- [ ] Leitura
- [ ] Registro
- [ ] Nuance
- [ ] Dados em JSON

### Milestone 3 — Roguelike
- [ ] Geração procedural
- [ ] Eventos
- [ ] Diplomacia
- [ ] Conquista territorial
- [ ] Morte da expedição
- [ ] Meta-progressão

## 📜 Licença

A definir.
