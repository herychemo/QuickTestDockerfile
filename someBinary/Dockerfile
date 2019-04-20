FROM ubuntu:latest

RUN apt-get update

RUN apt-get install -y \
    cmake \
    gcc \
    clang \
    gdb \
    build-essential

RUN apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

