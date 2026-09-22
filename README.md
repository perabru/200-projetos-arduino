<div align="center">
⚡ ARDUINO NEON LAB
200 projetos • Uma apostila • Códigos prontos para estudo
Da primeira piscada de LED aos sensores, displays, comunicação e robótica.  
Uma coleção didática em português, organizada para facilitar aulas, oficinas e experimentos com Arduino Uno.
![Projetos](https://img.shields.io/badge/Projetos-200-8B5CF6?style=for-the-badge)
![Sketches](https://img.shields.io/badge/Sketches-203-A855F7?style=for-the-badge)
![Apostila](https://img.shields.io/badge/Apostila-208%20p%C3%A1ginas-6D28D9?style=for-the-badge)
![Placa](https://img.shields.io/badge/Arduino-Uno-0F766E?style=for-the-badge)
📘 ABRIR A APOSTILA · 💻 EXPLORAR OS 200 PROJETOS · 🧪 VER RESULTADOS ESPERADOS
</div>
---
✨ Explore o repositório
Material	O que você encontra	Acesso
📘 Apostila ilustrada	208 páginas com objetivos, materiais, tabelas de pinagem, código e explicação de 200 projetos.	Ler PDF
💻 Códigos Arduino	200 projetos, com 203 arquivos `.ino` no total (3 sketches complementares para a segunda placa).	Abrir índice · Ver pastas
🧪 Resultados	Comportamentos esperados e roteiro de verificação, sem inventar testes.	Conferir resultados
📋 Registro de testes	Planilha CSV com 200 entradas inicialmente `PENDENTE`, pronta para observações reais.	Abrir planilha
🔌 Pinagem	Referência de ligações em CSV para consulta e filtragem.	Ver pinagem
📦 ZIP sem pastas internas	Todos os 203 sketches `.ino` em um ZIP sem subpastas, para download de uma só vez.	Baixar só os códigos
> [!NOTE]
> **Sobre os resultados:** as saídas descritas são *esperadas segundo os códigos*, não medições obtidas em laboratório. Compile e teste cada projeto no seu hardware antes de divulgar resultados como comprovados.
🧭 Por onde começar?
```text
📁 apostila/       → Livro completo em PDF
📁 codigos/        → Sketches organizados por projeto + notas de montagem
📁 documentacao/   → Tabela geral de pinagem, índice e bibliotecas
📁 resultados/     → Resultados esperados e planilha para testes reais
📁 downloads/      → ZIP com todos os .ino sem pastas internas
📄 README.md       → Você está aqui
📄 INDICE_DE_PROJETOS.md → Navegação pelos 200 projetos
```
🔍 Amostras para explorar
Nível de entrada	Projeto	Experimento
Comece aqui	001 — Blink com LED interno	Testar uma saída digital sem montagem externa.
Fundamentos	004 — Semáforo com 3 LEDs	Sequência de três saídas temporizadas.
Sensores	023 — Termômetro DHT11	Ler temperatura e umidade pela Serial.
Interfaces	050 — Mensagem no OLED	Exibir texto em um display I²C.
Integração	150 — Estufa inteligente	Combinar sensor de solo, DHT11, OLED e relé.
Robótica	200 — Robô sumô	Detectar a borda e localizar um obstáculo.
🛠️ Como executar um projeto
Instale o Arduino IDE e conecte a placa Arduino Uno por USB.
Abra o índice completo e selecione o projeto. Na pasta correspondente, leia `notas.md` e `BIBLIOTECAS.txt`.
Confira a pinagem na apostila. Identifique se o seu módulo é de 3,3 V ou 5 V, e não conecte motores/bombas diretamente aos pinos da placa.
Abra o arquivo principal `.ino` no Arduino IDE. Se ele solicitar, permita que o IDE crie uma pasta com o mesmo nome do sketch; isso é normal no IDE e não modifica o ZIP plano.
Em Ferramentas → Placa, escolha Arduino Uno; selecione a porta USB e envie o código.
Compare a execução com os resultados esperados e preencha o registro de testes.
Projetos com dois Arduinos: os números 086, 090 e 187 têm um segundo sketch em `codigos/CODIGOS_COMPLEMENTARES/`. Carregue cada arquivo em sua placa, conforme as notas de montagem.
📦 Bibliotecas e conexões
A biblioteca necessária muda de projeto para projeto. Consulte o `BIBLIOTECAS.txt` da pasta escolhida e a lista geral de bibliotecas. Algumas são nativas do Arduino (`Wire`, `SPI`, `Servo`); outras podem precisar de instalação pelo gerenciador de bibliotecas do IDE. Confira versões e pinagens para o modelo de hardware realmente usado.
> [!WARNING]
> **Segurança:** desligue as fontes antes de alterar as conexões. Use resistores para LEDs, drivers para motores e fontes externas dimensionadas para servos/bombas, compartilhando GND quando aplicável. Não experimente rede elétrica de 127/220 V na protoboard. Módulos de 3,3 V podem exigir adequação de nível lógico.
🧪 Resultados e contribuição
Este repositório fornece material didático e critérios de observação, mas não afirma que os 200 circuitos foram montados, medidos ou validados fisicamente. Use a planilha de resultados para documentar testes com data, placa, bibliotecas, observações e links de evidências. Contribuições com correções de pinagem, testes reproduzíveis e melhorias de código são bem-vindas após revisão.
---
<div align="center">
⚡ Aprenda • Monte • Programe • Teste • Compartilhe
⬆️ Voltar ao início
</div>
