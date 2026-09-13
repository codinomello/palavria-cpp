# 🛠️ Instalação

## 📋 Requisitos

Antes de compilar o projeto, instale:

* **C++20 ou superior**
* **CMake 3.20+**
* **Git**
* **raylib**
* Compilador compatível com C++20:

  * GCC
  * Clang
  * MSVC

### Linux / WSL2

Em distribuições baseadas em Debian/Ubuntu:

```bash
sudo apt update

sudo apt install \
    build-essential \
    cmake \
    git \
    libraylib-dev
```

> Caso sua distribuição não possua uma versão recente do raylib nos repositórios, utilize a versão incluída pelo projeto através do CMake.

---

## 📥 Clonando o projeto

```bash
git clone https://github.com/SEU-USUARIO/PolyglotDominion.git

cd PolyglotDominion
```

---

## 🔨 Compilação

O projeto utiliza **CMake** e recomenda-se realizar uma build fora do diretório `src/`.

```bash
cmake -S . -B build
cmake --build build
```

Para uma build otimizada:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---

## ▶️ Executando

### Linux / WSL2

```bash
./build/PolyglotDominion
```

Dependendo da configuração do CMake, o executável poderá estar em:

```text
build/bin/PolyglotDominion
```

Nesse caso:

```bash
./build/bin/PolyglotDominion
```

### Windows

Com Visual Studio:

```powershell
cmake -S . -B build
cmake --build build --config Release
```

Depois execute:

```powershell
.\build\Release\PolyglotDominion.exe
```

---

## 🧹 Limpando a build

Para remover completamente os arquivos gerados pelo CMake:

### Linux / WSL2

```bash
rm -rf build
```

Depois basta configurar novamente:

```bash
cmake -S . -B build
cmake --build build
```

### Windows

```powershell
Remove-Item -Recurse -Force build
```

---

## 🧪 Build de desenvolvimento

Durante o desenvolvimento, recomenda-se utilizar:

```bash
cmake -S . -B build \
    -DCMAKE_BUILD_TYPE=Debug

cmake --build build
```

A versão `Debug` facilita:

* 🐛 Debugging
* 🔍 Inspeção de estados
* 🧪 Testes
* 📊 Ferramentas internas
* 🧠 Desenvolvimento dos sistemas linguísticos

---

## 📦 Dependências

As dependências principais do projeto são:

```text
Polyglot Dominion
│
├── raylib
├── nlohmann/json
└── Catch2
```

Quando possível, as dependências serão gerenciadas pelo próprio **CMake**, evitando a necessidade de instalação manual.

---

## ⚙️ Estrutura de Build

Após a compilação, a estrutura esperada é:

```text
PolyglotDominion/
├── assets/
├── src/
├── tests/
├── libs/
├── build/
│   ├── ...
│   └── PolyglotDominion
├── CMakeLists.txt
└── README.md
```

O diretório `build/` é gerado automaticamente e **não deve ser versionado**.

Adicione-o ao `.gitignore`:

```gitignore
build/
cmake-build-*/
.vscode/
.idea/
```

---

## 🚀 Primeiro Build

Para uma instalação rápida:

```bash
git clone https://github.com/SEU-USUARIO/PolyglotDominion.git
cd PolyglotDominion
cmake -S . -B build
cmake --build build
```

Depois:

```bash
./build/PolyglotDominion
```

🎮 **Se a janela do jogo abrir, o ambiente está pronto para desenvolvimento.**
