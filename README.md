# CatClean ![Version v1.0.0](https://img.shields.io/badge/version-v1.0.0-blue "Version v1.0.0")

CatClean is a command-line utility written in C++ that removes comment lines and blank lines from a text file.

## Installation

You can install CatClean by following these steps:

1. Download the latest version of the `.deb` package from the [Releases](https://github.com/kernelpanic2015/catclean/releases) page.

2. Open a terminal and navigate to the directory where the `.deb` package is located.

3. Run the following command to install the package:

```shell
   sudo dpkg -i catclean-package.deb

```

# Build from souce

CatClean is a command-line utility written in C++ that removes comment lines and blank lines from a text file.

## Prerequisites

Make sure you have a C++ compiler installed on your system. You can use GCC or any other compiler of your choice.

## Compilation

To compile the program, run the following command in the terminal:

```bash
cd src/
g++ -o catclean catclean.cpp 
```

This will generate an executable named `catclean`.

## Usage

```bash
catclean [FILE] [-o OUTPUT_FILE]
```

- `[FILE]`: Specify the input file to be processed.
- `-o [OUTPUT_FILE]` (optional): Specify the output file. If not provided, the result will be printed to the screen.

### Usage Examples

- Process a file and print the result to the screen:

```bash
catclean text.txt
```

- Process a file and save the result to an output file:

```bash
catclean text.txt -o clean_text.txt
```


## Contributing

Contributions are welcome! Feel free to open issues and submit pull requests with improvements, bug fixes, or new features.

## License

This project is licensed under the [MIT License](LICENSE).
