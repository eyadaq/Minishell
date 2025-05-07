# Minishell

This project is a simplified shell created as part of the 42 curriculum. The objective is to build a functional shell that mimics the behavior of a real Unix shell with built-in commands, pipelines, redirections, and environment handling.

## 🛠️ Features

- Prompt display and user input parsing
- Built-in commands:
  - `echo`
  - `cd`
  - `pwd`
  - `export`
  - `unset`
  - `env`
  - `exit`
- Environment variable management
- Command execution using `PATH`
- Pipes (`|`)
- Input (`<`), output (`>`) and append (`>>`) redirections
- Heredoc (`<<`)
- Signal handling (e.g. `Ctrl+C`, `Ctrl+\`, `Ctrl+D`)
- Error handling for invalid commands and syntax

## 🧠 How It Works

The shell reads user input, parses it into tokens (considering quotes and special characters), builds a syntax tree or execution plan, and then executes the command(s), handling redirections and pipes when needed.

## 🔧 Requirements

- Linux environment (preferably Ubuntu)
- C compiler (tested with `gcc`)
- `make`

## 🧪 Usage

Clone the repository and run:

```bash
make
./minishell
