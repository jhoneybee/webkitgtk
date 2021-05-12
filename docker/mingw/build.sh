#!/bin/bash

rm -rf .build-docker
mkdir .build-docker
cp -rf ./Dockerfile .build-docker
cp -rf ./mingw-w64-x86_64.cmake .build-docker
cp -rf ../../src .build-docker/src
cp -rf ../../CMakeLists.txt .build-docker/CMakeLists.txt
sudo docker build --tag webkitgtk-window:1.0 .
# docker run -t -d --name builder --privileged webkitgtk-window:1.0