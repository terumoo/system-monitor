# System Monitor Tool

## Overview
This is a simple Linux command-line tool written in **C++** that displays basic system information including memory and CPU details.  
It is designed to run in a Linux environment (tested on Ubuntu via WSL) and is fully **Docker-compatible** for easy portability.

---

## Features
- Reads and displays memory usage from `/proc/meminfo`  
- Reads and displays CPU information from `/proc/cpuinfo`  
- Lightweight, terminal-based interface  
- Dockerized for easy deployment  

---

## Requirements
- Linux (or WSL on Windows)  
- g++ compiler  
- Docker (optional, for containerized execution)  

---

## How to Run

### 1. Run locally (WSL or Linux)
Compile the program:

```bash
g++ main.cpp -o system_monitor
