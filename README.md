# authscan

A lightweight, zero-dependency C++17 command-line tool that parses SSH authentication logs (`auth.log`) to extract IP addresses from failed login attempts.

## About This Project
This is my first C++ project, built to practice file I/O, string manipulation, and basic CLI tooling using only the C++ Standard Library.

Since I am still learning C++, **suggestions, tips, and code reviews from experienced developers are very welcome!**

## Build & Run

Compile with any C++17 compatible compiler:

```bash
g++ -std=c++17 main.cpp -o authscan
Run against the included sample log:

# Linux / macOS
./authscan

# Windows (PowerShell)
.\authscan.exe

Roadmap:

[x] v0.1 Extract IPv4 and IPv6 addresses from failed SSH login lines

[ ] v0.2 Count attempts per IP using std::unordered_map and sort by frequency

[ ] v0.3 Support custom file paths and flags via command-line arguments (argc/argv)
