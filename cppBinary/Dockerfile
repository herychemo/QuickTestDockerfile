FROM ubuntu:latest

# Cmake Gcc
RUN apt-get update

RUN apt-get install -y \
    cmake \
    gcc \
    clang \
    gdb \
    build-essential

RUN apt-get install -y \
    wget \
    unzip

RUN apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*


# Googletest - GTest
RUN mkdir -p /opt/gtest \
    && cd /opt/gtest    \
    && wget https://github.com/google/googletest/archive/release-1.8.1.zip  \
    && unzip release-1.8.1.zip

WORKDIR /opt/gtest/googletest-release-1.8.1
RUN cmake -DBUILD_SHARED_LIBS=ON . && make

WORKDIR /opt/gtest/googletest-release-1.8.1/googletest
RUN cp -a include/gtest/ /usr/include/

WORKDIR /opt/gtest/googletest-release-1.8.1/googlemock/gtest
RUN cp -a libgtest_main.so libgtest.so /usr/local/lib/

RUN ldconfig -v | grep gtest


WORKDIR /home/ubuntu
