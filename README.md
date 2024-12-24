# Conversor de Unidades em C

## Sobre o Projeto

Este projeto é um programa CLI (Command Line Interface) desenvolvido em C, como parte da **Residência Pedagógica em Sistemas Embarcados - Embarcatech**. O objetivo principal é realizar conversões entre diferentes unidades de medida, abrangendo diversas categorias de grandezas físicas. Além disso, o projeto visa fomentar boas práticas de programação colaborativa, com foco em versionamento de código e depuração.

## Funcionalidades

O programa suporta as seguintes conversões:

- **Área:**
  - Metro Quadrado (m²) ↔ Centímetro Quadrado (cm²)

- **Comprimento:**
  - Metros (m) ↔ Centímetros (cm)
  - Metros (m) ↔ Milímetros (mm)
  - Centímetros (cm) ↔ Milímetros (mm)

- **Massa:**
  - Quilogramas (kg) ↔ Gramas (g)
  - Quilogramas (kg) ↔ Toneladas (t)
  - Gramas (g) ↔ Toneladas (t)

- **Volume:**
  - Litros (L) ↔ Mililitros (mL)
  - Litros (L) ↔ Metros cúbicos (m³)
  - Mililitros (mL) ↔ Metros cúbicos (m³)

- **Temperatura:**
  - Celsius (°C) ↔ Fahrenheit (°F)
  - Celsius (°C) ↔ Kelvin (K)
  - Fahrenheit (°F) ↔ Kelvin (K)

- **Tempo:**
  - Segundos (s) ↔ Minutos (min)
  - Minutos (min) ↔ Horas (h)
  - Segundos (s) ↔ Horas (h)

## Tecnologias Utilizadas

- **Linguagem:** C
- **Interface:** CLI
- **Versionamento de Código:** Git/GitHub
- **Editor Recomendado:** VS Code

## Estrutura do Projeto

```plaintext
.
├── src
│   ├── main.c              # Ponto de entrada do programa
│   ├── conv_area.c         # Conversões de área (implementação)
│   ├── conv_area.h         # Conversões de área (definição)
│   ├── conv_comprimento.c  # Conversões de comprimento (implementação)
│   ├── conv_comprimento.h  # Conversões de comprimento (definição)
│   ├── conv_massa.c        # Conversões de massa (implementação)
│   ├── conv_massa.h        # Conversões de massa (definição)
│   ├── conv_volume.c       # Conversões de volume (implementação)
│   ├── conv_volume.h       # Conversões de volume (definição)
│   ├── conv_temperatura.c  # Conversões de temperatura (implementação)
│   ├── conv_temperatura.h  # Conversões de temperatura (definição)
│   └── conv_tempo.c        # Conversões de tempo (implementação)
│   └── conv_tempo.h        # Conversões de tempo (definição)
├── README.md               # Documentação do projeto
└── LICENSE                 # Licença do projeto
```

## Como Contribuir

1. Faça um fork do repositório.
2. Clone o projeto localmente:
   ```bash
   git clone https://github.com/seu-usuario/conversor-unidades-c
   ```
3. Crie uma branch para a funcionalidade que deseja implementar:
   ```bash
   git checkout -b feature/nome-da-funcionalidade
   ```
4. Faça os commits com mensagens claras e descritivas:
   ```bash
   git commit -m "Implementação da conversão Celsius para Kelvin"
   ```
5. Envie a sua branch para o repositório remoto:
   ```bash
   git push origin feature/nome-da-funcionalidade
   ```
6. Abra um Pull Request explicando suas alterações.

## Guia de Estilo de Código

- Siga o padrão de nomenclatura descritiva para funções e variáveis.
- Documente todas as funções com comentários no formato:

```c
/*
 * Função: conv_celsius_kelvin
 * ---------------------------
 * Converte uma temperatura de Celsius para Kelvin.
 *
 * Parâmetros:
 *  - valor_c: temperatura em Celsius a ser convertida.
 *
 * Retorno:
 *  - O valor da temperatura convertido para Kelvin.
 */
```

- Realize commits frequentes e descritivos.
- Utilize a branch correspondente ao tópico que está desenvolvendo.

## Instruções de Uso

1. Compile o programa:
   ```bash
   gcc src/main.c -o conversor
   ```
2. Execute o programa:
   ```bash
   ./conversor
   ```
3. Siga as instruções da interface para realizar conversões.

## Licença

Este projeto está licenciado sob a Licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

---

Escrito em C para a Residência Pedagógica Embarcatech.