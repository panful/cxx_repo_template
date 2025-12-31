# Modern C++ Project Template

A professional, cross-platform C++ template integrated with a robust toolchain for high-quality code development. This template leverages **CMake Presets**, **Clang** tools, and **Pre-commit** hooks to ensure a consistent and clean development workflow.

---

## 🚀 Key Features

* **Build System:** [CMake](https://cmake.org/) with [CMakePresets.json](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html) for simplified configuration.
* **High Performance:** Uses [Ninja](https://ninja-build.org/) as the default build generator.
* **Static Analysis:** Integrated [Clang-Tidy](https://clang.llvm.org/extra/clang-tidy/) for deep code analysis.
* **Code Formatting:** [Clang-Format](https://clang.llvm.org/docs/ClangFormat.html) (Google Style) enforced via Git hooks.
* **LSP Support:** [Clangd](https://clangd.llvm.org/) integration for superior IDE features (autocompletion, navigation).
* **Automation:** Git `pre-commit` hooks to ensure code quality before every commit.

---

## 🛠 Prerequisites

Before cloning, ensure the following tools are installed on your system:

| Tool | Purpose | Recommended Installation |
| :--- | :--- | :--- |
| **C++ Compiler** | Compiles the code | MSVC (VS 2022+), GCC 11+, or Clang 14+ |
| **Python 3.x** | Manages pre-commit hooks | [python.org](https://www.python.org/) |
| **CMake (3.21+)** | Project configuration | `pip install cmake` or system installer |
| **Ninja** | Fast build generator | `pip install ninja` or system installer |
| **LLVM Tools** | Clang-format, Tidy, Clangd | [LLVM Releases](https://github.com/llvm/llvm-project/releases) |

> **Note for Windows Users:** Ensure these tools are added to your system `PATH`.

---

## 🏁 Getting Started

Follow these steps to initialize your local development environment:

### 1. Clone the Repository
```bash
git clone <your-repo-url>
cd <your-repo-name>
```

### 2. Install Pre-commit Hooks
The project uses Git hooks to format code automatically. Install the manager via Python:

```bash
pip install pre-commit
pre-commit install
```
