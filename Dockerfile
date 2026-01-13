# Use Ubuntu 22.04 as base image
FROM ubuntu:22.04

# Install g++ for compilation
RUN apt-get update && apt-get install -y g++

# Copy your project files into the container
COPY . /app
WORKDIR /app

# Compile the project
RUN g++ main.cpp -o system_monitor

# Run the program when container starts
CMD ["./system_monitor"]
