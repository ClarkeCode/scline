# Simple Command Line
A simple command line utility to read a user's input from `stdin` and store it as a heap-allocated C-string.

Originally designed to allow for terminal-style history within [Brash's](https://github.com/ClarkeCode/brash) [REPL mode](https://en.wikipedia.org/wiki/Read%E2%80%93eval%E2%80%93print_loop)

## Features
- Self-contained
- Simple Interface
- Dynamic memory management to allow arbitrarily large inputs
- A configurable-length history (Accessed with the Up and Down arrow keys)
- Extensible and straightforward
- Written in pure C

## *Not* designed to:
- Act as a full terminal emulator (although it could be a component of one)
- Handle non-ASCII characters
- Handle [right-to-left scripts](https://en.wikipedia.org/wiki/Right-to-left_script) such as Arabic or Hebrew
- Work on non-Linux operating systems
